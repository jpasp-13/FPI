#include<stdio.h>
int main(){
    char letra;
    scanf("%c",&letra);
    for(char i = 'A'; i <= letra; i++){
         char l = i;
        while(l - letra < 0){
            printf(".");
            l++;
        }
        if(i > 'A' && i <= letra){
            for(char v = 'A'; v < i; v++){
                printf("%c", v);
            }
        }


        
        if(i >= 'A' && i <= letra){
            for(char v = i; v >= 'A'; --v){
                printf("%c", v);
            }
        }       
        char c = i;
        while(c - letra < 0){
            printf(".");
            c++;
        }
        printf("\n");
    
    }
    
    return 0;
}