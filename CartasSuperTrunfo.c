#include <stdio.h>

// Desafio Super Trunfo - Países
// Etapa 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades do jogo.

// Etapa 2 - Criar calculos para variáveis.

// Etapa 3 - Comparar pontuações e atributos para definição da carta vencedora

// E.F.K.

int main(){    
   
    //Declarando variaveis da primeira carta.
    char estado1[3];
    char codigo1[3];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    int PtC1;

    //Declarando variaveis da segunda carta.
    char estado2[3];
    char codigo2[3];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    int PtC2;

   
    //Iteração inicial com o usuário, coleta de dados das cartas 1 e 2. 
    printf("*** Olá! Bem vindo ao Super Trunfo Cidades!*** \n");
    printf("\n");
    
    printf("Insira os dados da primeira carta \n");
    printf("\n");

    printf("Digite o estado: \n");
    scanf("%2s", estado1);

    printf("Insira o código: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%i", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%i", &pontosTuristicos1);

    printf("\n");
    
    printf("Agora, insira os dados da segunda carta \n");

    printf("Digite o estado: \n");
    scanf("%2s", estado2);

    printf("Insira o código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população: \n");
    scanf("%i", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%i", &pontosTuristicos2);


     //MANIPULADROES DE DADOS - calculos para encontrar densidade e pib per capita de cada carta
     float densidade1 = (float) populacao1 / area1;
     float densidade2 = (float) populacao2 / area2;
     float pibPerCapita1 = (float) pib1 / populacao1;
     float pibPerCapita2 = (float) pib2 / populacao2;

     /*
     A densidade populacional é um ponto negativo, foi feita a conversão para um fator positivo
     para ser atribuida a pontuação final da carta.
     */
     float densidadeComp1 = (float) 1 / densidade1;
     float densidadeComp2 = (float) 1 / densidade2;

     //Uma nova variavel é inserida para gerar pontos de carta baseada em seus atributos.
     float pts1 = (float) area1 + pontosTuristicos1 + densidadeComp1 + pibPerCapita1;
     float pts2 = (float) area2 + pontosTuristicos2 + densidadeComp2 + pibPerCapita2;

     //Comparação de valores entre cartas.
 
     int resultadoPopulacao = populacao1 > populacao2;
     int resultadoArea = area1 > area2;
     int resultadoPIB = pib1 > pib2;
     int resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
     int resultadoDensidade = densidade1 < densidade2;
     int resultadoPIBPerCapita = pibPerCapita1 > pibPerCapita2;
     int resultadoPts = pts1 > pts2;
    /*
    Ainda nao tenho certeza se é a melhor opção mas usei o "printf" sem nenhum valor inserido
    apenas para criar espaços entre as linhas, organizando um pouco melhor a saida no terminal.
     */
    printf("\n"); 
    

    //Os dados coletados das duas cartas são exibidos no terminal.
    printf("Carta 1:\n");
    printf("Pts: %2.f\n", pts1);
    printf("O estado é: %s\n", estado1);
    printf("O código é: %s\n", codigo1);
    printf("O nome da cidade é: %s\n", nome1);
    printf("A população é: %i\n", populacao1);
    printf("A área é: %.2f\n", area1);
    printf("O PIB é: %.2f\n", pib1);
    printf("A quantidade de pontos turísticos é: %i\n", pontosTuristicos1);
    printf("A densidade é: %.2f hab/Km²\n", densidade1);
    printf("O PIB per capita é: %.2f Reais\n", pibPerCapita1);


    printf("\n");
    printf("\n");//Novamente apenas para gerar espaço entre linhas.
    printf("Carta 2: \n");
    printf("Pts: %2.f\n", pts2);
    printf("O estado é: %s\n", estado2);
    printf("O código é: %s\n", codigo2);
    printf("O nome da cidade é: %s\n", nome2);
    printf("A população é: %i\n", populacao2);
    printf("A área é: %.2f\n", area2);
    printf("O PIB é: %.2f\n", pib2);
    printf("A quantidade de pontos turísticos é: %i\n", pontosTuristicos2);
    printf("A densidade é: %.2f hab/Km²\n", densidade2);
    printf("O PIB per capita é: %.2f Reais\n", pibPerCapita2);
    printf("\n");

    //Resulado: se "1", a primeira carta vence. Se "0" a segunda carta vence.
    printf("Comparando Cartas! \n");
    printf("\n");   
    printf("População: Carta 1 venveu? %d\n", resultadoPopulacao);
    printf("Área: Carta 1 venveu? %d\n", resultadoArea);
    printf("PIB: Carta 1 venveu? %d\n", resultadoPIB);
    printf("Pontos Turísticos: Carta 1 venveu? %d\n", resultadoPontosTuristicos);
    printf("Densidade: Carta 1 venveu? %d\n", resultadoDensidade);
    printf("PIB per Capita: Carta 1 venveu? %d\n", resultadoPIBPerCapita);
    printf("Pontos: Carta 1 venveu? %d\n", resultadoPts);
    printf("\n");

    return 0;
}
