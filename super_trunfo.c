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

    brasilia.estado = 'A';  // Estado representado por uma letra
    strcpy(brasilia.codigo, "A01");  // Código da carta
    strcpy(brasilia.nome, "Brasilia");  // Nome da cidade
    brasilia.populacao = 3100000;  // População
    brasilia.area = 5802.0;        // Área em km²
    brasilia.pib = 334.0;          // PIB em bilhões de reais
    brasilia.pontosTuristicos = 50; // Número de pontos turísticos
