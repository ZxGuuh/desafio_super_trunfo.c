#include <stdio.h>
#include <string.h>
#include <windows.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;
    char codigo[4];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
};

// Função para calcular o super poder
float calcularSuperPoder(struct Carta c) {
    float inversoDensidade = 1 / c.densidade;  // Quanto menor a densidade, maior o poder
    // É necessário converter todos os inteiros para float na soma
    return (float)c.populacao + c.area + c.pib + (float)c.pontosTuristicos + c.pibPerCapita + inversoDensidade;
}

int main() {
    SetConsoleOutputCP(65001);  // Configuração para acentuação

    struct Carta carta1, carta2;

    // Leitura da Carta 1
    printf("Informe os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da carta: ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da Carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;  // PIB convertido para reais
    carta1.superPoder = calcularSuperPoder(carta1);

    // Leitura da Carta 2
    printf("\nInforme os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da carta: ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da Carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.superPoder = calcularSuperPoder(carta2);

    // Exibição das Cartas
    printf("\n=========================================\n");
    printf("Dados da Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // Comparações
    printf("\n=========================================\n");
    printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontosTuristicos > carta2.pontosTuristicos);

    // Para densidade: menor vence!
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade < carta2.densidade);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superPoder > carta2.superPoder);

    printf("=========================================\n");

    system("pause");
    return 0;
}
