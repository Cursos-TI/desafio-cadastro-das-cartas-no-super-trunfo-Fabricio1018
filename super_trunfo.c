#include <stdio.h>;

int main(){

    // Carta 1:
    // Declarando as Variáveis:

   char estado1, estado2;
   char codigoCarta1[20], codigoCarta2[20];
   char nomeCidade1[50], nomeCidade2[50];
   int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int pontosTuristicos1, pontosTuristicos2;

    // Coletando as informações das cidades:

    printf("Cadastro de Cartas do Super Trunfo em C \n");  

    printf("Insira as informações solicitadas abaixo e tecle 'enter' \n"); // Orienta o usuário sobre o que fazer

    // Carta 1:
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado1);

    printf("Qual o código da carta? \n");
    scanf("%s", &codigoCarta1);

    printf("Qual o nome da cidade? \n");
    scanf("%s", &nomeCidade1);

    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade em km²? \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos existem na cidade? \n");
    scanf("%d", &pontosTuristicos1);

    printf("CIDADE CADASTRADA COM SUCESSO! Vamos cadastrar a próxima carta! \n"); // Informa a conclusão do 1º cadastro

    printf("Insira as informações solicitadas abaixo e tecle 'enter' \n"); // Orienta o usuário sobre o que fazer

    // Carta 2:
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado2);

    printf("Qual o código da carta? \n");
    scanf("%s", &codigoCarta2);

    printf("Qual o nome da cidade? \n");
    scanf("%s", &nomeCidade2);

    printf("Qual a população da cidade? \n");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade em km²? \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos existem na cidade? \n");
    scanf("%d", &pontosTuristicos2);

    printf("CIDADE CADASTRADA COM SUCESSO! \n"); // Informa a conclusão do 2º cadastro

    printf("Confira as informações fornecidas:");

    // Mostrar as informações que o usuário forneceu

    





   



    return 0;

}