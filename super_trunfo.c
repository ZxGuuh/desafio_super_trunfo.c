#include <iostream>
#include <windows.h>

using namespace std;

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

};

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
    printf("---------------------------------\n");

      // Comando para pausar o sistema e manter a tela aberta no Windows
    system("pause");

    return 0;
}