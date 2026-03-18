#include<stdio.h>
int main(){
    int x; // numero da pessoa 
    int n; // quantidade de canais
    int Melhorcanal = -1;
    int Melhorminuto = -1;
    int Melhortermo = -1;
    int Melhordist = -1;
    scanf("%d %d", &x, &n);
    int primeiro, segundo;
    for(int i = 1; i <= n; i++){
        scanf("%d %d", &primeiro, &segundo);
        int melhortermo = primeiro;
        int melhorminuto = 1;
        int melhordist = (primeiro > x) ? primeiro - x : x - primeiro;

        int d2 = (segundo > x) ? segundo - x : x - segundo;
        if (d2 < melhordist) {
            melhordist = d2;
            melhortermo = segundo;
            melhorminuto = 2;
        }
        int prev = primeiro, curr = segundo;
        int minuto = 2;
        int prox = 0;
        while (prev + curr <= x + melhordist) {
            int prox = prev + curr;
            minuto++;
            int d = (prox > x) ? prox - x : x - prox;

            if (d < melhordist) {
                melhordist = d;
                melhortermo = prox;
                melhorminuto = minuto;
            }

            prev = curr;
            curr = prox;
            
    }
        if (Melhorcanal == -1 || melhordist <= Melhordist) {
            Melhorcanal = i;
            Melhorminuto = melhorminuto;
            Melhortermo = melhortermo;
            Melhordist = melhordist;
        }
    }

    int vip = 0;
    int temp = Melhortermo;
    int soma = 0;
    while (temp > 0) {
        soma += temp % 10;
        temp /= 10;
    }
    if (soma > 10)
        vip = 1;

    // Saída
    if (vip) {
        printf("Xupenio, para ir ao lulupalooza vc deve entrar no canal %d e sera chamado mais ou menos no minuto %d e com o VIP garantido!!!\n", Melhorcanal, Melhorminuto);
    } else {
        printf("Xupenio, para ir ao lulupalooza vc deve entrar no canal %d e sera chamado mais ou menos no minuto %d, mas o ingresso VIP não vai rolar :(\n", Melhorcanal, Melhorminuto);
    }

    return 0;
}