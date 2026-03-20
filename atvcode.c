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
        printf("Amor: %d%% Pessimo dia para se apaixonar.\n", amor);
    }
    else if (20 <=amor && amor <= 40){
        printf("Amor: %d%% Melhor manter o coracao <3 longe de perigo.\n",amor);
    }
    else if (41 <= amor && amor <= 69){
        printf("Amor: %d%% Se o papo e as ideias baterem, esta liberado pensar em algo.\n", amor);
    }
    else if (70 <= amor && amor <= 80){
        printf("Amor: %d%% Saia com o coracao aberto, mas lembre, nem toda troca de olhar em onibus e sinal de romance.\n", amor);
    }
    else {
        printf("Amor: %d%% Um dia deslumbrantemente lindo para amar. Ps: Cuidado com a intensidade.\n", amor);
    }
    // sorte
    int sorte = ((data1dia * 9) + (data1mes * 9) + (data2dia * 9) + (data2mes * 9) + (data2ano - data1ano)) % 101;

    if (sorte < 30){
        printf("Sorte: %d%% Nem jogue moedas pra cima hoje.", sorte);
    }
    else if (30 <= sorte && sorte <= 50){
        printf("Sorte: %d%% Melhor nao arriscar.", sorte);
    }
    else if (51 <= sorte && sorte <= 79){
        printf("Sorte: %d%% Por sua conta em risco.", sorte);
    }
    else if (80 <= sorte && sorte <= 90){
        printf("Sorte: %d%% Hoje vale a pena arriscar.", sorte);
    }
    else {
        printf("Sorte: %d%% Nao tenha medo de virar cartas hoje.", sorte);
    }
    printf(" Sem tigrinho nem jogos de azar, por favor!\n");
    
    // trabalho
    int trabalho = ((data1ano + data2ano) - ((data1dia + data1mes + data2dia + data2mes) * 8)) % 101;
    
    if (trabalho < 40){
        printf("Trabalho: %d%% Hoje nao sera um dia tao proveitoso, keep calm e faca o basico.\n", trabalho);
    }
    else if (40 <= trabalho && trabalho <= 50){
        printf("Trabalho: %d%% Segura a emocao, nao xinga ninguem, nao esquece de beber agua.\n", trabalho);
    }
    else if (51 <= trabalho && trabalho <= 69){
        printf("Trabalho: %d%% Um dia proveitoso com certeza, leve sua simpatia consigo.\n", trabalho);
    }
    else if (70 <= trabalho && trabalho <= 84){
        printf("Trabalho: %d%% Boas vibracoes hoje, chances podem estar ao seu redor.\n", trabalho);
    }
    else{
        printf("Trabalho: %d%% Use do maximo de networking possível hoje, dia bom para negocios.\n", trabalho);
    }
    // cor 
    int cor = ((data1dia * data1dia) + (data1mes * data1mes) + (data1ano * data1ano) + (data2dia * data2dia) + (data2mes * data2mes) + (data2ano * data2ano)) % 11;
    
    if (cor == 0){
        printf("Cor: Cinza.");
    }
    else if (cor == 1){
        printf("Cor: Vermelho.");
    }
    else if (cor == 2){
        printf("Cor: Laranja.");
    }
    else if (cor == 3){
        printf("Cor: Amarelo.");
    }
    else if (cor == 4){
        printf("Cor: Verde.");
    }
    else if (cor == 5){
        printf("Cor: Azul.");
    }
    else if (cor == 6){
        printf("Cor: Roxo.");
    }
    else if (cor == 7){
        printf("Cor: Marrom.");
    }
    else if (cor == 8){
        printf("Cor: Rosa.");
    }
    else if (cor == 9){
        printf("Cor: Preto.");
    }
    else {
        printf("Cor: Branco.");
    }
    
    
    return 0;

    }