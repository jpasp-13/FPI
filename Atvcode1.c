#include<stdio.h>
int main(){
    int t;
    int n;
    int elemento;
    int tamsequencia = 1;
    int maiorsequencia = 1;
    int primeiro = -1; 
    int melhorprimeiro;
    int verificador = 0;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d",&n);
        int lista[n];
            tamsequencia = 1;
            maiorsequencia = 1;
            primeiro = -1; 
            melhorprimeiro = 0;
            verificador = 0;
        for (int i = 0; i < n; i++){
            scanf("%d", &elemento);
            lista[i] = elemento;
        }
        for(int i = 1; i < n; i++){
            if(lista[i] < lista[i -1]){
                tamsequencia += 1;
                if(primeiro == -1){
                    primeiro = i - 1;
                }
                if (tamsequencia > maiorsequencia) {
                maiorsequencia = tamsequencia;
                melhorprimeiro = primeiro;
                verificador += 1; 
            }
            }
            else{
                tamsequencia = 1;
                primeiro = -1;
            }

        }
        if(verificador != 0 && n != 1){
        printf("\n%d\n", maiorsequencia);
        for(int i = 0; i < maiorsequencia; i++){
        printf("%d ", lista[melhorprimeiro]);
        melhorprimeiro += 1; 
    }
    }
    else{
        printf("\n%d", 0);
    }
    }

    return 0;
}