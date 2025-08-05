#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado, codigo[4], cidade[20];
    int populacao, num_turistico;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Carta 1
    estado = 'A';
    strcpy(codigo, "A01");
    strcpy(cidade, "Aracaju");
    populacao = 602757;
    area = 181.86;
    pib = 18.4;
    num_turistico = 30;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codígo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", num_turistico);

    // Carta 2
    estado = 'B';
    strcpy(codigo, "B02");
    strcpy(cidade, "Maceió");
    populacao = 1018948;
    area = 509.32;
    pib = 27.48;
    num_turistico = 40;

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Codígo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", num_turistico);

    return 0;
}
