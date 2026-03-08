#include<stdio.h>
int main(){
    int dinheiro, a, b, c;
    int dinheiroRebeka = 3;
    scanf("%d", &dinheiro);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float valora = dinheiro * (a/100.0);
    float valorb = dinheiro * (b/100.0);
    float valorc = dinheiro * (c/100.0);

    if ((dinheiro * a) % 100 == 0 && (dinheiro * b) % 100 == 0 && (dinheiro * c) % 100 == 0) {
        printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", (int)valora, (int)valorb, (int)valorc);
        if ((int)valora + (int)valorb + (int)valorc != dinheiro){
            dinheiroRebeka += dinheiro - (valora + valorb + valorc);
        }
        if (dinheiroRebeka >= 7){
            printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
        }
        else{
            printf("E parece que Rebeka vai ter que voltar andando...\n");
        }

     } else {
        dinheiro += 1;
        dinheiroRebeka -= 1;
        valora = dinheiro * (a/100.0);
        valorb = dinheiro * (b/100.0);
        valorc = dinheiro * (c/100.0);
        int sobra = dinheiro - (valora + valorb + valorc);
        if(((dinheiro * a) % 100 == 0 && (dinheiro * b) % 100 == 0 && (dinheiro * c) % 100 == 0) && (sobra > 1)){
            printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", (int)valora, (int)valorb, (int)valorc);
            dinheiroRebeka += sobra;
            if (dinheiroRebeka >= 7){
                printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
            }
            else{
                printf("E parece que Rebeka vai ter que voltar andando...\n");
            }            
        }
        else{
            sobra = 0;
            dinheiro += 1;
            dinheiroRebeka -= 1;
            valora = dinheiro * (a/100.0);
            valorb = dinheiro * (b/100.0);
            valorc = dinheiro * (c/100.0);
            sobra = dinheiro - (valora + valorb + valorc);
            if(((dinheiro * a) % 100 == 0 && (dinheiro * b) % 100 == 0 && (dinheiro * c) % 100 == 0) && (sobra > 2)){
            printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", (int)valora, (int)valorb, (int)valorc);
            dinheiroRebeka += sobra;
            if (dinheiroRebeka >= 7){
                printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
            }
            else{
                printf("E parece que Rebeka vai ter que voltar andando...\n");                
            }
        }
    }
}
     return 0;
}