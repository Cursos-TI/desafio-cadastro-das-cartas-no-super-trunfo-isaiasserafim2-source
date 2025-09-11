#include <stdio.h>

int main() {
    // Declaração das variáveis das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2; // agora unsigned long int
    float area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis derivadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%lf", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%lf", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibPerCapita1 = (float)(pib1 * 1000000000) / populacao1; // convertendo PIB bilhões para unidade
    pibPerCapita2 = (float)(pib2 * 1000000000) / populacao2;

    superPoder1 = (float)populacao1 + area1 + (float)pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + (float)pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparações
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}