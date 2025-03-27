#include <stdio.h>

int main(){
    // Dados da primeira carta 
    char estado, codigo[3], cidade[100];
    unsigned long int populacao;
    float area, pib;
    int pontosTuristicos;
    float densidadePopulacional, pibPercapita, superPoder;

    printf("Cadastro da primeira carta:\n");
    printf("Estado (de A a H): ");
    scanf(" %c", &estado);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo);
    printf("\nNome da Cidade: ");
    scanf(" %[^\n]s", cidade);
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB da cidade: ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Cálculo dos atributos
    densidadePopulacional = populacao / area;
    pibPercapita = pib / populacao;
    superPoder = populacao + area + pib + pontosTuristicos + pibPercapita + (1.0 / densidadePopulacional);

    printf("\nCadastro da segunda carta:\n");
    char estado2, codigo2[3], cidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPercapita2, superPoder2;

    printf("Estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPercapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1.0 / densidadePopulacional2);

    // Menu interativo
    int opcao;
    printf("\n============================\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade populacional\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparação:\n");
    switch (opcao) {
        case 1:
            printf("Comparando População:\n");
            if (populacao > populacao2) 
                printf("Carta 1 venceu! População: %lu\n", populacao);
            else if (populacao < populacao2)
                printf("Carta 2 venceu! População: %lu\n", populacao2);
            else 
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Área:\n");
            if (area > area2)
                printf("Carta 1 venceu! Área: %.2f km²\n", area);
            else if (area < area2)
                printf("Carta 2 venceu! Área: %.2f km²\n", area2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            if (pib > pib2)
                printf("Carta 1 venceu! PIB: %.2f bilhões\n", pib);
            else if (pib < pib2)
                printf("Carta 2 venceu! PIB: %.2f bilhões\n", pib2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            if (pontosTuristicos > pontosTuristicos2)
                printf("Carta 1 venceu! Pontos turísticos: %d\n", pontosTuristicos);
            else if (pontosTuristicos < pontosTuristicos2)
                printf("Carta 2 venceu! Pontos turísticos: %d\n", pontosTuristicos2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Populacional (Menor valor vence!):\n");
            if (densidadePopulacional < densidadePopulacional2)
                printf("Carta 1 venceu! Densidade: %.2f hab/km²\n", densidadePopulacional);
            else if (densidadePopulacional > densidadePopulacional2)
                printf("Carta 2 venceu! Densidade: %.2f hab/km²\n", densidadePopulacional2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
