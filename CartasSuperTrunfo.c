#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("desafio super tunfo");
    
    // cadastro da carta 1

    char codigocarta1[5];
    char inicialdoestado1;
    char nomedacidade1[20];
    int populacao1;
    int pontosturisticos1;
    float areadacidade1;
    float PIB1;
    float densidadepopula1;
    float pibpercap1;
    float superpoder1;


    printf("digite o codigo da carta 1: \n");
    scanf("%s", codigocarta1);
    printf("digite a inicial do estado 1: \n");
    scanf(" %c", &inicialdoestado1);
    printf("digite o nome da cidade 1: \n");
    scanf("%s", nomedacidade1);
    printf("digite a quantidade da populacao da cidade 1: \n");
    scanf("%d", &populacao1);
    printf("digite a quantidade de pontos turisticos 1: \n");
    scanf("%d", &pontosturisticos1);
    printf("digite a area da cidade 1: \n");
    scanf("%f", &areadacidade1);
    printf("digite a PIB 1: \n");
    scanf("%f", &PIB1);

    pibpercap1 = (float) PIB1 / populacao1;
    densidadepopula1 = (float) populacao1 / areadacidade1;
    superpoder1 = (float) populacao1 + pontosturisticos1 + areadacidade1 + PIB1 + pibpercap1 + densidadepopula1;

// exibicao dos dados da carta 1
    printf("carta 1:\n");
    printf("codigo carta 1: %s\n", codigocarta1);
    printf("estado 1: %c\n", inicialdoestado1);
    printf("cidade 1: %s\n", nomedacidade1);
    printf("populacao 1: %d\n", populacao1);
    printf("pontos turisticos 1: %d\n", pontosturisticos1);
    printf("area da cidade 1: %.2f km²\n", areadacidade1);
    printf("O PIB 1 e: %.2f milhoes\n", PIB1);
    printf("a desidade populacional 1 e: %.2f hab/km²\n", densidadepopula1);
    printf("PIB per capita 1: %f reais\n", pibpercap1);
    printf("super poder 1: %.2f\n", superpoder1);

// cadastro da carta 2

    char codigocarta2[5];
    char inicialdoestado2;
    char nomedacidade2[20];
    int populacao2;
    int pontosturisticos2;
    float areadacidade2;
    float PIB2;
    float densidadepopula2;
    float pibpercap2;
    float superpoder2;


    printf("digite o codigo da carta 2: \n");
    scanf("%s", codigocarta2);
    printf("digite a inicial do estado 2: \n");
    scanf(" %c", &inicialdoestado2);
    printf("digite o nome da cidade 2: \n");
    scanf("%s", nomedacidade2);
    printf("digite a quantidade da populacao da cidade 2: \n");
    scanf("%d", &populacao2);
    printf("digite a quantidade de pontos turisticos 2: \n");
    scanf("%d", &pontosturisticos2);
    printf("digite a area da cidade 2: \n");
    scanf("%f", &areadacidade2);
    printf("digite a PIB 2: \n");
    scanf("%f", &PIB2);

    pibpercap2 = (float) PIB2 / populacao2;
    densidadepopula2 = (float) populacao2 / areadacidade2;
    superpoder2 = (float) populacao2 + pontosturisticos2 + areadacidade2 + PIB2 + pibpercap2 + densidadepopula2;

//exibicao dos dados da carta 2
    printf("carta 2:\n");
    printf("codigo carta 2: %s\n", codigocarta2);
    printf("estado 2: %c\n", inicialdoestado2);
    printf("cidade 2: %s\n", nomedacidade2);
    printf("populacao 2: %d\n", populacao2);
    printf("pontos turisticos 2: %d\n", pontosturisticos2);
    printf("area da cidade 2: %.2f km²\n", areadacidade2);
    printf("O PIB 2 e: %.2f milhoes\n", PIB2);
    printf("a desidade populacional 2 e: %.2f hab/km²\n", densidadepopula2);
    printf("PIB per capita 2: %f reais\n", pibpercap2);
    printf("super poder 2: %.2f\n", superpoder2);
//comparacao de cartas
    printf("resulatado de cartas\n");
    printf("carta 1 populacao: %d X %d : carta 2 populacao\n", populacao1 > populacao2, populacao2 > populacao1);
    printf("pontos turisticos 1: %d X %d :pontos turisticos 2\n", pontosturisticos1 > pontosturisticos2, pontosturisticos2 > pontosturisticos1);
    printf("area cidade 1: %d X %d :area cidade 2\n", areadacidade1 > areadacidade2, areadacidade2 > areadacidade1);
    printf("PIB 1: %d X %d :PIB 2\n", PIB1 > PIB2, PIB2 > PIB1);
    printf("densidadde populacional 1: %d X %d :densidade populacional 2\n", densidadepopula1 > densidadepopula2, densidadepopula2 > densidadepopula1);
    printf("PIB per cap 1: %d X %d :PIB per cap 2\n", pibpercap1 > pibpercap2, pibpercap2 > pibpercap1);
    printf("super poder 1: %d X %d :super poder 2\n", superpoder1 > superpoder2, superpoder2 > superpoder1);

}
