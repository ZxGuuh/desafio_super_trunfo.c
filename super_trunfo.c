#include <iostream>
#include <windows.h>

using namespace std;

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;              // Letra de A a H
    char codigo[4];           // Código da carta (ex: A01)
    char nome[30];           // Nome da cidade
    int populacao;           // Número de habitantes
    float area;              // Área em km²
    float pib;               // Produto Interno Bruto (em bilhões)
    int pontosTuristicos;    // Número de pontos turísticos
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

    
    // Declaração da carta de Fortaleza
    struct Carta fortaleza;

    fortaleza.estado = 'B';
    strcpy(fortaleza.codigo, "B01");
    strcpy(fortaleza.nome, "Fortaleza");
    fortaleza.populacao = 2700000;
    fortaleza.area = 314.9;
    fortaleza.pib = 82.0;
    fortaleza.pontosTuristicos = 40;

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
    printf("---------------------------------\n");

      // Comando para pausar o sistema e manter a tela aberta no Windows
    system("pause");

    return 0;
}