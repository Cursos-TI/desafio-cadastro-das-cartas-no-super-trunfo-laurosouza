#include <stdio.h>

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


    return 0;
}
