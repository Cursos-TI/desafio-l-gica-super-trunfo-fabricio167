#include <stdio.h>

int main() {
    unsigned long int populacao , populacao2;
    int pontosTuristicos , pontosTuristicos2 , variavel , carta ,carta2;
    float pib , area , pib2 , area2 , densidadePopulacinal , pibPerCapita , densidadePopulacinal2 , pibPerCapita2 , superPoder , superPoder2;
    char nome[100] , estado , codigo[3] , nome2[100] , estado2 , codigo2[3];
    carta = 0 ;
    carta2 = 0 ;
    printf("digite o nome da cidade da carta 1 sem espacos \n");
    scanf("%s" , nome);
    printf("digite a letra do estado\n");
    scanf(" %c" , &estado);
    printf("digite o codigo\n");
    scanf("%s" , codigo);
    printf("digite o numero da populacao \n");
    scanf("%lu" , &populacao);
    printf("digite a quantidade de pontos turisticos \n");
    scanf("%d" , &pontosTuristicos);
    printf("digite o pib\n");
    scanf("%f" , &pib);
    printf("digite a area\n");
    scanf("%f" , &area);

    getchar();

    printf("digite o nome da cidade da carta 2 sem espacos\n");
    scanf("%s" , nome2);
    printf("digite a letra do estado\n");
    scanf(" %c" , &estado2);
    printf("digite o codigo\n");
    scanf("%s" , codigo2);
    printf("digite o numero da populacao \n");
    scanf("%lu" , &populacao2);
    printf("digite a quantidade de pontos turisticos \n");
    scanf("%d" , &pontosTuristicos2);
    printf("digite o pib\n");
    scanf("%f" , &pib2);
    printf("digite a area\n");
    scanf("%f" , &area2);
    densidadePopulacinal = (float) populacao / area;
    densidadePopulacinal2 = (float) populacao2 / area2;
    pibPerCapita = (float) pib / populacao;
    pibPerCapita2 = (float) pib2 / populacao2;

    
    getchar();
    
    printf("\n-----------------------------------------------------\n carta 1\n");
    printf(" CIDADE :%s\n" , nome);
    printf(" ESTADO : %c \n" , estado);
    printf(" CODIGO :%s\n" , codigo);
    printf(" POPULACAO :%lu\n" , populacao);
    printf(" PONTOS TURISTICOS :%d\n" , pontosTuristicos);
    printf(" PIB :%f\n" , pib);
    printf(" AREA :%f\n" , area);
    printf("densidade populacinal : %f\n" , densidadePopulacinal);
    printf("pib per capita: %f\n" , pibPerCapita);

    
    printf("\n-----------------------------------------------------\n carta 2\n");

    printf(" CIDADE :%s\n" , nome2);
    printf(" ESTADO : %c \n" , estado2);
    printf(" CODIGO :%s\n" , codigo2);
    printf(" POPULACAO :%lu\n" , populacao2);
    printf(" PONTOS TURISTICOS :%d\n" , pontosTuristicos2);
    printf(" PIB :%f\n" , pib2);
    printf(" AREA :%f\n" , area2);
    printf("densidade populacinal : %f\n" , densidadePopulacinal2);
    printf("pib per capita: %f\n" , pibPerCapita2);
    printf("-----------------vs---------------\n");
    superPoder = (float)populacao + area + pib + pontosTuristicos + pibPerCapita + (1.0f / densidadePopulacinal);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacinal2);
    printf("digite oque desaja comparar\n");
    printf("1. comparar populacao e pontos turisticos\n");
    printf("2. comparar pib e pib per capita\n");
    printf("3. comparar area e densidade populacional\n");
    printf("4. comparar super poder\n");
    printf("5. lista de qual carta venceu atributo por atributo\n");

    scanf("%d" , &variavel);

    switch (variavel)
    {
    case 1:
        (populacao > populacao2) ? ++carta : ++carta2;
        (pontosTuristicos > pontosTuristicos2) ? ++carta : ++carta2;
        if (carta > carta2)
        {
            printf("\ncarta 1 ganhou");
        }else if (carta < carta2)
        {
            printf("\ncarta 2 ganhou");
        }else {
            printf("\nempate");
        }
        break;
    case 2:
        (pib > pib2) ? ++carta : ++carta2;
        (pibPerCapita > pibPerCapita2) ? ++carta : ++carta2;
        if (carta > carta2)
        {
            printf("\ncarta 1 ganhou");
        }else if (carta < carta2)
        {
            printf("\ncarta 2 ganhou");
        }else {
            printf("\nempate");
        }

    break;
    case 3:
        (area > area2) ? ++carta : ++carta2;
        (densidadePopulacinal < densidadePopulacinal2) ? ++carta : ++carta2;
        if (carta > carta2)
        {
            printf("\ncarta 1 ganhou");
        }else if (carta < carta2)
        {
            printf("\ncarta 2 ganhou");
        }else {
            printf("\nempate");
        }
        
    break;
    case 4:
    (superPoder > superPoder2) ? ++carta : ++carta2;
    if (carta > carta2)
        {
            printf("\ncarta 1 ganhou");
        }else if (carta < carta2)
        {
            printf("\ncarta 2 ganhou");
        }else {
            printf("\nempate");
        }

    break;
    case 5:

        printf("Populacao: Carta %d venceu\n", (populacao > populacao2) ? 1 : 2);
        printf("Pontos turisticos: Carta %d venceu\n", (pontosTuristicos > pontosTuristicos2) ? 1 : 2);
        printf("Pib: Carta %d venceu\n", (pib > pib2) ? 1 : 2);
        printf("Area: Carta %d venceu\n", (area > area2) ? 1 : 2);
        printf("densidade populacional: Carta %d venceu\n", (densidadePopulacinal < densidadePopulacinal2) ? 1 : 2);
        printf("Pib Per Capita: Carta %d venceu\n", (pibPerCapita > pibPerCapita2) ? 1 : 2);
        printf("Super Poder: Carta %d venceu\n", (superPoder > superPoder2) ? 1 : 2);
        
    break;

    default:
        printf("\nopcao invalida");
        break;
    }
    
    return 0; 
}
