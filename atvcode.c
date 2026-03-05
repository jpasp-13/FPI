#include <stdio.h>

int main(){
    int data1dia;
    int data1mes;
    int data1ano;
    int data2dia;
    int data2mes;
    int data2ano;
    scanf("%d/%d/%d %d/%d/%d", &data1dia, &data1mes, &data1ano, &data2dia, &data2mes, &data2ano);
    // Amor
    int amor = (data1dia + data1mes + data1ano + data2dia + data2mes + data2ano) * 7  % 101;
    if (amor < 20){
        printf("Amor:%d%% Pessimo dia para se apaixonar.", amor);
        return 0;
    }
    else if (20 <=amor && amor <= 40){
        printf("Amor:%d%% Melhor manter o coração <3 longe de perigo.",amor);
        return 0;
    }
    else if (41 <= amor && amor <= 69){
        printf("Amor:%d%% Se o papo e as ideias baterem, esta liberado pensar em algo.", amor);
        return 0;
    }
    else if (70 <= amor && amor <= 80){
        printf("Amor:%d%% Saia com o coração aberto, mas lembre-se, nem toda troca de olhar em onibus e sinal de romance.", amor);
        return 0;
    }
    else {
        printf("Amor:%d%% Um dia deslumbrantemente lindo para amar. Ps: Cuidado com a intensidade.", amor);
        return 0;
    }
    
    
    
    printf("Amor:%d%%", amor);

    return 0;

    }