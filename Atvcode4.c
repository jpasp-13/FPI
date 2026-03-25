#include <stdio.h>

int main() {
    int R;
    scanf("%d", &R);

    char gigante[100000];
    int tamanho_gigante = 0;

    int inicio_resultado[1000], tamanho_resultado[1000];

    for (int t = 0; t < R; t++) {
        char s[61];
        int C;
        scanf("%s %d", s, &C);

        int n = 0;
        while (s[n] != '\0') n++;

        for (int cl = 0; cl < C; cl++) {
            int i = 0;
            while (i < n && s[i] == 'O') {
                s[i] = 'X';
                i++;
            }
            if (i < n) s[i] = 'O';
        }

        if (t > 0) {
            char ultimo_led = gigante[tamanho_gigante - 1];
            char primeiro_led = s[0];
            char ornamento;
            int tamanho_par = (tamanho_gigante % 2 == 0);
            int estados_iguais = (ultimo_led == primeiro_led);
            if ( tamanho_par &&  estados_iguais) ornamento = '@';
            if ( tamanho_par && !estados_iguais) ornamento = '$';
            if (!tamanho_par &&  estados_iguais) ornamento = '#';
            if (!tamanho_par && !estados_iguais) ornamento = '%';
            gigante[tamanho_gigante++] = ornamento;
        }

        inicio_resultado[t] = tamanho_gigante;
        tamanho_resultado[t] = n;
        for (int j = 0; j < n; j++)
            gigante[tamanho_gigante++] = s[j];
    }
    gigante[tamanho_gigante] = '\0';

    for (int t = 0; t < R; t++) {
        for (int j = 0; j < tamanho_resultado[t]; j++)
            printf("%c", gigante[inicio_resultado[t] + j]);
        printf("\n");
    }
    printf("%s\n", gigante);

    return 0;
}