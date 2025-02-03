#include <stdio.h>

int main(){
   //Coloquei as variáveis e as declarações utilizei o float em algumas variáveis para uma maior precisão.
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional, pib_per_capita;
    // Colocquei um printf para dar saudações, usei o "\n" para dar um espaço e ja pedi para o usuario inserir os dado da carta
    //para uma melhor vsualização.
    printf("Bem-vindo ao cadastro de cartas do jogo Super Trunfo! \n");
    printf("\n");
    printf("Insira os dados das cartas para o primeiro estado. \n");
    printf("CARTA A01 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
   
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %.2f km²", populacao, area);
    printf(" - Pib: %.2f - Pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

// Acrecentei um printf e um "\n" para dividir uma carta da outra e assim ficar melhor a visualização.
     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA A02 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA A03 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

   //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA A04 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("Insira os dados das cartas para o segundo estado. \n");
    printf("CARTA B01: \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA B02 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA B03 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA B04 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
   
   //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("Insira os dados das cartas para o terceiro estado. \n");
    printf("CARTA C01 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");
    
    printf("CARTA C02 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");
    
    printf("CARTA C03 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
   
   //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");
    
    printf("CARTA C04 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("Insira os dados das cartas para o quarto estado. \n");
    printf("CARTA D01 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
   
   //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

    printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA D02 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA D03 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA D04 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("Insira os dados das cartas para o quinto estado. \n");
    printf("CARTA E01 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA E02 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA E03 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA E04 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("Insira os dados das cartas para o sexto estado. \n");
    printf("CARTA F01 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA F02 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA F03 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA F04 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("Insira os dados das cartas para o setimo estado. \n");
    printf("CARTA G01 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA G02 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA G03 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA G04 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("Insira os dados das cartas para o oitavo estado. \n");
    printf("CARTA H01 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA H02 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA H03 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

     printf("\n----------------------------------------------------------------------------\n");

    printf("CARTA H04 \n");

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    //cáuculo automático 
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\nPopulacao: %d - Area: %f", populacao, area);
    printf(" - Pib: %f - pontos Turisticos: %d", pib, pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional);
    printf(" - PIB per Capita: %.2f USD\n", pib_per_capita);

    printf("\n----------------------------------------------------------------------------\n");

    printf("VOCÊ ACABOU DE CADASTRAR TODAS AS CARTAS DO JOGO!");
    printf("\n");
    
    return 0;
    
}
