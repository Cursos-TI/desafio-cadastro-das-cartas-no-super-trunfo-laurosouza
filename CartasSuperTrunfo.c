#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Cartas Super Trunfo!\nCadastrar cartas de cidades baseados no que for pedido abaixo\n");

    int populacao, PIB, pontos;
    float area;
    char codigo[50];

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao);
    
    printf("Digite o PIB: \n");
    scanf("%d", &PIB);
    
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos);
    
    printf("Digite a area total do territorio: \n");
    scanf("%f", &area);
    
    printf("Codigo da cidade: %s\nPopulacao: %d\nArea: %f \n", codigo, populacao, area);
    printf("PIB: %d\nPontos turisticos: %d\n", PIB, pontos);
    

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
