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
    }
    else if (20 <=amor && amor <= 40){
        printf("Amor:%d%% Melhor manter o coração <3 longe de perigo.",amor);
    }
    else if (41 <= amor && amor <= 69){
        printf("Amor:%d%% Se o papo e as ideias baterem, esta liberado pensar em algo.", amor);
    }
    else if (70 <= amor && amor <= 80){
        printf("Amor:%d%% Saia com o coração aberto, mas lembre-se, nem toda troca de olhar em onibus e sinal de romance.", amor);
    }
    else {
        printf("Amor:%d%% Um dia deslumbrantemente lindo para amar. Ps: Cuidado com a intensidade.", amor);
    }
    // sorte
    int sorte = ((data1dia * 9) + (data1mes * 9) + (data2dia * 9) + (data2mes * 9) + (data2ano - data1ano)) % 101;

    if (sorte < 30){
        printf("Sorte:%d%% Nem jogue moedas pra cima hoje.", sorte);
    }
    else if (30 <= sorte && sorte <= 50){
        printf("Sorte:%d%% Melhor nao arriscar.", sorte);
    }
    else if (51 <= sorte && sorte <= 79){
        printf("Sorte:%d%% Por sua conta em risco.", sorte);
    }
    else if (80 <= sorte && sorte <= 90){
        printf("Sorte:%d%% Hoje vale a pena arriscar.", sorte);
    }
    else {
        printf("Sorte:%d%% Nao tenha medo de virar cartas hoje.", sorte);
    }
    printf("Sem tigrinho nem jogos de azar, por favor!");
    

    return 0;

    }