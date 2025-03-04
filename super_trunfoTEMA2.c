#include <stdio.h>
//inclui as variaveis
int main() {
    char Estado1[20], Estado2[20];
    char Codigo1[20], Codigo2[20];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;

//pedi o valor das variaveis e imprimi
    printf(" Digite o Estado da carta 1: \n");
    scanf("%s", &Estado1);
    
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

//calculei densidade populacional e pibpercapita da carta 1 e exibi 
    densidadepopulacional1 = (float)(Populacao1 / Area1);
    printf("Densidade populacional 1: %f\n", densidadepopulacional1);

    PIBpercapita1 = (float)(PIB1 / Populacao1);
    printf("PIB percapita 1: %f\n", PIBpercapita1);


    printf("Digite o Estado da carta 2: \n");
    scanf("%s", &Estado2);
    
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

//calculei densidade populacional e pibpercapita da carta 2 e exibi 
    densidadepopulacional2 = (float)(Populacao2 / Area2);
    printf("Densidade populacional 2: %f\n", densidadepopulacional2);

    PIBpercapita2 = (float)(PIB2 / Populacao2);
    printf("PIB percapita 2: %f\n", PIBpercapita2);
    

 //Escolhi um atributo para ser comparado e imprimi
    printf("***Comparação de cartas (Atributo: PIB Percapita)***\n");
    printf("Carta 1: %f\n", PIBpercapita1);
    printf("Carta 2: %f\n",PIBpercapita2);


//Comparei o atributo e exibi o resultado
    if (PIBpercapita1 > PIBpercapita2) {
        printf("Carta 1 %s (%c) venceu!\n", Cidade1, Estado1);
    } else {
        printf("Carta 2 %s (%c) venceu!\n", Cidade1, Estado2);
    }
    

    return 0;

}