#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Cartas Super Trunfo!\n Cadastrar cartas de cidades baseados no que for pedido abaixo\n");

    int população, PIB, pontos;
    float area;

    printf("Digite o número de habitantes: \n");
    scanf("%d", &população);
    
    printf("Digite o PIB: \n");
    scanf("%d", &PIB);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos);
    
    printf("Digite a área total do território: \n");
    scanf("%f", &area);
    
    printf("População: %d\nArea: %f \n", população, area);
    printf("PIB: %d\nPontos turísticos: %d\n", PIB, pontos);
    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
