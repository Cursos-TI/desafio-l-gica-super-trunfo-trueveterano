#include <stdio.h>


 int main(){
   printf("Desafio Super Trunfo!\n");

    //Declaração das variáveis de cada estado e cada cidade.
    char estado ;
    char codigo_da_carta[5];
    char nome_da_cidade1[30], nome_da_cidade2[30], nome_da_cidade3[30], nome_da_cidade4[30], nome_da_cidade5[30], nome_da_cidade6[30], nome_da_cidade7[30], nome_da_cidade8[30], nome_da_cidade9[30], nome_da_cidade10[30], nome_da_cidade11[30], nome_da_cidade12[30], nome_da_cidade13[30], nome_da_cidade14[30], nome_da_cidade15[30], nome_da_cidade16[30], nome_da_cidade17[30], nome_da_cidade18[30], nome_da_cidade19[30], nome_da_cidade20[30], nome_da_cidade21[30], nome_da_cidade22[30], nome_da_cidade23[30], nome_da_cidade24[30], nome_da_cidade25[30], nome_da_cidade26[30],
    nome_da_cidade27[30], nome_da_cidade28[30], nome_da_cidade29[30], nome_da_cidade30[30] , nome_da_cidade31[30] , nome_da_cidade32[30];
    int populacao1, populacao2, populacao3, populacao4, populacao5, populacao6, populacao7, populacao8, populacao9, populacao10, populacao11, populacao12, populacao13, populacao14, populacao15, populacao16, populacao17, populacao18, populacao19, populacao20, populacao21, populacao22, populacao23, populacao24, populacao25, populacao26, populacao27, populacao28, populacao29, populacao30, populacao31, populacao32;
    float area1, area2, area3, area4, area5, area6, area7, area8, area9, area10, area11, area12, area13, area14, area15, area16, area17, area18, area19, area20, area21, area22, area23, area24, area25, area26, area27, area28, area29, area30, area31, area32;
    float PIB1, PIB2, PIB3, PIB4, PIB5, PIB6, PIB7, PIB8, PIB9, PIB10, PIB11, PIB12, PIB13, PIB14, PIB15, PIB16, PIB17, PIB18, PIB19, PIB20, PIB21, PIB22, PIB23, PIB24, PIB25, PIB26, PIB27, PIB28, PIB29, PIB30, PIB31, PIB32; 
    int numero_de_pontos_turistico1, numero_de_pontos_turisticos2, numero_de_pontos_turisticos3, numero_de_pontos_turisticos4, numero_de_pontos_turisticos5, numero_de_pontos_turisticos6 ,numero_de_pontos_turisticos7, numero_de_pontos_turisticos8, numero_de_pontos_turisticos9, numero_de_pontos_turisticos10, numero_de_pontos_turisticos11, numero_de_pontos_turisticos12, numero_de_pontos_turisticos13, numero_de_pontos_turisticos14, numero_de_pontos_turisticos15, numero_de_pontos_turisticos16, numero_de_pontos_turisticos17, numero_de_pontos_turisticos18, numero_de_pontos_turisticos19, numero_de_pontos_turisticos20, numero_de_pontos_turisticos21, numero_de_pontos_turisticos22, numero_de_pontos_turisticos23, numero_de_pontos_turisticos24, numero_de_pontos_turisticos25, numero_de_pontos_turisticos26, numero_de_pontos_turisticos27, numero_de_pontos_turisticos28, numero_de_pontos_turisticos29 ,numero_de_pontos_turisticos30 ,numero_de_pontos_turisticos31, numero_de_pontos_turisticos32;
    float densindade_populacional1, densindade_populacional2, densindade_populacional3, densindade_populacional4, densindade_populacional5, densindade_populacional6, densindade_populacional7, densindade_populacional8, densindade_populacional9, densindade_populacional10, densindade_populacional11, densindade_populacional12, densindade_populacional13, densindade_populacional14, densindade_populacional15, densindade_populacional16, densindade_populacional17, densindade_populacional18, densindade_populacional19, densindade_populacional20, densindade_populacional21, densindade_populacional22, densindade_populacional23, densindade_populacional24, densindade_populacional25, densindade_populacional26, densindade_populacional27, densindade_populacional28, densindade_populacional29, densindade_populacional30, densindade_populacional31, densindade_populacional32;
    float PIB_per_capita1, PIB_per_capita2, PIB_per_capita3, PIB_per_capita4, PIB_per_capita5, PIB_per_capita6, PIB_per_capita7, PIB_per_capita8, PIB_per_capita9, PIB_per_capita10, PIB_per_capita11, PIB_per_capita12, PIB_per_capita13, PIB_per_capita14, PIB_per_capita15, PIB_per_capita16 , PIB_per_capita17, PIB_per_capita18, PIB_per_capita19, PIB_per_capita20, PIB_per_capita21, PIB_per_capita22, PIB_per_capita23, PIB_per_capita24, PIB_per_capita25, PIB_per_capita26, PIB_per_capita27, PIB_per_capita28, PIB_per_capita29, PIB_per_capita30, PIB_per_capita31, PIB_per_capita32;
    int carta1, carta2;
    int propriedade;
    int populacaoA , populacaoB;
    float areaA , areaB;
    float PIBA, PIBB;
    float densidade_populacionalA, densidade_populacionalB;
    float PIB_per_capitaA, PIB_per_capitaB;
    char *cidadeA, *cidadeB;

    // Cadastro do Estado A e da Carta A01 
    printf("\nEstado A: \n");
    printf("\nCadastro para a carta A01:\n");
    printf("Digite o nome da cidade:\n");
    scanf(" %29[^\n]", nome_da_cidade1); //O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB(em bilhões): \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turistico1);

    // Calcular a densidade populacional e PIB per capita da carta A01
    densindade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = PIB1 * 1000000000 / populacao1;
 
    // Mostrar informações da Carta A01  
    printf("\nSobre a carta AO1: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB em bilhões: %.2f\n", PIB1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turistico1);
    printf("Densidade populacional: %.2f\n", densindade_populacional1);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita1);

    // Cadastrar carta A02
    printf("\nCadastro da carta A02: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade2);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao2);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area2);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB2);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos2);

    // Calcular a densidade populacional e PIB per capita da carta A02
    densindade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 * 1000000000 / populacao2;
 
    // Mostrar informações da carta A02
    printf("\nSobre a carta A02: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n",area2);
    printf("PIB em bilhões: %.2f\n", PIB2);
    printf("Número de pontos turísticos: \n",numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densindade_populacional2);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita2);
    
    // Cadastro da Carta A03
    printf("\nCadastro para a carta A03: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade3);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao3);
    printf("Digite área(em km²): \n");
    scanf(" %f", &area3);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB3);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos3);

    // Calcular a densidade populacional e PIB per capita da carta A03
    densindade_populacional3 = populacao3 / area3;
    PIB_per_capita3 = PIB3 * 1000000000 / populacao3;
    
    // Mostrar informações da carta A03
    printf("\nSobre a carta A03: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade3);
    printf("População: %d\n", populacao3);
    printf("Área em km²: %.2f\n", area3);
    printf("Pib em bilhões: %.2f\n", PIB3);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos3);
    printf("Densidade populacional: %.2f\n", densindade_populacional3);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita3);

    // Cadastrar carta A04
    printf("\nCadastro para a carta A04: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade4);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população:\n");
    scanf(" %d", &populacao4);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area4);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB4);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos4);
    
    // Calcular a densidade populacional e PIB per capita da carta A04
    densindade_populacional4 = populacao4 / area4;
    PIB_per_capita4 = PIB4 * 1000000000 / populacao4;
    
    // Mostrar informações da carta A04
    printf("\nSobre a carta A04: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade4);
    printf("População: %d\n", populacao4);
    printf("Área em km²: %.2f\n", area4);
    printf("PIB em bilhões: %.2f\n", PIB4);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos4);
    printf("Densidade populacional: %.2f\n", densindade_populacional4);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita4);

    // Cadastrar Estado B e cadastrar carta B01
    printf("\nEstado B: \n");
    printf("\nCadastro para a carta B01:\n");
    printf("Digite o nome da cidade:\n");
    scanf(" %29[^\n]", nome_da_cidade5);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf("%d", &populacao5);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area5);
    printf("Digite o PIB(em bilhões): \n");
    scanf("%f", &PIB5);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos5);

    // Calcular a densidade populacional e PIB per capita da carta B01
    densindade_populacional5 = populacao5 / area5;
    PIB_per_capita5 = PIB5 * 1000000000 / populacao5;

    // Mostrar informações da carta B01
    printf("\nSobre a carta BO1: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade5);
    printf("População: %d\n", populacao5);
    printf("Área em km²: %.2f\n", area5);
    printf("PIB em bilhões: %.2f\n", PIB5);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos5);
    printf("Densidade populacional: %.2f\n", densindade_populacional5);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita5);

    // Cadastrar a carta B02
    printf("\nCadastro da carta B02: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade6);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao6);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area6);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB6);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos6);

    // Calcular a densidade populacional e PIB per capita da carta B02
    densindade_populacional6 = populacao6 / area6;
    PIB_per_capita6 = PIB6 * 1000000000 / populacao6;

    // Mostrar informações da carta B02
    printf("\nSobre a carta B02: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade6);
    printf("População: %d\n", populacao6);
    printf("Área em km²: %.2f\n",area6);
    printf("PIB em bilhões: %.2f\n", PIB6);
    printf("Número de pontos turísticos: \n",numero_de_pontos_turisticos6);
    printf("Densidade populacional: %.2f\n", densindade_populacional6);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita6);

    // Cadastrar a carta B03 
    printf("\nCadastro para a carta B03: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade7);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao7);
    printf("Digite área(em km²): \n");
    scanf(" %f", &area7);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB17);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos7);

    // Calcular a densidade populacional e PIB per capita da carta B03
    densindade_populacional7 = populacao7 / area7;
    PIB_per_capita7 = PIB7 * 1000000000 / populacao7;

    // Mostrar informações da carta B03
    printf("\nSobre a carta B03: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade7);
    printf("População: %d\n", populacao7);
    printf("Área em km²: %.2f\n", area7);
    printf("Pib em bilhões: %.2f\n", PIB7);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos7);
    printf("Densidade populacional: %.2f\n", densindade_populacional7);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita7);

    // Cadastrar a carta B04
    printf("\nCadastro para a carta B04: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade8);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população:\n");
    scanf(" %d", &populacao8);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area8);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB8);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos8);

    // Calcular a densidade populacional e PIB per capita da carta B04
    densindade_populacional8 = populacao8 / area8;
    PIB_per_capita8 = PIB8 * 1000000000 / populacao8;
    
    // Mostrar informações da carta B04
    printf("\nSobre a carta B04: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade8);
    printf("População: %d\n", populacao8);
    printf("Área em km²: %.2f\n", area8);
    printf("PIB em bilhões: %.2f\n", PIB8);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos8);
    printf("Densidade populacional: %.2f\n", densindade_populacional8);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita8);

    // Cadastrar Estado C e carta C01
    printf("\nEstado C: \n");
    printf("\nCadastro para a carta C01:\n");
    printf("Digite o nome da cidade:\n");
    scanf(" %29[^\n]", nome_da_cidade9);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf("%d", &populacao9);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area9);
    printf("Digite o PIB(em bilhões): \n");
    scanf("%f", &PIB9);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos9);

    // Calcular a densidade populacional e PIB per capita da carta C01
    densindade_populacional9 = populacao9 / area9;
    PIB_per_capita9 = PIB9 * 1000000000 / populacao9;

    // Mostrar informações da carta C01
    printf("\nSobre a carta CO1: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade9);
    printf("População: %d\n", populacao9);
    printf("Área em km²: %.2f\n", area9);
    printf("PIB em bilhões: %.2f\n", PIB9);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos9);
    printf("Densidade populacional: %.2f\n", densindade_populacional9);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita9);

    // Cadastrar a carta C02
    printf("\nCadastro da carta C02: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade10);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao10);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area10);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB10);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos10);

    // Calcular a densidade populacional e PIB per capita da carta C02
    densindade_populacional10 = populacao10 / area10;
    PIB_per_capita10 = PIB10 * 1000000000 / populacao1;

    // Mostrar informações da carta C02
    printf("\nSobre a carta C02: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade10);
    printf("População: %d\n", populacao10);
    printf("Área em km²: %.2f\n",area10);
    printf("PIB em bilhões: %.2f\n", PIB10);
    printf("Número de pontos turísticos: \n",numero_de_pontos_turisticos10);
    printf("Densidade populacional: %.2f\n", densindade_populacional10);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita10);

    // Cadastrar a carta C03
    printf("\nCadastro para a carta C03: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade11);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao11);
    printf("Digite área(em km²): \n");
    scanf(" %f", &area11);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB11);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos11);

    // Calcular a densidade populacional e PIB per capita da carta C03
    densindade_populacional11 = populacao11 / area11;
    PIB_per_capita11 = PIB11 * 1000000000 / populacao11;

    // Mostrar informações da carta C03  
    printf("\nSobre a carta C03: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade11);
    printf("População: %d\n", populacao11);
    printf("Área em km²: %.2f\n", area11);
    printf("Pib em bilhões: %.2f\n", PIB11);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos11);
    printf("Densidade populacional: %.2f\n", densindade_populacional11);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita11);

    // Cadastrar a carta C04
    printf("\nCadastro para a carta C04: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade12);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população:\n");
    scanf(" %d", &populacao12);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area12);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB12);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos12);

    // Calcular a densidade populacional e PIB per capita da carta C04
    densindade_populacional12 = populacao12 / area12;
    PIB_per_capita12 = PIB12 * 1000000000 / populacao12;

    // Mostrar informações da carta C04
    printf("\nSobre a carta C04: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade12);
    printf("População: %d\n", populacao12);
    printf("Área em km²: %.2f\n", area12);
    printf("PIB em bilhões: %.2f\n", PIB12);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos12);
    printf("Densidade populacional: %.2f\n", densindade_populacional12);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita12);

    // Cadastrar o Estado D e a carta D01
    printf("\nEstado D: \n");
    printf("\nCadastro para a carta D01:\n");
    printf("Digite o nome da cidade:\n");
    scanf(" %29[^\n]", nome_da_cidade13);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf("%d", &populacao13);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area13);
    printf("Digite o PIB(em bilhões): \n");
    scanf("%f", &PIB13);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos13);

    // Calcular a densidade populacional e PIB per capita da carta D01
    densindade_populacional13 = populacao13 / area13;
    PIB_per_capita13 = PIB13 * 1000000000 / populacao13;

    // Mostrar informações da carta D01
    printf("\nSobre a carta DO1: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade13);
    printf("População: %d\n", populacao13);
    printf("Área em km²: %.2f\n", area13);
    printf("PIB em bilhões: %.2f\n", PIB13);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos13);
    printf("Densidade populacional: %.2f\n", densindade_populacional13);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita13);

    // Cadastrar a carta D02
    printf("\nCadastro da carta D02: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade14);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao14);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area14);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB14);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos14);
    printf("Densidade populacional: %.2f\n", densindade_populacional14);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita14);

    // Calcular a densidade populacional e PIB per capita da carta D02
    densindade_populacional14 = populacao14 / area14;
    PIB_per_capita14 = PIB14 * 1000000000 / populacao14;

    // Mostrar informações da carta D02
    printf("\nSobre a carta D02: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade14);
    printf("População: %d\n", populacao14);
    printf("Área em km²: %.2f\n",area14);
    printf("PIB em bilhões: %.2f\n", PIB14);
    printf("Número de pontos turísticos: \n",numero_de_pontos_turisticos14);
    printf("Densidade populacional: %.2f\n", densindade_populacional14);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita14);

    // Cadastrar a carta D03
    printf("\nCadastro para a carta D03: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade15);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao15);
    printf("Digite área(em km²): \n");
    scanf(" %f", &area15);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB15);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos15);

    // Calcular a densidade populacional e PIB per capita da carta D03
    densindade_populacional15 = populacao15 / area15;
    PIB_per_capita15 = PIB15 * 1000000000 / populacao15;
    
    // Mostrar informações da carta D03
    printf("\nSobre a carta D03: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade15);
    printf("População: %d\n", populacao15);
    printf("Área em km²: %.2f\n", area15);
    printf("Pib em bilhões: %.2f\n", PIB15);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos15);
    printf("Densidade populacional: %.2f\n", densindade_populacional15);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita15);
 
    // Cadastro da carta D04
    printf("\nCadastro para a carta D04: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade16);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população:\n");
    scanf(" %d", &populacao16);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area16);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB16);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos16);

    // Calcular a densidade populacional e PIB per capita da carta D04
    densindade_populacional16 = populacao16 / area16;
    PIB_per_capita16 = PIB16 * 1000000000 / populacao16;

    // Mostrar informações da carta D04
    printf("\nSobre a carta D04: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade16);
    printf("População: %d\n", populacao16);
    printf("Área em km²: %.2f\n", area16);
    printf("PIB em bilhões: %.2f\n", PIB16);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos16);
    printf("Densidade populacional: %.2f\n", densindade_populacional16);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita16);

    // Cadastro do Estado E e da carta E01
    printf("\nEstado E: \n");
    printf("\nCadastro para a carta E01:\n");
    printf("Digite o nome da cidade:\n");
    scanf(" %29[^\n]", nome_da_cidade17);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf("%d", &populacao17);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area17);
    printf("Digite o PIB(em bilhões): \n");
    scanf("%f", &PIB17);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos17);

    // Calcular a densidade populacional e PIB per capita da carta E01
    densindade_populacional17 = populacao17 / area17;
    PIB_per_capita17 = PIB17 * 1000000000 / populacao17;

    // Mostrar informações da carta E01
    printf("\nSobre a carta EO1: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade17);
    printf("População: %d\n", populacao17);
    printf("Área em km²: %.2f\n", area17);
    printf("PIB em bilhões: %.2f\n", PIB17);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos17);
    printf("Densidade populacional: %.2f\n", densindade_populacional17);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita17);

    // Cadastrar a carta E02
    printf("\nCadastro da carta E02: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade18);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao18);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area18);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB18);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos18);

    // Calcular a densidade populacional e PIB per capita da carta E02
    densindade_populacional18 = populacao18 / area18;
    PIB_per_capita18 = PIB18 * 1000000000 / populacao18;

    // Mostrar informações da carta E02
    printf("\nSobre a carta E02: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade18);
    printf("População: %d\n", populacao18);
    printf("Área em km²: %.2f\n", area18);
    printf("PIB em bilhões: %.2f\n", PIB18);
    printf("Número de pontos turísticos: \n", numero_de_pontos_turisticos18);
    printf("Densidade populacional: %.2f\n", densindade_populacional18);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita18);
    
    // Cadastrar a carta E03
    printf("\nCadastro para a carta E03: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade19);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao19);
    printf("Digite área(em km²): \n");
    scanf(" %f", &area19);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB19);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos19);

    // Calcular a densidade populacional e PIB per capita da carta E03
    densindade_populacional19 = populacao19 / area19;
    PIB_per_capita19 = PIB19 * 1000000000 / populacao19;

    // Mostrar as informações da carta E03
    printf("\nSobre a carta E03: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade19);
    printf("População: %d\n", populacao19);
    printf("Área em km²: %.2f\n", area19);
    printf("Pib em bilhões: %.2f\n", PIB19);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos19);
    printf("Densidade populacional: %.2f\n", densindade_populacional19);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita19);

    // Cadastrar a carta E04
    printf("\nCadastro para a carta E04: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade20);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população:\n");
    scanf(" %d", &populacao20);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area20);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB20);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos20);

    // Calcular a densidade populacional e PIB per capita da carta E04
    densindade_populacional20 = populacao20 / area20;
    PIB_per_capita20 = PIB20 * 1000000000 / populacao20;

    // Mostrar as informações da carta E04  
    printf("\nSobre a carta E04: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade20);
    printf("População: %d\n", populacao20);
    printf("Área em km²: %.2f\n", area20);
    printf("PIB em bilhões: %.2f\n", PIB20);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos20);
    printf("Densidade populacional: %.2f\n", densindade_populacional20);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita20);

    // Cadastrar o Estado F e a carta F01
    printf("\nEstado F: \n");
    printf("\nCadastro para a carta F01:\n");
    printf("Digite o nome da cidade:\n");
    scanf(" %29[^\n]", nome_da_cidade21);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf("%d", &populacao21);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area21);
    printf("Digite o PIB(em bilhões): \n");
    scanf("%f", &PIB21);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos21);

    // Calcular a densidade populacional e PIB per capita da carta F01
    densindade_populacional21 = populacao21 / area21;
    PIB_per_capita21 = PIB21 * 1000000000 / populacao21;

    // Mostrar informações da carta F01
    printf("\nSobre a carta FO1: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade21);
    printf("População: %d\n", populacao21);
    printf("Área em km²: %.2f\n", area21);
    printf("PIB em bilhões: %.2f\n", PIB21);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos21);
    printf("Densidade populacional: %.2f\n", densindade_populacional21);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita21);

    // Cadastro da carta F02
    printf("\nCadastro da carta F02: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade22);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao22);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area22);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB22);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos22);

    // Calcular a densidade populacional e PIB per capita da carta F02
    densindade_populacional22 = populacao22 / area22;
    PIB_per_capita22 = PIB22 * 1000000000 / populacao22;

    // Mostrar informações da carta F02
    printf("\nSobre a carta F02: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade22);
    printf("População: %d\n", populacao22);
    printf("Área em km²: %.2f\n", area22);
    printf("PIB em bilhões: %.2f\n", PIB22);
    printf("Número de pontos turísticos: \n", numero_de_pontos_turisticos22);
    printf("Densidade populacional: %.2f\n", densindade_populacional22);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita22);


    //Cadastrar a carta F03
    printf("\nCadastro para a carta F03: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade23);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao23);
    printf("Digite área(em km²): \n");
    scanf(" %f", &area23);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB23);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos23);

    // Calcular a densidade populacional e PIB per capita da carta F03
    densindade_populacional23 = populacao23 / area23;
    PIB_per_capita23 = PIB23 * 1000000000 / populacao23;

    // Mostrar informações da carta F03
    printf("\nSobre a carta F03: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade23);
    printf("População: %d\n", populacao23);
    printf("Área em km²: %.2f\n", area23);
    printf("Pib em bilhões: %.2f\n", PIB23);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos23);
    printf("Densidade populacional: %.2f\n", densindade_populacional23);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita23);

    // Cadastro para a carta F04
    printf("\nCadastro para a carta F04: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade24);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população:\n");
    scanf(" %d", &populacao24);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area24);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB24);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos24);

    // Calcular a densidade populacional e PIB per capita da carta F04
    densindade_populacional24 = populacao24 / area24;
    PIB_per_capita24 = PIB24 * 1000000000 / populacao24;

    // Mostrar as informações da carta F04
    printf("\nSobre a carta F04: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade24);
    printf("População: %d\n", populacao24);
    printf("Área em km²: %.2f\n", area24);
    printf("PIB em bilhões: %.2f\n", PIB24);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos24);
    printf("Densidade populacional: %.2f\n", densindade_populacional24);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita24);

    // Cadastrar o Estado G e a carta G01
    printf("\nEstado G: \n");
    printf("\nCadastro para a carta G01:\n");
    printf("Digite o nome da cidade:\n");
    scanf(" %29[^\n]", nome_da_cidade25);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf("%d", &populacao25);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area25);
    printf("Digite o PIB(em bilhões): \n");
    scanf("%f", &PIB25);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos25);

    // Calcular a densidade populacional e PIB per capita da carta G01
    densindade_populacional25 = populacao25 / area25;
    PIB_per_capita25 = PIB25 * 1000000000 / populacao25;

    // Mostrar as informações da carta G01
    printf("\nSobre a carta GO1: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade25);
    printf("População: %d\n", populacao25);
    printf("Área em km²: %.2f\n", area25);
    printf("PIB em bilhões: %.2f\n", PIB25);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos25);
    printf("Densidade populacional: %.2f\n", densindade_populacional25);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita25);

    // Cadastrar a carta G02
    printf("\nCadastro da carta G02: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade26);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao26);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area26);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB26);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos26);
    
    // Calcular a densidade populacional e PIB per capita da carta G02
    densindade_populacional26 = populacao26 / area26;
    PIB_per_capita26 = PIB26 * 1000000000 / populacao26;

    // Mostrar as informações da carta G02
    printf("\nSobre a carta G02: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade26);
    printf("População: %d\n", populacao26);
    printf("Área em km²: %.2f\n",area26);
    printf("PIB em bilhões: %.2f\n", PIB26);
    printf("Número de pontos turísticos: \n",numero_de_pontos_turisticos26);
    printf("Densidade populacional: %.2f\n", densindade_populacional26);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita26);

    //Cadastrar a carta G03
    printf("\nCadastro para a carta G03: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade27);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao27);
    printf("Digite área(em km²): \n");
    scanf(" %f", &area27);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB27);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos27);

    // Calcular a densidade populacional e PIB per capita da carta G03
    densindade_populacional27 = populacao27 / area27;
    PIB_per_capita27 = PIB27 * 1000000000 / populacao27;
 
    // Mostrar as informações da carta G03
    printf("\nSobre a carta G03: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade27);
    printf("População: %d\n", populacao27);
    printf("Área em km²: %.2f\n", area27);
    printf("Pib em bilhões: %.2f\n", PIB27);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos27);
    printf("Densidade populacional: %.2f\n", densindade_populacional27);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita27);

    // Cadastro da carta G04  
    printf("\nCadastro para a carta G04: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade28);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população:\n");
    scanf(" %d", &populacao28);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area28);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB28);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos28);

    // Calcular a densidade populacional e PIB per capita da carta G04
    densindade_populacional28 = populacao28 / area28;
    PIB_per_capita28 = PIB28 * 1000000000 / populacao28;

    // Mostrar as informações da carta G04
    printf("\nSobre a carta G04: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade28);
    printf("População: %d\n", populacao28);
    printf("Área em km²: %.2f\n", area28);
    printf("PIB em bilhões: %.2f\n", PIB28);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos28);
    printf("Densidade populacional: %.2f\n", densindade_populacional28);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita28);

    // Cadastro do Estado H e da carta H01  
    printf("\nEstado H: \n");
    printf("\nCadastro para a carta H01:\n");
    printf("Digite o nome da cidade:\n");
    scanf(" %29[^\n]", nome_da_cidade29);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf("%d", &populacao29);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area29);
    printf("Digite o PIB(em bilhões): \n");
    scanf("%f", &PIB29);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos29);

    // Calcular a densidade populacional e PIB per capita da carta H01
    densindade_populacional29 = populacao29 / area29;
    PIB_per_capita29 = PIB29 * 1000000000 / populacao29;

    // Mostrar as informações da carta H01  
    printf("\nSobre a carta HO1: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade29);
    printf("População: %d\n", populacao29);
    printf("Área em km²: %.2f\n", area29);
    printf("PIB em bilhões: %.2f\n", PIB29);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos29);
    printf("Densidade populacional: %.2f\n", densindade_populacional29);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita29);

    // Cadastrar a carta H02
    printf("\nCadastro da carta H02: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade30);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao30);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area30);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB30);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos30);
    
    // Calcular a densidade populacional e PIB per capita da carta H02
    densindade_populacional30 = populacao30 / area30;
    PIB_per_capita30 = PIB30 * 1000000000 / populacao30;

    // Mostrar as informações da carta H02
    printf("\nSobre a carta H02: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade30);
    printf("População: %d\n", populacao30);
    printf("Área em km²: %.2f\n",area30);
    printf("PIB em bilhões: %.2f\n", PIB30);
    printf("Número de pontos turísticos: \n",numero_de_pontos_turisticos30);
    printf("Densidade populacional: %.2f\n", densindade_populacional30);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita30);
 
    // Cadastrar a carta H03
    printf("\nCadastro para a carta H03: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade31);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população: \n");
    scanf(" %d", &populacao31);
    printf("Digite área(em km²): \n");
    scanf(" %f", &area31);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB31);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos31);
    
    //// Calcular a densidade populacional e PIB per capita da carta H03
    densindade_populacional31 = populacao31 / area31;
    PIB_per_capita31 = PIB31 * 1000000000 / populacao31;

    // Mostrar as informações da carta H03
    printf("\nSobre a carta H03: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade31);
    printf("População: %d\n", populacao31);
    printf("Área em km²: %.2f\n", area31);
    printf("Pib em bilhões: %.2f\n", PIB31);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos31);
    printf("Densidade populacional: %.2f\n", densindade_populacional31);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita31);


    // Cadastrar a carta H04
    printf("\nCadastro para a carta H04: \n");
    printf("Digite o nome da cidade: \n");
    scanf(" %29[^\n]", nome_da_cidade32);//O código esta dessa forma para o scan ler espaços ,entre outros.
    printf("Digite a população:\n");
    scanf(" %d", &populacao32);
    printf("Digite a área(em km²): \n");
    scanf(" %f", &area32);
    printf("Digite o PIB(em bilhões): \n");
    scanf(" %f", &PIB32);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos32);

    // Calcular a densidade populacional e PIB per capita da carta H04
    densindade_populacional32 = populacao32 / area32;
    PIB_per_capita32 = PIB32 * 1000000000 / populacao32;

    // Mostrar as informações da carta H04
    printf("\nSobre a carta H04: \n");
    printf("Nome da cidade: %s\n", nome_da_cidade32);
    printf("População: %d\n", populacao32);
    printf("Área em km²: %.2f\n", area32);
    printf("PIB em bilhões: %.2f\n", PIB32);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos32);
    printf("Densidade populacional: %.2f\n", densindade_populacional32);
    printf("PIB per capita em R$: %.2f\n", PIB_per_capita32);

    // Escolher as cartas para a comparação
    printf("\nEscolha duas cartas (de 1 a 32) para comparar: \n");
    printf("Com 1 sendo A01 ,2 sendo A02, 3 sendo A03 , 4 sendo A04, 5 sendo B01 e assim por diante. \n");
    scanf("%d %d", &carta1, &carta2);

    // Ligar as cartas escolhidas as cartas cadastradas no jogo para a primeira carta escolhida
    if (carta1 == 1){ cidadeA = nome_da_cidade1; populacaoA = populacao1; areaA = area1; PIBA = PIB1; densidade_populacionalA = densindade_populacional1; PIB_per_capitaA = PIB_per_capita1; }
    else if ( carta1 == 2){ cidadeA = nome_da_cidade2; populacaoA = populacao2; areaA = area2; PIBA = PIB2; densidade_populacionalA = densindade_populacional2; PIB_per_capitaA = PIB_per_capita2;}
    else if ( carta1 == 3){ cidadeA = nome_da_cidade3; populacaoA = populacao3; areaA = area3; PIBA = PIB3; densidade_populacionalA = densindade_populacional3; PIB_per_capitaA = PIB_per_capita3;}
    else if ( carta1 == 4){ cidadeA = nome_da_cidade4; populacaoA = populacao4; areaA = area4; PIBA = PIB4; densidade_populacionalA = densindade_populacional4; PIB_per_capitaA = PIB_per_capita4;}
    else if ( carta1 == 5){ cidadeA = nome_da_cidade5; populacaoA = populacao5; areaA = area5; PIBA = PIB5; densidade_populacionalA = densindade_populacional5; PIB_per_capitaA = PIB_per_capita5;}
    else if ( carta1 == 6){ cidadeA = nome_da_cidade6; populacaoA = populacao6; areaA = area6; PIBA = PIB6; densidade_populacionalA = densindade_populacional6; PIB_per_capitaA = PIB_per_capita6;}
    else if ( carta1 == 7){ cidadeA = nome_da_cidade7; populacaoA = populacao7; areaA = area7; PIBA = PIB7; densidade_populacionalA = densindade_populacional7; PIB_per_capitaA = PIB_per_capita7;}
    else if ( carta1 == 8){ cidadeA = nome_da_cidade8; populacaoA = populacao8; areaA = area8; PIBA = PIB8; densidade_populacionalA = densindade_populacional8; PIB_per_capitaA = PIB_per_capita8;}
    else if ( carta1 == 9){ cidadeA = nome_da_cidade9; populacaoA = populacao9; areaA = area9; PIBA = PIB9; densidade_populacionalA = densindade_populacional9; PIB_per_capitaA = PIB_per_capita9;}
    else if ( carta1 == 10){ cidadeA = nome_da_cidade10; populacaoA = populacao10; areaA = area10; PIBA = PIB10; densidade_populacionalA = densindade_populacional10; PIB_per_capitaA = PIB_per_capita10;}
    else if ( carta1 == 11){ cidadeA = nome_da_cidade11; populacaoA = populacao11; areaA = area11; PIBA = PIB11; densidade_populacionalA = densindade_populacional11; PIB_per_capitaA = PIB_per_capita11;}
    else if ( carta1 == 12){ cidadeA = nome_da_cidade12; populacaoA = populacao12; areaA = area12; PIBA = PIB12; densidade_populacionalA = densindade_populacional12; PIB_per_capitaA = PIB_per_capita12;}
    else if ( carta1 == 13){ cidadeA = nome_da_cidade13; populacaoA = populacao13; areaA = area13; PIBA = PIB13; densidade_populacionalA = densindade_populacional13; PIB_per_capitaA = PIB_per_capita13;}
    else if ( carta1 == 14){ cidadeA = nome_da_cidade14; populacaoA = populacao14; areaA = area14; PIBA = PIB14; densidade_populacionalA = densindade_populacional14; PIB_per_capitaA = PIB_per_capita14;}
    else if ( carta1 == 15){ cidadeA = nome_da_cidade15; populacaoA = populacao15; areaA = area15; PIBA = PIB15; densidade_populacionalA = densindade_populacional15; PIB_per_capitaA = PIB_per_capita15;}
    else if ( carta1 == 16){ cidadeA = nome_da_cidade16; populacaoA = populacao16; areaA = area16; PIBA = PIB16; densidade_populacionalA = densindade_populacional16; PIB_per_capitaA = PIB_per_capita16;}
    else if ( carta1 == 17){ cidadeA = nome_da_cidade17; populacaoA = populacao17; areaA = area17; PIBA = PIB17; densidade_populacionalA = densindade_populacional17; PIB_per_capitaA = PIB_per_capita17; }
    else if ( carta1 == 18){ cidadeA = nome_da_cidade18; populacaoA = populacao18; areaA = area18; PIBA = PIB18; densidade_populacionalA = densindade_populacional18; PIB_per_capitaA = PIB_per_capita18; }
    else if ( carta1 == 19){ cidadeA = nome_da_cidade19; populacaoA = populacao19; areaA = area19; PIBA = PIB19; densidade_populacionalA = densindade_populacional19; PIB_per_capitaA = PIB_per_capita19; }
    else if ( carta1 == 20){ cidadeA = nome_da_cidade20; populacaoA = populacao20; areaA = area20; PIBA = PIB20; densidade_populacionalA = densindade_populacional20; PIB_per_capitaA = PIB_per_capita20; }
    else if ( carta1 == 21){ cidadeA = nome_da_cidade21; populacaoA = populacao21; areaA = area21; PIBA = PIB21; densidade_populacionalA = densindade_populacional21; PIB_per_capitaA = PIB_per_capita21;}
    else if ( carta1 == 22){ cidadeA = nome_da_cidade22; populacaoA = populacao22; areaA = area22; PIBA = PIB22; densidade_populacionalA = densindade_populacional22; PIB_per_capitaA = PIB_per_capita22; }
    else if ( carta1 == 23){ cidadeA = nome_da_cidade23; populacaoA = populacao23; areaA = area23; PIBA = PIB23; densidade_populacionalA = densindade_populacional23; PIB_per_capitaA = PIB_per_capita23;}
    else if ( carta1 == 24){ cidadeA = nome_da_cidade24; populacaoA = populacao24; areaA = area24; PIBA = PIB24; densidade_populacionalA = densindade_populacional24; PIB_per_capitaA = PIB_per_capita24;}
    else if ( carta1 == 25){ cidadeA = nome_da_cidade25; populacaoA = populacao25; areaA = area25; PIBA = PIB25; densidade_populacionalA = densindade_populacional25; PIB_per_capitaA = PIB_per_capita25;}
    else if ( carta1 == 26){ cidadeA = nome_da_cidade26; populacaoA = populacao26; areaA = area26; PIBA = PIB26; densidade_populacionalA = densindade_populacional26; PIB_per_capitaA = PIB_per_capita26;}
    else if ( carta1 == 27){ cidadeA = nome_da_cidade27; populacaoA = populacao27; areaA = area27; PIBA = PIB27; densidade_populacionalA = densindade_populacional27; PIB_per_capitaA = PIB_per_capita27;}
    else if ( carta1 == 28){ cidadeA = nome_da_cidade28; populacaoA = populacao28; areaA = area28; PIBA = PIB28; densidade_populacionalA = densindade_populacional28; PIB_per_capitaA = PIB_per_capita28;}
    else if ( carta1 == 29){ cidadeA = nome_da_cidade29; populacaoA = populacao29; areaA = area29; PIBA = PIB29; densidade_populacionalA = densindade_populacional29; PIB_per_capitaA = PIB_per_capita29;}
    else if ( carta1 == 30){ cidadeA = nome_da_cidade30; populacaoA = populacao30; areaA = area30; PIBA = PIB30; densidade_populacionalA = densindade_populacional30; PIB_per_capitaA = PIB_per_capita30;}
    else if ( carta1 == 31){ cidadeA = nome_da_cidade31; populacaoA = populacao31; areaA = area31; PIBA = PIB31; densidade_populacionalA = densindade_populacional31; PIB_per_capitaA = PIB_per_capita31;}
    else if ( carta1 == 32){ cidadeA = nome_da_cidade32; populacaoA = populacao32; areaA = area32; PIBA = PIB32; densidade_populacionalA = densindade_populacional32; PIB_per_capitaA = PIB_per_capita32;}

    // Ligar as cartas escolhidas as cartas cadastradas no jogo para a segunda carta escolhida 
    if (carta2 == 1){ cidadeB = nome_da_cidade1; populacaoB = populacao1; areaB = area1; PIBB = PIB1; densidade_populacionalB = densindade_populacional1; PIB_per_capitaB = PIB_per_capita1; }
    else if ( carta2 == 2){ cidadeB = nome_da_cidade2; populacaoB = populacao2; areaB = area2; PIBB = PIB2; densidade_populacionalB = densindade_populacional2; PIB_per_capitaB = PIB_per_capita2;}
    else if ( carta2 == 3){ cidadeB = nome_da_cidade3; populacaoB = populacao3; areaB = area3; PIBB = PIB3; densidade_populacionalB = densindade_populacional3; PIB_per_capitaB = PIB_per_capita3;}
    else if ( carta2 == 4){ cidadeB = nome_da_cidade4; populacaoB = populacao4; areaB = area4; PIBB = PIB4; densidade_populacionalB = densindade_populacional4; PIB_per_capitaB = PIB_per_capita4;}
    else if ( carta2 == 5){ cidadeB = nome_da_cidade5; populacaoB = populacao5; areaB = area5; PIBB = PIB5; densidade_populacionalB = densindade_populacional5; PIB_per_capitaB = PIB_per_capita5;}
    else if ( carta2 == 6){ cidadeB = nome_da_cidade6; populacaoB = populacao6; areaB = area6; PIBB = PIB6; densidade_populacionalB = densindade_populacional6; PIB_per_capitaB = PIB_per_capita6;}
    else if ( carta2 == 7){ cidadeB = nome_da_cidade7; populacaoB = populacao7; areaB = area7; PIBB = PIB7; densidade_populacionalB = densindade_populacional7; PIB_per_capitaB = PIB_per_capita7;}
    else if ( carta2 == 8){ cidadeB = nome_da_cidade8; populacaoB = populacao8; areaB = area8; PIBB = PIB8; densidade_populacionalB = densindade_populacional8; PIB_per_capitaB = PIB_per_capita8;}
    else if ( carta2 == 9){ cidadeB = nome_da_cidade9; populacaoB = populacao9; areaB = area9; PIBB = PIB9; densidade_populacionalB = densindade_populacional9; PIB_per_capitaB = PIB_per_capita9;}
    else if ( carta2 == 10){ cidadeB = nome_da_cidade10; populacaoB = populacao10; areaB = area10; PIBB = PIB10; densidade_populacionalB = densindade_populacional10; PIB_per_capitaB = PIB_per_capita10;}
    else if ( carta2 == 11){ cidadeB = nome_da_cidade11; populacaoB = populacao11; areaB = area11; PIBB = PIB11; densidade_populacionalB = densindade_populacional11; PIB_per_capitaB = PIB_per_capita11;}
    else if ( carta2 == 12){ cidadeB = nome_da_cidade12; populacaoB = populacao12; areaB = area12; PIBB = PIB12; densidade_populacionalB = densindade_populacional12; PIB_per_capitaB = PIB_per_capita12;}
    else if ( carta2 == 13){ cidadeB = nome_da_cidade13; populacaoB = populacao13; areaB = area13; PIBB = PIB13; densidade_populacionalB = densindade_populacional13; PIB_per_capitaB = PIB_per_capita13;}
    else if ( carta2 == 14){ cidadeB = nome_da_cidade14; populacaoB = populacao14; areaB = area14; PIBB = PIB14; densidade_populacionalB = densindade_populacional14; PIB_per_capitaB = PIB_per_capita14;}
    else if ( carta2 == 15){ cidadeB = nome_da_cidade15; populacaoB = populacao15; areaB = area15; PIBB = PIB15; densidade_populacionalB = densindade_populacional15; PIB_per_capitaB = PIB_per_capita15;}
    else if ( carta2 == 16){ cidadeB = nome_da_cidade16; populacaoB = populacao16; areaB = area16; PIBB = PIB16; densidade_populacionalB = densindade_populacional16; PIB_per_capitaB = PIB_per_capita16;}
    else if ( carta2 == 17){ cidadeB = nome_da_cidade17; populacaoB = populacao17; areaB = area17; PIBB = PIB17; densidade_populacionalB = densindade_populacional17; PIB_per_capitaB = PIB_per_capita17; }
    else if ( carta2 == 18){ cidadeB = nome_da_cidade18; populacaoB = populacao18; areaB = area18; PIBB = PIB18; densidade_populacionalB = densindade_populacional18; PIB_per_capitaB = PIB_per_capita18; }
    else if ( carta2 == 19){ cidadeB = nome_da_cidade19; populacaoB = populacao19; areaB = area19; PIBB = PIB19; densidade_populacionalB = densindade_populacional19; PIB_per_capitaB = PIB_per_capita19; }
    else if ( carta2 == 20){ cidadeB = nome_da_cidade20; populacaoB = populacao20; areaB = area20; PIBB = PIB20; densidade_populacionalB = densindade_populacional20; PIB_per_capitaB = PIB_per_capita20; }
    else if ( carta2 == 21){ cidadeB = nome_da_cidade21; populacaoB = populacao21; areaB = area21; PIBB = PIB21; densidade_populacionalB = densindade_populacional21; PIB_per_capitaB = PIB_per_capita21;}
    else if ( carta2 == 22){ cidadeB = nome_da_cidade22; populacaoB = populacao22; areaB = area22; PIBB = PIB22; densidade_populacionalB = densindade_populacional22; PIB_per_capitaB = PIB_per_capita22; }
    else if ( carta2 == 23){ cidadeB = nome_da_cidade23; populacaoB = populacao23; areaB = area23; PIBB = PIB23; densidade_populacionalB = densindade_populacional23; PIB_per_capitaB = PIB_per_capita23;}
    else if ( carta2 == 24){ cidadeB = nome_da_cidade24; populacaoB = populacao24; areaB = area24; PIBB = PIB24; densidade_populacionalB = densindade_populacional24; PIB_per_capitaB = PIB_per_capita24;}
    else if ( carta2 == 25){ cidadeB = nome_da_cidade25; populacaoB = populacao25; areaB = area25; PIBB = PIB25; densidade_populacionalB = densindade_populacional25; PIB_per_capitaB = PIB_per_capita25;}
    else if ( carta2 == 26){ cidadeB = nome_da_cidade26; populacaoB = populacao26; areaB = area26; PIBB = PIB26; densidade_populacionalB = densindade_populacional26; PIB_per_capitaB = PIB_per_capita26;}
    else if ( carta2 == 27){ cidadeB = nome_da_cidade27; populacaoB = populacao27; areaB = area27; PIBB = PIB27; densidade_populacionalB = densindade_populacional27; PIB_per_capitaB = PIB_per_capita27;}
    else if ( carta2 == 28){ cidadeB = nome_da_cidade28; populacaoB = populacao28; areaB = area28; PIBB = PIB28; densidade_populacionalB = densindade_populacional28; PIB_per_capitaB = PIB_per_capita28;}
    else if ( carta2 == 29){ cidadeB = nome_da_cidade29; populacaoB = populacao29; areaB = area29; PIBB = PIB29; densidade_populacionalB = densindade_populacional29; PIB_per_capitaB = PIB_per_capita29;}
    else if ( carta2 == 30){ cidadeB = nome_da_cidade30; populacaoB = populacao30; areaB = area30; PIBB = PIB30; densidade_populacionalB = densindade_populacional30; PIB_per_capitaB = PIB_per_capita30;}
    else if ( carta2 == 31){ cidadeB = nome_da_cidade31; populacaoB = populacao31; areaB = area31; PIBB = PIB31; densidade_populacionalB = densindade_populacional31; PIB_per_capitaB = PIB_per_capita31;}
    else if ( carta2 == 32){ cidadeB = nome_da_cidade32; populacaoB = populacao32; areaB = area32; PIBB = PIB32; densidade_populacionalB = densindade_populacional32; PIB_per_capitaB = PIB_per_capita32;}
    
    // Escolha da propriedade para a comparação
    printf("\nEscolha uma propriedade para comparar:\n");
    printf("1. População\n");
    printf("2. Área(em km²)\n");
    printf("3. PIB(em bilhões)\n");
    printf("4. Densidade populacional\n");
    printf("5. PIB per capita\n");
    scanf("%d", &propriedade);

    //Comparar as propriedades e mostrar quem venceu e os dados das propriedades que foram comparadas.
    if( propriedade == 1){
        if(populacaoA > populacaoB){
            printf("População: %s vence!!! \n", cidadeA);
            printf("A população da primeira carta é : %d E a população da segunda carta é: %d", populacaoA, populacaoB);}
        else{
        printf("População: %s vence!!!\n", cidadeB);
        printf("A população da primeira carta é : %d E a população da segunda carta é: %d", populacaoA, populacaoB);}

    } else if ( propriedade == 2){
        if(areaA > areaB){
        printf("Área(em km²): %s vence!!! \n", cidadeA);
        printf("A área em km² da primeira carta é: %.2f E a da segunda carta é: %.5f\n", areaA, areaB);
        }else{
         printf("Área(em km²): %s vence!!! \n", cidadeB);
         printf("A área em km² da primeira carta é: %.2f E a da segunda carta é: %.5f\n", areaA, areaB);}
        

    } else if ( propriedade == 3){
        if(PIBA > PIBB){
        printf("PIB(em bilhões): %s vence!!! \n", cidadeA);
        printf("O PIB em bilhões da primeira carta é: %.2f E a da segunda carta é : %.2f\n", PIBA, PIBB);
        }else{
        printf("PIB(em bilhões): %s vence!!! \n", cidadeB);
        printf("O PIB em bilhões da primeira carta é: %.2f E a da segunda carta é : %.2f\n", PIBA, PIBB);}

    } else if ( propriedade == 4){
        if(densidade_populacionalA < densidade_populacionalB){
        printf("Densidade populacional: %s vence!!! \n", cidadeA);
        printf("A densidade populacional da primeira carta é : %.2f E a da segunda carta é : %.2f\n", densidade_populacionalA, densidade_populacionalB);
        }else{
        printf("Densidade populacional: %s vence!!! \n", cidadeB);
        printf("A densidade populacional da primeira carta é : %.2f E a da segunda carta é : %.2f\n", densidade_populacionalA, densidade_populacionalB);}

    } else if ( propriedade == 5){
        if(PIB_per_capitaA > PIB_per_capitaB){
        printf("PIB per capita: %s vence!!!\n", cidadeA);
        printf("PIB per capita da primeira carta é : %.2f E a da segunda carta é : %.2f\n", PIB_per_capitaA, PIB_per_capitaB);
        }else{
        printf("PIB per capita: %s vence!!!\n", cidadeB);
        printf("PIB per capita da primeira carta é : %.2f E a da segunda carta é : %.2f\n", PIB_per_capitaA, PIB_per_capitaB);}

    }
 }