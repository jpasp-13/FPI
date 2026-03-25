#include <stdio.h>

int main() {
    char buf[101];
    int len = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF && len < 100)
        buf[len++] = c;
    buf[len] = '\0';

    int inicio[50], tamanho[50], npal = 0;

    int i = 0;
    while (buf[i] != '\0') {
        if ((buf[i] >= 'a' && buf[i] <= 'z') || (buf[i] >= 'A' && buf[i] <= 'Z')) {
            inicio[npal] = i;
            int tam = 0;
            while ((buf[i] >= 'a' && buf[i] <= 'z') || (buf[i] >= 'A' && buf[i] <= 'Z')) {
                i++;
                tam++;
            }
            tamanho[npal] = tam;
            npal++;
        } else {
            i++;
        }
    }

    int pares = 0;
    int pa[100], pb[100];

    for (int a = 0; a < npal; a++) {
        for (int b = a + 1; b < npal; b++) {
            if (tamanho[a] == tamanho[b]) {
                int fa[26] = {0};
                for (int k = 0; k < tamanho[a]; k++) {
                    char ch = buf[inicio[a] + k];
                    if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
                    fa[ch - 'a']++;
                }

                int fb[26] = {0};
                for (int k = 0; k < tamanho[b]; k++) {
                    char ch = buf[inicio[b] + k];
                    if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
                    fb[ch - 'a']++;
                }

                int igual = 1;
                for (int k = 0; k < 26; k++)
                    igual = igual && (fa[k] == fb[k]);

                if (igual) {
                    pa[pares] = a;
                    pb[pares] = b;
                    pares++;
                }
            }
        }
    }

    if (pares == 0) {
        printf("Nao existem anagramas na frase.\n");
    } else {
        printf("Pares de anagramas encontrados:\n");
        for (int k = 0; k < pares; k++) {
            int a = pa[k], b = pb[k];
            for (int j = 0; j < tamanho[a]; j++)
                printf("%c", buf[inicio[a] + j]);
            printf(" e ");
            for (int j = 0; j < tamanho[b]; j++)
                printf("%c", buf[inicio[b] + j]);
            printf("\n");
        }
        printf("\nTotal de pares: %d\n", pares);
    }

    return 0;
}