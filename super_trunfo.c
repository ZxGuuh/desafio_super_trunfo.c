#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    float inversoDensidade = 1 / c.densidade;
    return (float)c.populacao + c.area + c.pib + (float)c.pontosTuristicos + c.pibPerCapita + inversoDensidade;
}

int main() {

    // Declaração da carta de Brasília
    struct Carta brasilia;

    brasilia.estado = 'A';
    strcpy(brasilia.codigo, "A01");
    strcpy(brasilia.nome, "Brasilia");
    brasilia.populacao = 3100000;
    brasilia.area = 5802.0;
    brasilia.pib = 334.0;
    brasilia.pontosTuristicos = 50;

    // Cálculo da densidade populacional e PIB per capita Brasília
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    carta1.superPoder = calcularSuperPoder(carta1);
    
    // Declaração da carta de Fortaleza
    struct Carta fortaleza;

    fortaleza.estado = 'B';
    strcpy(fortaleza.codigo, "B01");
    strcpy(fortaleza.nome, "Fortaleza");
    fortaleza.populacao = 2700000;
    fortaleza.area = 314.9;
    fortaleza.pib = 82.0;
    fortaleza.pontosTuristicos = 40;

    // Cálculo da densidade populacional e PIB per capita Fortaleza
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.superPoder = calcularSuperPoder(carta2);

     // Exibindo informações da carta de Brasília
    printf("---------------------------------\n");
    printf("Informações da Carta: Brasília\n");
    printf("Estado: %c\n", brasilia.estado);
    printf("Código: %s\n", brasilia.codigo);
    printf("Nome da Cidade: %s\n", brasilia.nome);
    printf("População: %d habitantes\n", brasilia.populacao);
    printf("Área: %.1f km²\n", brasilia.area);
    printf("PIB: R$ %.1f bilhões\n", brasilia.pib);
    printf("Número de Pontos Turísticos: %d\n", brasilia.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);
    printf("---------------------------------\n");

      // Exibindo informações da carta de Fortaleza
    printf("---------------------------------\n");
    printf("Informações da Carta: Fortaleza\n");
    printf("Estado: %c\n", fortaleza.estado);
    printf("Código: %s\n", fortaleza.codigo);
    printf("Nome da Cidade: %s\n", fortaleza.nome);
    printf("População: %d habitantes\n", fortaleza.populacao);
    printf("Área: %.1f km²\n", fortaleza.area);
    printf("PIB: R$ %.1f bilhões\n", fortaleza.pib);
    printf("Número de Pontos Turísticos: %d\n", fortaleza.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);
    printf("---------------------------------\n");

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

      // Comando para pausar o sistema e manter a tela aberta no Windows
    system("pause");

    return 0;
}