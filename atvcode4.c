#include<stdio.h>
int main(){
    int x, y, q;
    scanf("%d %d %d", &x, &y, &q);
    
    
    // preciso saber em qual quadrante ele está 
    if (x > 0 && y > 0){ // nesse caso seria o primeiro
    int xandado = x + 1;
    int yandado = y + 1;      
    int quadrantealvo = 3;
    if(q == 1 || q == 3){    
    printf("caminhada invalida\n");
    }
    else if(q == 2){ // primeiro em y
        printf("%d passos em y e %d passos em x", yandado, xandado);
    }
    else if (q == 4){
        printf("%d passos em x e %d passos em y", xandado, yandado);
    }
    }
    else if(x < 0 && y > 0){ // esse é o segundo      
    int quadrantealvo = 4;
    int xandado = (x * -1) + 1;
    int yandado = y + 1;
    if(q == 2 || q == 4){
    printf("caminhada invalida\n");
    }
    else if(q == 1){ // primeiro em y
        printf("%d passos em y e %d passos em x", yandado, xandado);
    }
    else if (q == 3){
        printf("%d passos em x e %d passos em y", xandado, yandado);
    }
    

    }
    else if(x < 0 && y < 0){//3
    int quadrantealvo = 1;
    int xandado = (x * -1) + 1;
    int yandado = (y * -1) + 1;
    if(q == 3 || q == 1){
    printf("caminhada invalida\n");
    }
    else if(q == 4){ // primeiro em y
        printf("%d passos em y e %d passos em x", yandado, xandado);
    }
    else if (q == 2){
        printf("%d passos em x e %d passos em y", xandado, yandado);
    }

    }
    else if(x > 0 && y < 0){//4
    int quadrantealvo = 2;
    int xandado = x + 1;
    int yandado = (y * -1) + 1;
    if(q == 4 || q == 2){
    printf("caminhada invalida\n");
    }
    else if(q == 3){ // primeiro em y
        printf("%d passos em y e %d passos em x", yandado, xandado);
    }
    else if (q == 1){
        printf("%d passos em x e %d passos em y", xandado, yandado);
    }

    }

}