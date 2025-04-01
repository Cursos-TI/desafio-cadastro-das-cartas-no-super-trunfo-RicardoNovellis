#include <stdio.h>
#include <ctype.h>  // Para toupper()

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4]; 
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;

    printf("Carta 1:\n");

    // Estado carta 1
    printf("Digite o Estado (uma letra de A a H):\n");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);  // Converte para maiúscula

    // Código carta 1
    printf("Digite o Codigo da Carta (formato ex: A01, B03):\n");
    scanf("%3s", codigo1);  
    codigo1[0] = toupper(codigo1[0]);  // Converte a primeira letra para maiúscula

    // Cidade carta 1
    printf("Digite a Cidade:\n");
    scanf(" %19s", cidade1);  
    cidade1[0] = toupper(cidade1[0]);  // Converte a primeira letra para maiúscula

    // População carta 1
    printf("Digite a População (apenas número):\n");
    scanf("%d", &populacao1);

    // Área carta 1
    printf("Digite a Área da cidade (em km²):\n");
    scanf("%f", &area1);

    // PIB carta 1
    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf("%f", &pib1);

    // Pontos turísticos carta 1
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoTuristico1);

    printf("Carta 2:\n");

    printf("Digite o Estado (uma letra de A a H):\n");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);

    printf("Digite o Código da Carta (formato ex: A01, B03):\n");
    scanf("%3s", codigo2);
    codigo2[0] = toupper(codigo2[0]);

    printf("Digite o Nome da Cidade:\n");
    scanf(" %19s", cidade2);
    cidade2[0] = toupper(cidade2[0]);

    printf("Digite a População (apenas número):\n");
    scanf("%d", &populacao2);

    printf("Digite a Área da cidade (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoTuristico2);


      


    // Dados carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", pontoTuristico1);

    // Dados carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", pontoTuristico2);

    return 0;
}
