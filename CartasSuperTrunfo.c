#include <stdio.h>

int main() {
    //Cadastro das duas cartas do Super Trunfo

    //CARTA 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //CARTA 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //variaveis calculadas
    float dens1, dens2;
    float pcap1, pcap2;

    //entrada de dados
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49s", cidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("area (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos1);

    //calculos Carta 1
    dens1 = populacao1 / area1;
    pcap1 = pib1 / populacao1;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49s", cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("area (km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos2);

    //calculos Carta 2
    dens2 = populacao2 / area2;
    pcap2 = pib2 / populacao2;

    //exibição das cartas
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.6f\n", pcap1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.6f\n", pcap2);

    //menu de comparação
    int opcao;
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    //comparação por atributo escolhido
    printf("\n=== Resultado da Comparação ===\n");

    switch (opcao) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (populacao1 < populacao2)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo escolhido: area\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if (area1 > area2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (area1 < area2)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (pib1 < pib2)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if (pontos1 > pontos2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (pontos1 < pontos2)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo escolhido: Densidade Populacional (menor vence)\n");
            printf("%s: %.2f\n", cidade1, dens1);
            printf("%s: %.2f\n", cidade2, dens2);

            if (dens1 < dens2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (dens1 > dens2)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo escolhido: PIB per Capita\n");
            printf("%s: %.6f\n", cidade1, pcap1);
            printf("%s: %.6f\n", cidade2, pcap2);

            if (pcap1 > pcap2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (pcap1 < pcap2)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção invalida!\n");
    }

    return 0;
}