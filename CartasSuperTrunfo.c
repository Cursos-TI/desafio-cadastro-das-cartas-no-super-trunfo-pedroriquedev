#include <stdio.h>

int main(){
   
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Bem-vindo ao cadastro de cartas do jogo Super Trunfo! \n");
    printf("Insira os dados para a carta (A01) \n");

    printf("digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o pib da cidade:" );
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Populacao: %d\nArea: %f\n", populacao, area);
    printf("Pib: %f\npontos Turisticos: %d\n", pib, pontos_turisticos);


    return 0;
    
}
