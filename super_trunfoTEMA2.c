#include <stdio.h>
//inclui as variaveis
int main() {
    char Estado1[20], Estado2[20];
    char Codigo1[20], Codigo2[20];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2, atributodecomparacao;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float densidadepopulacional1, densidadepopulacional2;


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

    densidadepopulacional1 = (float)(Populacao1 / Area1);
    printf("Densidade populacional 1: %f\n", densidadepopulacional1);




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
 
    densidadepopulacional2 = (float)(Populacao2 / Area2);
    printf("Densidade populacional 2: %f\n", densidadepopulacional2);

    printf("###Atributos de comparação:###:\n");
    printf("1.População\n");
    printf("2.Area\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade Populacional\n");
    printf("Escolha e digite 1 atributo de comparação entre as cartas: \n");
    scanf("%d", &atributodecomparacao);



switch (atributodecomparacao)
{
case 1:
    printf("1.População\n");
    if (Populacao1 > Populacao2) {
        printf("Carta 1 %s (%d) venceu!\n", Cidade1, Estado1);
    } else {
        printf("Carta 2 %s (%d) venceu!\n", Cidade2, Estado2);
    }
    break;
    case 2:
    printf("2.Area\n");
    if (Area1 > Area2) {
        printf("Carta 1 %s (%d) venceu!\n", Cidade1, Estado1);
    } else {
        printf("Carta 2 %s (%d) venceu!\n", Cidade2, Estado2);
    }
    break;
    case 3:
    printf("3.PIB\n");
    if (PIB1 > PIB2) {
        printf("Carta 1 %s (%d) venceu!\n", Cidade1, Estado1);
    } else {
        printf("Carta 2 %s (%d) venceu!\n", Cidade2, Estado2);
    }
    break;
    case 4:
    printf("4.Pontos turisticos\n");
    if (PontosTuristicos1 > PontosTuristicos2) {
        printf("Carta 1 %s (%d) venceu!\n", Cidade1, Estado1);
    } else {
        printf("Carta 2 %s (%d) venceu!\n", Cidade2, Estado2);
    }
    break;
    case 5:
    printf("5.Densidade Populacional\n");
    if (densidadepopulacional1 > densidadepopulacional2) {
        printf("Carta 1 %s (%d) venceu!\n", Cidade1, Estado1);
    } else {
        printf("Carta 2 %s (%d) venceu!\n", Cidade2, Estado2);
    }
    break;


default:
printf("Opção inválida \n");
    break;
}
    return 0;

}   