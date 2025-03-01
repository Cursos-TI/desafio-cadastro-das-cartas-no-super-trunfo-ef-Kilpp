#include <stdio.h>

// Desafio Super Trunfo - Países
// Etapa 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades do jogo.

// E.F.K.

#include <stdio.h>
#include <locale.h>

int main()
{    
    setlocale(LC_ALL, "Portuguese_Brazil");
    // Apontuação e acentuação foi modificada para otimizar a leitura no terminal  


    //Criação de variaveis da primeira carta.
    char estado1[3];
    char codigo1[3];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Criação de variaveis da segunda carta.
    char estado2[3];
    char codigo2[3];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Iteração inicial com o usuário, coleta de dados das cartas 1 e 2. 
    printf("Olá, vamos criar duas cartas de cidades! \n");
    printf("\n");
    
    printf("Insira os dados da primeira carta \n");
    printf("\n");

    printf("Digite o estado: \n");
    scanf("%2s", estado1);

    printf("Insira o código: \n");
    scanf("%2s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%19s", nome1);

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
    scanf("%2s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%19s", nome2);

    printf("Digite a população: \n");
    scanf("%i", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%i", &pontosTuristicos2);
    

    /*
    Ainda nao tenho certeza se é a melhor opção mas usei o "printf" sem nenhum valor inserido
    apenas para criar espaços entre as linhas, organizando um pouco melhor a saida no terminal.
     */
    printf("\n"); 
    

    //Os dados coletados das duas cartas são exibidos no terminal.
    printf("Carta 1: \n");
    printf("O estado é: %s\n", estado1);
    printf("O código é: %s\n", codigo1);
    printf("O nome da cidade é: %s\n", nome1);
    printf("A população é: %i\n", populacao1);
    printf("A área é: %.2f\n", area1);
    printf("O PIB é: %.2f\n", pib1);
    printf("A quantidade de pontos turísticos é: %i\n", pontosTuristicos1);

    printf("\n");
    printf("\n");//Novamente apenas para gerar espaço entre linhas.
    printf("Carta 2: \n");
    printf("O estado é: %s\n", estado2);
    printf("O código é: %s\n", codigo2);
    printf("O nome da cidade é: %s\n", nome2);
    printf("A população é: %i\n", populacao2);
    printf("A área é: %.2f\n", area2);
    printf("O PIB é: %.2f\n", pib2);
    printf("A quantidade de pontos turísticos é: %i\n", pontosTuristicos2);

    return 0;
}
