#include <stdio.h>

//inclui as variaveis
int main() {
    char Estado1[20], Estado2[20];
    char Codigo1[20], Codigo2[20];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2, atributodecomparacao1, atributodecomparacao2, resultado1, resultado2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;
    float superpoder1, superpoder2;

    printf("### Bem vindo ao jogo Super Trunfo! ###\n");

//Inserir dados da carta 1 e imprimir:

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

//calcular densidade populacional e PIB percapita 1:

    densidadepopulacional1 = (float)(Populacao1 / Area1);
    printf("Densidade populacional 1: %f\n", densidadepopulacional1);

    PIBpercapita1 = (float) (PIB1 / Populacao1);
    printf("PIB Percapita 1: %f\n", PIBpercapita1);

//calcular super poder da carta 1:
    superpoder1 = (float)(Populacao1 + Area1 + PIB1 + PontosTuristicos1 + (1/densidadepopulacional1) + PIBpercapita1);
    printf("Super poder 1: %f\n", superpoder1);

// Inserir dados da carta 2 e imprimir:

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
 
//calcular densidade populacional e PIB percapita da carta 2:
    densidadepopulacional2 = (float)(Populacao2 / Area2);
    printf("Densidade populacional 2: %f\n", densidadepopulacional2);

    PIBpercapita2 = (float) (PIB2 / Populacao2);
    printf("PIB Percapita 1: %f\n", PIBpercapita2);

//calcular super poder da carta 2:
    superpoder2 = (float)(Populacao2 + Area2 + PIB2 + PontosTuristicos2 + (1/densidadepopulacional2) + PIBpercapita2);
    printf("Super poder 1: %f\n", superpoder2);


//imprimi o menu para comparação das cartas:
    printf("### Atributos de comparação 1 ###:\n");
    printf("1.População\n");
    printf("2.Area\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB Percapita\n");
    printf("7.Superpoder\n");
    printf("*** Escolha o PRIMEIRO atributo de comparação entre as cartas: *** \n");
    scanf("%d", &atributodecomparacao1);


//criei o menu de comparação dos atributos 1:
    switch (atributodecomparacao1)
    {
    case 1:
    printf("Você escolheu população\n");
    resultado1 = Populacao1 > Populacao2 ? 1 : 0;
    printf("Valor da População Carta 1: (%d)\n", Populacao1);
    printf("Valor da População Carta 2: (%d)\n", Populacao2);
    break;

    case 2:
    printf("Você escolheu Area\n");
    resultado1 = Area1 > Area2? 1 : 0;
    printf("Valor da Área Carta 1: (%f)\n", Area1);
    printf("Valor da Área Carta 2: (%f)\n", Area2);
    break;

    case 3:
    printf("Você escolheu PIB\n");
    resultado1 = PIB1 > PIB2 ? 1 : 0;
    printf("Valor de PIB Carta 1: (%f)\n", PIB1);
    printf("Valor do PIB Carta 2: (%f)\n", PIB2);
    break;

    case 4:
    printf("Você escolheu Pontos turisticos\n");
    resultado1 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
    printf("Valor de Pontos Turisticos Carta 1: (%d)\n", PontosTuristicos1);
    printf("Valor do Pontos Turisticos Carta 2: (%d)\n", PontosTuristicos2);
    break;

    case 5:
    printf("Você escolheu Densidade Populacional\n");
    resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
    printf("Valor de Densidade Populacional Carta 1: (%f)\n", densidadepopulacional1);
    printf("Valor do Densidade Populacional Carta 2: (%f)\n", densidadepopulacional2);
    break;

    case 6:
    printf("Você escolheu PIB Percapita\n");
    resultado1 = PIBpercapita1 > PIBpercapita2? 1 : 0;
    printf("Valor de PIB Percapita Carta 1: (%f)\n", PIBpercapita1);
    printf("Valor do PIB Percapita Carta 2: (%f)\n", PIBpercapita2);
    break;

    case 7:
    printf("Você escolheu Super Poder\n");
    resultado1 = superpoder1 > superpoder2 ? 1 : 0;
    printf("Valor de Super poder da Carta 1: (%f)\n", superpoder1);
    printf("Valor de Super poder da Carta 2: (%f)\n", superpoder2);
    break;

    default:
    printf("Opção inválida \n");
    break;
    }

// Exibi segundo menu de comparação: 
printf("### Atributos de comparação ###\n");
printf("1.População\n");
printf("2.Area\n");
printf("3.PIB\n");
printf("4.Pontos turisticos\n");
printf("5.Densidade Populacional\n");
printf("6.PIB Percapita\n");
printf("7.Superpoder\n");
printf("*** Escolha o SEGUNDO atributo de comparação entre as cartas: *** \n");
scanf("%d", &atributodecomparacao2);

//comparei se o primeiro atributo é igual ao segundo:
if (atributodecomparacao1 == atributodecomparacao2)
{
   printf("Você escolheu o mesmo atributo! \n");
} else { //caso seja diferente, continuamos com switch para armazenar resultado da variavel 2
    switch (atributodecomparacao2)
    {
    case 1:
    printf("Você escolheu População\n");
    resultado2 = Populacao1 > Populacao2 ? 1 : 0;
    printf("Valor da População Carta 1: (%d)\n", Populacao1);
    printf("Valor da População Carta 2: (%d)\n", Populacao2);
    break;

    case 2:
    printf("Você escolheu Area\n");
    resultado2 = Area1 > Area2? 1 : 0;
    printf("Valor da Área Carta 1: (%f)\n", Area1);
    printf("Valor da Área Carta 2: (%f)\n", Area2);
    break;

    case 3:
    printf("Você escolheu PIB\n");
    resultado2 = PIB1 > PIB2 ? 1 : 0;
    printf("Valor de PIB Carta 1: (%f)\n", PIB1);
    printf("Valor do PIB Carta 2: (%f)\n", PIB2);
    break;

    case 4:
    printf("Você escolheu Pontos turisticos\n");
    resultado2 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
    printf("Valor de Pontos Turisticos Carta 1: (%d)\n", PontosTuristicos1);
    printf("Valor do Pontos Turisticos Carta 2: (%d)\n", PontosTuristicos2);
    break;

    case 5:
    printf("5.Densidade Populacional\n");
    resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
    printf("Valor de Densidade Populacional Carta 1: (%f)\n", densidadepopulacional1);
    printf("Valor do Densidade Populacional Carta 2: (%f)\n", densidadepopulacional2);
    break;

    case 6:
    printf("Você escolheu PIB Percapita\n");
    resultado2 = PIBpercapita1 > PIBpercapita2? 1 : 0;
    printf("Valor de PIB Percapita Carta 1: (%f)\n", PIBpercapita1);
    printf("Valor do PIB Percapita Carta 2: (%f)\n", PIBpercapita2);
    break;

    case 7:
    printf("Você escolheu Super Poder\n");
    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
    printf("Valor de Super poder da Carta 1: (%f)\n", superpoder1);
    printf("Valor de Super poder da Carta 2: (%f)\n", superpoder2);
    break;

    default:
    printf("Opção inválida \n");
    break;
    }
}

//Calcular e mostrar o resultado
    if (resultado1 && resultado2)
    {
    printf ("A carta 1 %s (%s) venceu!\n", Cidade1, Estado1);
    } else if (resultado1 != resultado2) {
        printf ("O jogo empatou!\n");
    } else {
        printf ("A carta 2 %s (%s) venceu!\n", Cidade2, Estado2);
    }
    

    return 0;

}  