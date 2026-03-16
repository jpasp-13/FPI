#include<stdio.h>
int main(){
    int n, k, p;
    scanf("%d %d %d", &n, &k, &p);
    int primos = 0;
    int f = 0;
    int x;
    int primeiro = 0;
    int q = 0;
    for(int x = n; x <= k; x++){
        f = x;
        primos = 0;
        while(f != 1){
        while(f % 2 == 0){
            if (f % 2 == 0){
            f /= 2;
        }
    }

        for(int id = 3; id <= f && f != 1; id += 2){
            if(f % id == 0){
            f /= id;
            if(f % id != 0){
                primos += 1;
                if(primos == p){
                    q += 1;
                if (primeiro == 0){
                    primeiro = x;
                    q -=1;
                }
            }
            } 
            
        }
        }
        }    
    } 

    if(primeiro == 0){
        printf("Poxa dudinha, me desculpe, não achei os números mas vou te mandar uma foto de um gatinho fofo.");
    }
    else{
        printf("%d", primeiro);
        printf(" %d", q);
    }















    return 0;
}