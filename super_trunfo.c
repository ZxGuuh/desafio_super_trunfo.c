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
