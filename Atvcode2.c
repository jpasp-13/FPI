#include <stdio.h>

int main() {
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);

    int latas[10001] = {0};

    for (int i = 0; i < Y; i++) {
        int h, m, qtd;
        scanf("%d:%d %d", &h, &m, &qtd);
        int diff = (h * 60 + m) - (7 * 60);
        int c = diff / 3;
        if (c >= 1 && c <= N)
            latas[c] = qtd;
    }

    if (X != 0) {
        for (int c = X; c <= N; c += X) {
            if (latas[c] == 0)
                latas[c] = 1;
        }
    }

    int total = 0;
    for (int c = 1; c <= N; c++) {
        if (latas[c] == 0) continue;
        int prev = total;
        total += latas[c];
        if (prev < 50 && total >= 50) {
            int min = 7 * 60 + c * 3;
            int h = min / 60;
            int m = min % 60;
            if (latas[c] == 1)
                printf("Quem levou a cesta basica foi o %d* cliente atendido por coragem, as %02d:%02d. Que comprou %d lata.\n", c, h, m, latas[c]);
            else
                printf("Quem levou a cesta basica foi o %d* cliente atendido por coragem, as %02d:%02d. Que comprou %d latas.\n", c, h, m, latas[c]);
            return 0;
        }
    }

    int faltam = 50 - total;
    if (faltam == 1)
        printf("Ainda nao foram vendidas latas suficientes. Falta %d lata.\n", faltam);
    else
        printf("Ainda nao foram vendidas latas suficientes. Faltam %d latas.\n", faltam);

    return 0;
}