#include <stdio.h>
int main() {
    // Variaveis carta 1
    char letra_1, codigo_1[3], nome_da_cidade_1[20];
    int populacao_1, numeros_de_pontos_turisticos_1;
    float area_1, PIB_1;

    //Variaveis carta 2
    char letra_2, codigo_2[3], nome_da_cidade_2[20];
    int populacao_2, numeros_de_pontos_turisticos_2;
    float area_2, PIB_2;

    printf("Carta 1\n");

    printf("Letra: \n");
    scanf(" %c", &letra_1);
    
    printf("Codigo: \n");
    scanf(" %s", codigo_1);

    printf("Nome da cidade: \n");
    scanf(" %s", nome_da_cidade_1);

    printf("Populacao: \n");
    scanf(" %d", &populacao_1);

    printf("Area (Km2): \n");
    scanf(" %f", &area_1);

    printf("PIB: bilhoes de reais\n");
    scanf(" %f", &PIB_1);

    printf("Numero de pontos turisticos: \n");
    scanf(" %d", &numeros_de_pontos_turisticos_1);

    printf("Carta 2\n");

    printf("Letra: \n");
    scanf(" %c", &letra_2);

    printf("Codigo:\n");
    scanf(" %s", codigo_2);

    printf("Nome da cidade:\n");
    scanf(" %s", nome_da_cidade_2);

    printf("Populacao:\n");
    scanf(" %d", &populacao_2);

    printf("Area:\n");
    scanf(" %f", &area_2);

    printf("PIB:\n");
    scanf(" %f", &PIB_2);

    printf("Numero de pontos turisticos:\n");
    scanf(" %d", &numeros_de_pontos_turisticos_2);

    printf("\n");
    printf("\n");

    //Mostrar resultados da carta 1
    printf("=====================================================");
    printf("===============SUPER_TRUNFO==========================");
    printf("Carta 1 \n");
    printf("Código: %c%s\n", letra_1, codigo_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: Km2 %f\n", area_1);
    printf("PIB: %f\n", PIB_1);
    printf("Numero de pontos turisticos: %d\n", numeros_de_pontos_turisticos_1);
    printf("====================================================");
    //Mostrar reultados da carta 2
    printf("====================================================");
    printf("Carta 2 \n");
    printf("Codigo: %c%s\n", letra_2, codigo_2); 
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: Km2 %f\n", area_2);
    printf("PIB: %f\n", PIB_2);
    printf("Numero de pontos turisticos: %d\n", numeros_de_pontos_turisticos_2);

    return 0;
}