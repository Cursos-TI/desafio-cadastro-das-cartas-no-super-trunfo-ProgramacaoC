#include <stdio.h>
int main() {
    // Variaveis carta 1
    char estado_1[2], codigo_1[3], nome_da_cidade_1;
    int populacao_1, numeros_de_pontos_turisticos_1;
    float area_1, PIB_1;

    //Variaveis carta 2
    char estado_2[2], codigo_2[3], nome_da_cidade_2;
    int populacao_2, numeros_de_pontos_turisticos_2;
    float area_2, PIB_2;

    printf("Carta 1\n");

    printf("Estado: \n");
    scanf("%c", &estado_1);

    printf("Codigo: \n");
    scanf("%s", &codigo_1);

    printf("Nome da cidade: \n");
    scanf("%c", &nome_da_cidade_1);

    printf("Populacao: \n");
    scanf("%d", &populacao_1);

    printf("Area:  Km2\n");
    scanf("%f", &area_1);

    printf("PIB: bilhoes de reais\n");
    scanf("%f", &PIB_1);

    printf("Numero de pontos turisticos: \n");
    scantf("%d", &numeros_de_pontos_turisticos_1);


    return 0;
}