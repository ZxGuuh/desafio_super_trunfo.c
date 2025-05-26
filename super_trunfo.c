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
