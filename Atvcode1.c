#include<stdio.h>

int main(){
    int altura, largura;
    scanf("%d %d", &altura, &largura);
    char parede[altura][largura + 1];
    for(int i = 0; i < altura; i++)
        scanf("%s", parede[i]);

    int gotalinha = 0, gotacoluna = 0;
    for(int j = 0; j < largura; j++)
        if(parede[0][j] == 'o')
            gotacoluna = j;


    int gotas_linha[200], gotas_col[200];
    int num_gotas = 1;
    gotas_linha[0] = gotalinha;
    gotas_col[0] = gotacoluna;

    int mudou = 1;
    while(mudou) {
        mudou = 0;
        int novas_linha[200], novas_col[200];
        int num_novas = 0;

        for(int g = 0; g < num_gotas; g++) {
            int gl = gotas_linha[g];
            int gc = gotas_col[g];

  
            if(gl >= altura - 1) {
                novas_linha[num_novas] = gl;
                novas_col[num_novas] = gc;
                num_novas++;
                continue;
            }

            if(parede[gl + 1][gc] == '.') {

                gl++;
                parede[gl][gc] = 'o';
                mudou = 1;
                novas_linha[num_novas] = gl;
                novas_col[num_novas] = gc;
                num_novas++;
            }
            else if(parede[gl + 1][gc] == '#') {

                int esq = gc, dir = gc;
                while(esq > 0 && parede[gl + 1][esq - 1] == '#')
                    esq--;
                while(dir < largura - 1 && parede[gl + 1][dir + 1] == '#')
                    dir++;


                int inicio = (esq - 1 >= 0) ? esq - 1 : 0;
                int fim = (dir + 1 < largura) ? dir + 1 : largura - 1;
                for(int j = inicio; j <= fim; j++)
                    parede[gl][j] = 'o';


                if(esq - 1 >= 0)
                    parede[gl + 1][esq - 1] = 'o';
                if(dir + 1 < largura)
                    parede[gl + 1][dir + 1] = 'o';

                mudou = 1;


                if(esq - 1 >= 0) {
                    novas_linha[num_novas] = gl + 1;
                    novas_col[num_novas] = esq - 1;
                    num_novas++;
                }
                if(dir + 1 < largura) {
                    novas_linha[num_novas] = gl + 1;
                    novas_col[num_novas] = dir + 1;
                    num_novas++;
                }
            }
        }

        num_gotas = num_novas;
        for(int g = 0; g < num_gotas; g++) {
            gotas_linha[g] = novas_linha[g];
            gotas_col[g] = novas_col[g];
        }
    }

    for(int i = 0; i < altura; i++){
        for(int j = 0; j < largura; j++)
            printf("%c", parede[i][j]);
        printf("\n");
    }
}