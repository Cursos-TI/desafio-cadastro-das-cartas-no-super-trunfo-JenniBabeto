#include <stdio.h>

int main() {
    char Estado1, Estado2;
    char Codigo1[20], Codigo2[20];
    char Cidade1[20], Cidade2[20];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;
    float Superpoder1, Superpoder2;
    int resultado1, resultado2 , resultado3, resultado4, resultado5, resultado6, resultado7;


    printf(" Digite o Estado da carta 1: \n");
    scanf("%c", &Estado1);
    
    printf("Digite o Codigo da carta 1 \n");
    scanf("%s", &Codigo1);

    printf("Digite a Cidade da carta 1 \n");
    scanf("%s", &Cidade1);

    printf ("Digite a Populacao da carta 1: \n");
    scanf("%u", &Populacao1);

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
    scanf("%u", &Populacao2);

    printf("Digite a Area da carta 2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &PIB2);

    printf("Digite Pontos Turisticos da carta 2: \n");
    scanf("%d", &PontosTuristicos2);


    densidadepopulacional1 = (float)(Populacao1 / Area1);
    densidadepopulacional2 = (float)(Populacao2 / Area2);

    PIBpercapita1 = (float)(PIB1 / Populacao1);
    PIBpercapita2 = (float)(PIB2 / Populacao2);

    Superpoder1 = (float)(Populacao1 + Area1 + PIB1 + PIBpercapita1 + (1 / densidadepopulacional1) +PontosTuristicos1);
    Superpoder2 = (float)(Populacao2 + Area2 + PIB2 + PIBpercapita2 + (1 / densidadepopulacional2) +PontosTuristicos2);

    printf("***Carta 01***\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %c%s\n",Estado1, Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %.2d\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadepopulacional1);
    printf("PIB Percapita: %.2f\n", PIBpercapita1);
    printf("Super Poder:%f\n", Superpoder1);

    printf("***Carta 02***\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %c%s\n",Estado2, Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %.2d\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %.2d\n", PontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadepopulacional2);
    printf("PIB Percapita: %.2f\n", PIBpercapita2);
    printf("Super Poder:%f\n", Superpoder2);

    resultado1 = Populacao1 > Populacao2;
    resultado2 = Area1 > Area2;
    resultado3 = PIB1 > PIB2;
    resultado4 = PontosTuristicos1 > PontosTuristicos2;
    resultado5= (1/densidadepopulacional1) > (1/densidadepopulacional2);
    resultado6= PIBpercapita1 > PIBpercapita2;
    resultado7= Superpoder1 > Superpoder2;

    printf("*****Comparação de carta 1 para carta 2*****\n");
    printf("População: A carta 1 venceu? %d\n",resultado1);
    printf("Área: A carta 1 venceu? %d\n", resultado2);
    printf("PIB: A carta 1 venceu? %d\n", resultado3);
    printf("Pontos Turísticos: A carta 1 venceu? %d\n", resultado4);
    printf("Densidade Populacional: A carta 1 venceu? %d\n", resultado5);
    printf("PIB PerCapita: A carta 1 venceu? %d\n", resultado6);
    printf("Super Poder: A carta 1 venceu? %d\n", resultado7);


    return 0;
}