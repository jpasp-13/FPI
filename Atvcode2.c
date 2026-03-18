#include<stdio.h>
int main(){
    int n, k, p;
    scanf("%d %d %d", &n, &k, &p);
    int primos = 0;
    int f = 0;
    int x;
    int primeiro = 0;
    int q = 0;
    int u = 0;
    for(int x = n; x <= k; x++){
        f = x;
        primos = 0;
        while(f != 1){
        while(f % 2 == 0){
            if (f % 2 == 0){
            f /= 2;
        }
    }
    if(p == 0 && f == 1){
        q += 1;
        if(primeiro == 0){
            primeiro = x;
            q -= 1;
        }
    }

        for(int id = 3; id <= f && f != 1; id += 2){
            if(f % id == 0){
                u = 0;
                while(f % id == 0){
                    f /= id;
                    u += 1;        
                }
                if(u == 1){
                    primos += 1;
                }
                else{
                    primos = 101;
                    f = 1;
                }
                if(primos == p && f == 1){
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

    if(primeiro == 0){
        printf("Poxa dudinha, me desculpa, nao achei os numeros mas vou te mandar uma foto de um gatinho fofo.");
    }
    else{
        printf("%d", primeiro);
        printf(" %d", q);
    }















    return 0;
}