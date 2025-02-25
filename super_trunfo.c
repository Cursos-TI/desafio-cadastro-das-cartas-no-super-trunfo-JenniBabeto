#include <stdio.h>

int main() {
    char Estado1, Estado2;
    char Codigo1[20], Codigo2 [20];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;

    printf(" Digite o Estado da carta 1: \n");
    scanf("%c", &Estado1);
    
    printf("Digite o Codigo da carta 1 \n");
    scanf("%s", &Codigo1);

    printf("Digite a Cidade da carta 1 \n");
    scanf("%s", &Cidade1);

    printf ("Digite a Populacao da carta 1: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Area da carta 1: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &PIB1);

    printf("Digite Pontos Turisticos da carta 1: \n");
    scanf("%d", &PontosTuristicos1);
    getchar();

    printf("Digite o Estado da carta 2: \n");
    scanf("%c", &Estado2);
    
    printf("Digite o Codigo da carta 2: \n");
    scanf("%s", &Codigo2);

    printf("Digite a Cidade da carta 2: \n");
    scanf("%s", &Cidade2);

    printf ("Digite a Populacao da carta 2: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Area da carta 2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &PIB2);

    printf("Digite Pontos Turisticos da carta 2: \n");
    scanf("%d", &PontosTuristicos2);

    printf("Carta 01:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %c%s\n",Estado1, Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %f\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);

    printf("Carta 02:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %c%s\n",Estado2, Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    
    return 0;
}