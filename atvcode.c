#include<stdio.h>
int main(){
    long long n, a, b;
    scanf("%lld", &n);
    scanf("%lld %lld", &a, &b);
    if (n < 1 || a < 1 || b < 1){
        return 0;
    }
    else if (n > 10000000 || a > 10000000 || b > 10000000){
        return 0;
    }
    long long somatotal = n * (n + 1) / 2;
    long long mutiplosa = n / a;
    long long mutiplosb = n / b;
    long long mutiplosab = n / (a * b);
    long long soma = somatotal - (a * mutiplosa * (mutiplosa + 1) / 2) - (b * mutiplosb * (mutiplosb + 1) / 2);
    printf("%lld\n", soma);
    if (soma % 2 == 0){
        printf("Lá ele!!!");
    }
    else{
        printf("Opa xupenio AULAS...");
    }
    return 0;
}