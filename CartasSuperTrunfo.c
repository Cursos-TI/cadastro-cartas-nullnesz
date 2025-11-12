#include <stdio.h>

int main() {
    //Carta 1
    char estado1[3], codigo1[5], nome1[30];
    unsigned long int populacao1;
    double area1, pib1;
    unsigned int pontos1;

    //Carta 2
    char estado2[3], codigo2[5], nome2[30];
    unsigned long int populacao2;
    double area2, pib2;
    unsigned int pontos2;

    
    double densidade1, densidade2;
    double pibPerCapita1, pibPerCapita2;
    double superPoder1, superPoder2;

    //resultados
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontos;
    int resultadoDensidade, resultadoPibPerCapita, resultadoSuperPoder;

    
    //entrada da carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf("%2s", estado1);

    printf("Codigo: ");
    scanf("%4s", codigo1);

    printf("Nome: ");
    scanf("%29s", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%lf", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%lf", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%u", &pontos1);

    
    //entrada da carta 2
    
    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Codigo: ");
    scanf("%4s", codigo2);

    printf("Nome: ");
    scanf("%29s", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%lf", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%lf", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%u", &pontos2);

    
    //calculos
    

    densidade1 = (double)populacao1 / area1;
    densidade2 = (double)populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = (double)populacao1 + area1 + pib1 + (double)pontos1 +
                  pibPerCapita1 + (1.0 / densidade1);

    superPoder2 = (double)populacao2 + area2 + pib2 + (double)pontos2 +
                  pibPerCapita2 + (1.0 / densidade2);

    
    //comparações 

    resultadoPopulacao   = populacao1 > populacao2;
    resultadoArea        = area1 > area2;
    resultadoPib         = pib1 > pib2;
    resultadoPontos      = pontos1 > pontos2;
    resultadoDensidade   = densidade1 < densidade2;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder  = superPoder1 > superPoder2;

    
    //saida dos resultados
    
    printf("\n=== Resultados das Comparacoes ===\n");
    printf("Populacao: %d\n", resultadoPopulacao);
    printf("Area: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos Turisticos: %d\n", resultadoPontos);
    printf("Densidade Populacional: %d\n", resultadoDensidade);
    printf("PIB per Capita: %d\n", resultadoPibPerCapita);
    printf("Super Poder: %d\n", resultadoSuperPoder);

    return 0;
}
