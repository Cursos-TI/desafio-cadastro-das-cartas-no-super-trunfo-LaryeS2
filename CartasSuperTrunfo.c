#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    char estadoA[10], estadoB[10], estadoC[10], estadoD[10], estadoE[10], estadoF[10], estadoG[10], estadoH[10];


    // Sugestão: Defindas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

   
    //estado A cidades:

char codigo_da_cidadeA_1[5], nomeA_1[30]; int populacaoA_1; float areaA_1, pibA_1; int pontos_turisticosA_1;
char codigo_da_cidadeA_2[5], nomeA_2[30]; int populacaoA_2; float areaA_2, pibA_2; int pontos_turisticosA_2;
char codigo_da_cidadeA_3[5], nomeA_3[30]; int populacaoA_3; float areaA_3, pibA_3; int pontos_turisticosA_3;
char codigo_da_cidadeA_4[5], nomeA_4[30]; int populacaoA_4; float areaA_4, pibA_4; int pontos_turisticosA_4;

//estado B cidades:

char codigo_da_cidadeB_1[5], nomeB_1[30]; int populacaoB_1; float areaB_1, pibB_1; int pontos_turisticosB_1;
char codigo_da_cidadeB_2[5], nomeB_2[30]; int populacaoB_2; float areaB_2, pibB_2; int pontos_turisticosB_2;
char codigo_da_cidadeB_3[4], nomeB_3[30]; int populacaoB_3; float areaB_3, pibB_3; int pontos_turisticosB_3;
char codigo_da_cidadeB_4[4], nomeB_4[30]; int populacaoB_4; float areaB_4, pibB_4; int pontos_turisticosB_4;

//estado C cidades:
    
char codigo_da_cidadeC_1[5], nomeC_1[30]; int populacaoC_1; float areaC_1, pibC_1; int pontos_turisticosC_1;
char codigo_da_cidadeC_2[5], nomeC_2[30]; int populacaoC_2; float areaC_2, pibC_2; int pontos_turisticosC_2;
char codigo_da_cidadeC_3[5], nomeC_3[30]; int populacaoC_3; float areaC_3, pibC_3; int pontos_turisticosC_3;
char codigo_da_cidadeC_4[5], nomeC_4[30]; int populacaoC_4; float areaC_4, pibC_4; int pontos_turisticosC_4;

//estado D cidades:l

char codigo_da_cidadeD_1[5], nomeD_1[30]; int populacaoD_1; float areaD_1, pibD_1; int pontos_turisticosD_1;
char codigo_da_cidadeD_2[5], nomeD_2[30]; int populacaoD_2; float areaD_2, pibD_2; int pontos_turisticosD_2;
char codigo_da_cidadeD_3[5], nomeD_3[30]; int populacaoD_3; float areaD_3, pibD_3; int pontos_turisticosD_3;
char codigo_da_cidadeD_4[5], nomeD_4[30]; int populacaoD_4; float areaD_4, pibD_4; int pontos_turisticosD_4;

//esdatdo E cidades:

char codigo_da_cidadeE_1[5], nomeE_1[30]; int populacaoE_1; float areaE_1, pibE_1; int pontos_turisticosE_1;
char codigo_da_cidadeE_2[5], nomeE_2[30]; int populacaoE_2; float areaE_2, pibE_2; int pontos_turisticosE_2;
char codigo_da_cidadeE_3[5], nomeE_3[30]; int populacaoE_3; float areaE_3, pibE_3; int pontos_turisticosE_3;
char codigo_da_cidadeE_4[5], nomeE_4[30]; int populacaoE_4; float areaE_4, pibE_4; int pontos_turisticosE_4;

//estado F cidades:

char codigo_da_cidadeF_1[5], nomeF_1[30]; int populacaoF_1; float areaF_1, pibF_1; int pontos_turisticosF_1;
char codigo_da_cidadeF_2[5], nomeF_2[30]; int populacaoF_2; float areaF_2, pibF_2; int pontos_turisticosF_2;
char codigo_da_cidadeF_3[5], nomeF_3[30]; int populacaoF_3; float areaF_3, pibF_3; int pontos_turisticosF_3;
char codigo_da_cidadeF_4[5], nomeF_4[30]; int populacaoF_4; float areaF_4, pibF_4; int pontos_turisticosF_4;

//estado G

char codigo_da_cidadeG_1[5], nomeG_1[30]; int populacaoG_1; float areaG_1, pibG_1; int pontos_turisticosG_1;
char codigo_da_cidadeG_2[5], nomeG_2[30]; int populacaoG_2; float areaG_2, pibG_2; int pontos_turisticosG_2;
char codigo_da_cidadeG_3[5], nomeG_3[30]; int populacaoG_3; float areaG_3, pibG_3; int pontos_turisticosG_3;
char codigo_da_cidadeG_4[5], nomeG_4[30]; int populacaoG_4; float areaG_4, pibG_4; int pontos_turisticosG_4;

//estado H

char codigo_da_cidadeH_1[5], nomeH_1[30]; int populacaoH_1; float areaH_1, pibH_1; int pontos_turisticosH_1;
char codigo_da_cidadeH_2[5], nomeH_2[30]; int populacaoH_2; float areaH_2, pibH_2; int pontos_turisticosH_2;
char codigo_da_cidadeH_3[5], nomeH_3[30]; int populacaoH_3; float areaH_3, pibH_3; int pontos_turisticosH_3;
char codigo_da_cidadeH_4[5], nomeH_4[30]; int populacaoH_4; float areaH_4, pibH_4; int pontos_turisticosH_4;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

 //estado A
 printf("Digite o nome do primeiro estado: ");
 scanf("%[^\n]", estadoA);

 printf("Cadastro da primeira cidade do estado %s \n", estadoA);
 printf("Código: "); scanf("%4s", codigo_da_cidadeA_1);
 printf("nome da cidade: "); scanf(" %[^\n]", nomeA_1);
 printf("população: "); scanf("%d", &populacaoA_1);
 printf("Area (em km): "); scanf("%f", &areaA_1);
 printf("PIB (Em bilhões): "); scanf("%f", &pibA_1);
 printf("Número de pontos turisticos: "); scanf("%d", &pontos_turisticosA_1);


printf("Cadastro da segunda cidade do estado %s \n", estadoB);
printf("codigo: "); scanf("%4s", codigo_da_cidadeA_2);
printf("nome da cidade: "); scanf(" %[^\n]", nomeA_2);
printf("população: "); scanf("%d", &populacaoA_2);
printf("Area (em Km): "); scanf("%f", &areaA_2);
printf("PIB (Em bilhões): "); scanf("%f", &pibA_2);
printf("Número de pontos turisticos: "); scanf("%d", &pontos_turisticosA_2);


printf("Cadastro da Terceira Cidade do Estado %s\n", estadoC);
printf("Código: "); scanf("%4s", codigo_da_cidadeA_3);
printf("Nome da cidade: "); scanf(" %[^\n]", nomeA_3);
printf("População: "); scanf("%d", &populacaoA_3);
printf("Área (km²): "); scanf("%f", &areaA_3);
printf("PIB (em bilhões): "); scanf("%f", &pibA_3);
printf("Número de pontos turísticos: "); scanf("%d", &pontos_turisticosA_3);


printf("Cadastro da Quarta Cidade do Estado %s\n", estadoA);
printf("Código: "); scanf("%4s", codigo_da_cidadeA_4);
printf("Nome da cidade: "); scanf(" %[^\n]", nomeA_4);
printf("População: "); scanf("%d", &populacaoA_4);
printf("Área (km²): "); scanf("%f", &areaA_4);
printf("PIB (em bilhões): "); scanf("%f", &pibA_4);
printf("Número de pontos turísticos: "); scanf("%d", &pontos_turisticosA_4);
 


//estado B
printf("Digite o nome do segundo estado: ");
scanf(" %[^\n]", estadoB);

printf("Cadastro da primeira cidade do Estado %s\n", estadoB);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeB_1);
printf("Nome da cidade: "); scanf("%[^\n]", nomeB_1);
printf("população: "); scanf("%d", &populacaoB_1);
printf("Ar(ea (Em km²): "); scanf("%f", &areaB_1);
printf("PIB (Em bilhões): "); scanf("%f", &pibB_1);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosB_1);


printf("Cadastro da segunda cidade do Estado %s\n", estadoB);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeB_2);
printf("Nome da cidade: "); scanf("%[^\n]", nomeB_2);
printf("população: "); scanf("%d", &populacaoB_2);
printf("Area (Em km²): "); scanf("%f", &areaB_2);
printf("PIB (EM bilhões): "); scanf("%f", &pibB_2);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosB_2);


printf("Cadastro da terceira cidade do Estado %s\n", estadoB);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeB_3);
printf("Nome da cidade: "); scanf("%[^\n]", nomeB_3);
printf("Polução: "); scanf("%d", &populacaoB_3);
printf("Area (Em km²): "); scanf("%f", &areaB_3);
printf("PIB (Em bilhões): "); scanf("%f", &pibB_3);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosB_3);


printf("Cadastro da quarta cidade do Estado %s\n", estadoB);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeB_4);
printf("Nome da cidade: "); scanf("%[^\n]", nomeB_4);
printf("População: "); scanf("%d", &populacaoB_4);
printf("Area (Em km²): "); scanf("%f", &areaB_3);
printf("PIB (Em bilhões): "); scanf("%f", &pibB_4);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosB_4);



//Estado C
printf("Digite o nome do terceiro Estado: ");
scanf(" %[^\n]", estadoC); 

printf("Cadastro da primeira cidade do Estado %s\n", estadoC);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeC_1);
printf("Nome da cidade: "); scanf("%[^\n]", nomeC_1);
printf("População: "); scanf("%d", &populacaoC_1);
printf("Area (Em km²): "); scanf("%f", &areaC_1);
printf("PIB (Em bilhões): "); scanf("%f", &pibC_1);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosC_1);


printf("cadastro da segunda cidade do estado %s\n", estadoC);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeC_2);
printf("Nome da cidade: "); scanf("%[^\n]", nomeC_2);
printf("População: "); scanf("%d", &populacaoC_2);
printf("Area (em km): "); scanf("%f", &areaC_2);
printf("PIB (em bilhões): "); scanf("%f", &pibC_2);
printf("Numeros de pontos turisticos: "); scanf("%d", &pontos_turisticosC_2);


printf("Cadastro da terceira cidade do estado %s\n", estadoC);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeC_3);
printf("Nome da cidade: "); scanf("%[^\n])", nomeC_2);
printf("População: "); scanf("%d", &populacaoC_3);
printf("Area (em km): "); scanf("%f", &areaC_3);
printf("PIB (em bilhões): "); scanf("%f", &pibC_3);
printf("Numero de pontos turisticos: "); scanf("%d", &pontos_turisticosC_3);


printf("Cadastro da quarta cidade do estado %s\n", estadoC);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeC_4);
printf("Nome da cidade: "); scanf("%[^\n]", nomeC_4);
printf("População: "); scanf("%d", &populacaoC_4);
printf("Area (em km): "); scanf("%f", &areaC_4);
printf("PIB (em bilhões): "); scanf("%f", &pibC_4);
printf("Número de pontos turisticos: "); scanf("%d", &pontos_turisticosC_4);



//estado D
printf("Digite o nome do Quarto Estado: ");
scanf(" %[^\n]", estadoD); 

printf("Cadastro da primeira cidade do Estado %s\n", estadoD);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeD_1);
printf("Nome da cidade: "); scanf("%[^\n]", nomeD_1);
printf("População: "); scanf("%d", &populacaoD_1);
printf("Area (Em km²): "); scanf("%f", &areaD_1);
printf("PIB (Em bilhões): "); scanf("%f", &pibD_1);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosD_1);


printf("cadastro da segunda cidade do estado %s\n", estadoD);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeD_2);
printf("Nome da cidade: "); scanf("%[^\n]", nomeD_2);
printf("População: "); scanf("%d", &populacaoD_2);
printf("Area (em km): "); scanf("%f", &areaD_2);
printf("PIB (em bilhões): "); scanf("%f", &pibD_2);
printf("Numeros de pontos turisticos: "); scanf("%d", &pontos_turisticosD_2);


printf("Cadastro da terceira cidade do estado %s\n", estadoD);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeD_3);
printf("Nome da cidade: "); scanf("%[^\n])", nomeD_3);
printf("População: "); scanf("%d", &populacaoD_3);
printf("Area (em km): "); scanf("%f", &areaD_3);
printf("PIB (em bilhões): "); scanf("%f", &pibD_3);
printf("Numero de pontos turisticos: "); scanf("%d", &pontos_turisticosD_3);


printf("Cadastro da quarta cidade do estado %s\n", estadoD);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeD_4);
printf("Nome da cidade: "); scanf("%[^\n]", nomeD_4);
printf("População: "); scanf("%d", &populacaoD_4);
printf("Area (em km): "); scanf("%f", &areaD_4);
printf("PIB (em bilhões): "); scanf("%f", &pibD_4);
printf("Número de pontos turisticos: "); scanf("%d", &pontos_turisticosD_4);


//estado E
printf("Digite o nome do quinto Estado: ");
scanf(" %[^\n]", estadoE); 

printf("Cadastro da primeira cidade do Estado %s\n", estadoE);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeE_1);
printf("Nome da cidade: "); scanf("%[^\n]", nomeE_1);
printf("População: "); scanf("%d", &populacaoE_1);
printf("Area (Em km²): "); scanf("%f", &areaE_1);
printf("PIB (Em bilhões): "); scanf("%f", &pibE_1);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosE_1);


printf("cadastro da segunda cidade do estado %s\n", estadoE);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeE_2);
printf("Nome da cidade: "); scanf("%[^\n]", nomeE_2);
printf("População: "); scanf("%d", &populacaoE_2);
printf("Area (em km): "); scanf("%f", &areaE_2);
printf("PIB (em bilhões): "); scanf("%f", &pibE_2);
printf("Numeros de pontos turisticos: "); scanf("%d", &pontos_turisticosE_2);


printf("Cadastro da terceira cidade do estado %s\n", estadoE);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeE_3);
printf("Nome da cidade: "); scanf("%[^\n])", nomeE_3);
printf("População: "); scanf("%d", &populacaoE_3);
printf("Area (em km): "); scanf("%f", &areaE_3);
printf("PIB (em bilhões): "); scanf("%f", &pibE_3);
printf("Numero de pontos turisticos: "); scanf("%d", &pontos_turisticosE_3);


printf("Cadastro da quarta cidade do estado %s\n", estadoE);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeE_4);
printf("Nome da cidade: "); scanf("%[^\n]", nomeE_4);
printf("População: "); scanf("%d", &populacaoE_4);
printf("Area (em km): "); scanf("%d", &areaE_4);
printf("PIB (em bilhões): "); scanf("%f", &pibE_4);
printf("Número de pontos turisticos: "); scanf("%d", &pontos_turisticosE_4);


//estado F
printf("Digite o nome do sexto Estado: ");
scanf(" %[^\n]", estadoF); 

printf("Cadastro da primeira cidade do Estado %s\n", estadoF);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeF_1);
printf("Nome da cidade: "); scanf("%[^\n]", nomeF_1);
printf("População: "); scanf("%d", &populacaoF_1);
printf("Area (Em km²): "); scanf("%f", &areaF_1);
printf("PIB (Em bilhões): "); scanf("%f", &pibF_1);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosF_1);


printf("cadastro da segunda cidade do estado %s\n", estadoF);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeF_2);
printf("Nome da cidade: "); scanf("%[^\n]", nomeF_2);
printf("População: "); scanf("%d", &populacaoF_2);
printf("Area (em km): "); scanf("%f", &areaF_2);
printf("PIB (em bilhões): "); scanf("%f", &pibF_2);
printf("Numeros de pontos turisticos: "); scanf("%d", &pontos_turisticosF_2);


printf("Cadastro da terceira cidade do estado %s\n", estadoF);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeF_3);
printf("Nome da cidade: "); scanf("%[^\n])", nomeF_3);
printf("População: "); scanf("%d", &populacaoF_3);
printf("Area (em km): "); scanf("%f", &areaF_3);
printf("PIB (em bilhões): "); scanf("%f", &pibF_3);
printf("Numero de pontos turisticos: "); scanf("%d", &pontos_turisticosF_3);


printf("Cadastro da quarta cidade do estado %s\n", estadoF);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeF_4);
printf("Nome da cidade: "); scanf("%[^\n]", nomeF_4);
printf("População: "); scanf("%d", &populacaoF_4);
printf("Area (em km): "); scanf("%d", &areaF_4);
printf("PIB (em bilhões): "); scanf("%f", &pibF_4);
printf("Número de pontos turisticos: "); scanf("%d", &pontos_turisticosF_4);



//estado G
printf("Digite o nome do setimo Estado: ");
scanf(" %[^\n]", estadoG); 

printf("Cadastro da primeira cidade do Estado %s\n", estadoG);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeG_1);
printf("Nome da cidade: "); scanf("%[^\n]", nomeG_1);
printf("População: "); scanf("%d", &populacaoG_1);
printf("Area (Em km²): "); scanf("%f", &areaG_1);
printf("PIB (Em bilhões): "); scanf("%f", &pibG_1);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosG_1);


printf("cadastro da segunda cidade do estado %s\n", estadoG);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeG_2);
printf("Nome da cidade: "); scanf("%[^\n]", nomeG_2);
printf("População: "); scanf("%d", &populacaoG_2);
printf("Area (em km): "); scanf("%f", &areaG_2);
printf("PIB (em bilhões): "); scanf("%f", &pibG_2);
printf("Numeros de pontos turisticos: "); scanf("%d", &pontos_turisticosG_2);


printf("Cadastro da terceira cidade do estado %s\n", estadoG);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeG_3);
printf("Nome da cidade: "); scanf("%[^\n])", nomeG_3);
printf("População: "); scanf("%d", &populacaoG_3);
printf("Area (em km): "); scanf("%f", &areaG_3);
printf("PIB (em bilhões): "); scanf("%f", &pibG_3);
printf("Numero de pontos turisticos: "); scanf("%d", &pontos_turisticosG_3);


printf("Cadastro da quarta cidade do estado %s\n", estadoG);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeG_4);
printf("Nome da cidade: "); scanf("%[^\n]", nomeG_4);
printf("População: "); scanf("%d", &populacaoG_4);
printf("Area (em km): "); scanf("%d", &areaG_4);
printf("PIB (em bilhões): "); scanf("%f", &pibG_4);
printf("Número de pontos turisticos: "); scanf("%d", &pontos_turisticosG_4);


//Estado H
printf("Digite o nome do oitavo Estado: ");
scanf(" %[^\n]", estadoH); 

printf("Cadastro da primeira cidade do Estado %s\n", estadoH);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeH_1);
printf("Nome da cidade: "); scanf("%[^\n]", nomeH_1);
printf("População: "); scanf("%d", &populacaoH_1);
printf("Area (Em km²): "); scanf("%f", &areaH_1);
printf("PIB (Em bilhões): "); scanf("%f", &pibH_1);
printf("Números de pontos turisticos: "); scanf("%d", &pontos_turisticosH_1);


printf("cadastro da segunda cidade do estado %s\n", estadoH);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeH_2);
printf("Nome da cidade: "); scanf("%[^\n]", nomeH_2);
printf("População: "); scanf("%d", &populacaoH_2);
printf("Area (em km): "); scanf("%f", &areaH_2);
printf("PIB (em bilhões): "); scanf("%f", &pibH_2);
printf("Numeros de pontos turisticos: "); scanf("%d", &pontos_turisticosH_2);


printf("Cadastro da terceira cidade do estado %s\n", estadoH);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeH_3);
printf("Nome da cidade: "); scanf("%[^\n])", nomeH_3);
printf("População: "); scanf("%d", &populacaoH_3);
printf("Area (em km): "); scanf("%f", &areaH_3);
printf("PIB (em bilhões): "); scanf("%f", &pibH_3);
printf("Numero de pontos turisticos: "); scanf("%d", &pontos_turisticosH_3);


printf("Cadastro da quarta cidade do estado %s\n", estadoH);
printf("Codigo: "); scanf("%4s", codigo_da_cidadeH_4);
printf("Nome da cidade: "); scanf("%[^\n]", nomeH_4);
printf("População: "); scanf("%d", &populacaoH_4);
printf("Area (em km): "); scanf("%d", &areaH_4);
printf("PIB (em bilhões): "); scanf("%f", &pibH_4);
printf("Número de pontos turisticos: "); scanf("%d", &pontos_turisticosH_4);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

printf("Dados Cadastrados\n");
//Estado A:
 printf("Estado: %s\n", estadoA);
    printf("Cidade 1: %s - %s\n", codigo_da_cidadeA_1, nomeA_1);
    printf("População: %d habitantes\n", populacaoA_1);
    printf("Área: %.2f km²\n", areaA_1);
    printf("PIB: R$ %.2f bilhões\n", pibA_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosA_1);

    printf("Cidade 2: %s - %s\n", codigo_da_cidadeA_2, nomeA_2);
    printf("População: %d habitantes\n", populacaoA_2);
    printf("Área: %.2f km²\n", areaA_2);
    printf("PIB: R$ %.2f bilhões\n", pibA_2);
    printf("Pontos turísticos: %d\n", pontos_turisticosA_2);

    printf("Cidade 3: %s - %s\n", codigo_da_cidadeA_3, nomeA_3);
    printf("População: %d habitantes\n", populacaoA_3);
    printf("Área: %.2f km²\n", areaA_3);
    printf("PIB: R$ %.2f bilhões\n", pibA_3);
    printf("Pontos turísticos: %d\n", pontos_turisticosA_3);

    printf("Cidade 4: %s - %s\n", codigo_da_cidadeA_4, nomeA_4);
    printf("População: %d habitantes\n", populacaoA_4);
    printf("Área: %.2f km²\n", areaA_4);
    printf("PIB: R$ %.2f bilhões\n", pibA_4);
    printf("Pontos turísticos: %d\n", pontos_turisticosA_4);


//estado B:
printf("Estado: %s\n", estadoB);
    printf("Cidade 1: %s - %s\n", codigo_da_cidadeB_1, nomeB_1);
    printf("População: %d habitantes\n", populacaoB_1);
    printf("Área: %.2f km²\n", areaB_1);
    printf("PIB: R$ %.2f bilhões\n", pibB_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosB_1);

    printf("Cidade 2: %s - %s\n", codigo_da_cidadeB_2, nomeB_2);
    printf("População: %d habitantes\n", populacaoB_2);
    printf("Área: %.2f km²\n", areaB_2);
    printf("PIB: R$ %.2f bilhões\n", pibB_2);
    printf("Pontos turísticos: %d\n", pontos_turisticosB_2);

    printf("Cidade 3: %s - %s\n", codigo_da_cidadeB_3, nomeB_3);
    printf("População: %d habitantes\n", populacaoB_3);
    printf("Área: %.2f km²\n", areaB_3);
    printf("PIB: R$ %.2f bilhões\n", pibB_3);
    printf("Pontos turísticos: %d\n", pontos_turisticosB_3);

    printf("Cidade 4: %s - %s\n", codigo_da_cidadeB_4, nomeB_4);
    printf("População: %d habitantes\n", populacaoB_4);
    printf("Área: %.2f km²\n", areaB_4);
    printf("PIB: R$ %.2f bilhões\n", pibB_4);
    printf("Pontos turísticos: %d\n", pontos_turisticosB_4);
 
//ESTADO C
printf("Estado: %s\n", estadoC);
    printf("Cidade 1: %s - %s\n", codigo_da_cidadeC_1, nomeC_1);
    printf("População: %d habitantes\n", populacaoC_1);
    printf("Área: %.2f km²\n", areaC_1);
    printf("PIB: R$ %.2f bilhões\n", pibC_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosC_1);

    printf("Cidade 2: %s - %s\n", codigo_da_cidadeC_2, nomeC_2);
    printf("População: %d habitantes\n", populacaoC_2);
    printf("Área: %.2f km²\n", areaC_2);
    printf("PIB: R$ %.2f bilhões\n", pibC_2);
    printf("Pontos turísticos: %d\n", pontos_turisticosC_2);

    printf("Cidade 3: %s - %s\n", codigo_da_cidadeC_3, nomeC_3);
    printf("População: %d habitantes\n", populacaoC_3);
    printf("Área: %.2f km²\n", areaC_3);
    printf("PIB: R$ %.2f bilhões\n", pibC_3);
    printf("Pontos turísticos: %d\n", pontos_turisticosC_3);

    printf("Cidade 4: %s - %s\n", codigo_da_cidadeC_4, nomeC_4);
    printf("População: %d habitantes\n", populacaoC_4);
    printf("Área: %.2f km²\n", areaC_4);
    printf("PIB: R$ %.2f bilhões\n", pibC_4);
    printf("Pontos turísticos: %d\n", pontos_turisticosC_4);

    //ESTADO D
    printf("Estado: %s\n", estadoD);
    printf("Cidade 1: %s - %s\n", codigo_da_cidadeD_1, nomeD_1);
    printf("População: %d habitantes\n", populacaoD_1);
    printf("Área: %.2f km²\n", areaD_1);
    printf("PIB: R$ %.2f bilhões\n", pibD_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosD_1);

    printf("Cidade 2: %s - %s\n", codigo_da_cidadeD_2, nomeD_2);
    printf("População: %d habitantes\n", populacaoD_2);
    printf("Área: %.2f km²\n", areaD_2);
    printf("PIB: R$ %.2f bilhões\n", pibD_2);
    printf("Pontos turísticos: %d\n", pontos_turisticosD_2);

    printf("Cidade 3: %s - %s\n", codigo_da_cidadeD_3, nomeD_3);
    printf("População: %d habitantes\n", populacaoD_3);
    printf("Área: %.2f km²\n", areaD_3);
    printf("PIB: R$ %.2f bilhões\n", pibD_3);
    printf("Pontos turísticos: %d\n", pontos_turisticosD_3);

    printf("Cidade 4: %s - %s\n", codigo_da_cidadeD_4, nomeD_4);
    printf("População: %d habitantes\n", populacaoD_4);
    printf("Área: %.2f km²\n", areaD_4);
    printf("PIB: R$ %.2f bilhões\n", pibD_4);
    printf("Pontos turísticos: %d\n", pontos_turisticosD_4);

    //ESTADO E:
printf("Estado: %s\n", estadoE);
    printf("Cidade 1: %s - %s\n", codigo_da_cidadeE_1, nomeE_1);
    printf("População: %d habitantes\n", populacaoE_1);
    printf("Área: %.2f km²\n", areaE_1);
    printf("PIB: R$ %.2f bilhões\n", pibE_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosE_1);

    printf("Cidade 2: %s - %s\n", codigo_da_cidadeE_2, nomeE_2);
    printf("População: %d habitantes\n", populacaoE_2);
    printf("Área: %.2f km²\n", areaE_2);
    printf("PIB: R$ %.2f bilhões\n", pibE_2);
    printf("Pontos turísticos: %d\n", pontos_turisticosE_2);

    printf("Cidade 3: %s - %s\n", codigo_da_cidadeE_3, nomeE_3);
    printf("População: %d habitantes\n", populacaoE_3);
    printf("Área: %.2f km²\n", areaE_3);
    printf("PIB: R$ %.2f bilhões\n", pibE_3);
    printf("Pontos turísticos: %d\n", pontos_turisticosE_3);

    printf("Cidade 4: %s - %s\n", codigo_da_cidadeE_4, nomeE_4);
    printf("População: %d habitantes\n", populacaoE_4);
    printf("Área: %.2f km²\n", areaE_4);
    printf("PIB: R$ %.2f bilhões\n", pibE_4);
    printf("Pontos turísticos: %d\n", pontos_turisticosE_4);    

//ESTADO F:
printf("Estado: %s\n", estadoF);
    printf("Cidade 1: %s - %s\n", codigo_da_cidadeF_1, nomeF_1);
    printf("População: %d habitantes\n", populacaoF_1);
    printf("Área: %.2f km²\n", areaF_1);
    printf("PIB: R$ %.2f bilhões\n", pibF_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosF_1);

    printf("Cidade 2: %s - %s\n", codigo_da_cidadeF_2, nomeF_2);
    printf("População: %d habitantes\n", populacaoF_2);
    printf("Área: %.2f km²\n", areaF_2);
    printf("PIB: R$ %.2f bilhões\n", pibF_2);
    printf("Pontos turísticos: %d\n", pontos_turisticosF_2);

    printf("Cidade 3: %s - %s\n", codigo_da_cidadeF_3, nomeF_3);
    printf("População: %d habitantes\n", populacaoF_3);
    printf("Área: %.2f km²\n", areaF_3);
    printf("PIB: R$ %.2f bilhões\n", pibF_3);
    printf("Pontos turísticos: %d\n", pontos_turisticosF_3);

    printf("Cidade 4: %s - %s\n", codigo_da_cidadeF_4, nomeF_4);
    printf("População: %d habitantes\n", populacaoF_4);
    printf("Área: %.2f km²\n", areaF_4);
    printf("PIB: R$ %.2f bilhões\n", pibF_4);
    printf("Pontos turísticos: %d\n", pontos_turisticosF_4);

//ESTADO G
printf("Estado: %s\n", estadoG);
    printf("Cidade 1: %s - %s\n", codigo_da_cidadeG_1, nomeG_1);
    printf("População: %d habitantes\n", populacaoG_1);
    printf("Área: %.2f km²\n", areaG_1);
    printf("PIB: R$ %.2f bilhões\n", pibG_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosG_1);

    printf("Cidade 2: %s - %s\n", codigo_da_cidadeG_2, nomeG_2);
    printf("População: %d habitantes\n", populacaoG_2);
    printf("Área: %.2f km²\n", areaG_2);
    printf("PIB: R$ %.2f bilhões\n", pibG_2);
    printf("Pontos turísticos: %d\n", pontos_turisticosG_2);

    printf("Cidade 3: %s - %s\n", codigo_da_cidadeG_3, nomeG_3);
    printf("População: %d habitantes\n", populacaoG_3);
    printf("Área: %.2f km²\n", areaG_3);
    printf("PIB: R$ %.2f bilhões\n", pibG_3);
    printf("Pontos turísticos: %d\n", pontos_turisticosG_3);

    printf("Cidade 4: %s - %s\n", codigo_da_cidadeG_4, nomeG_4);
    printf("População: %d habitantes\n", populacaoG_4);
    printf("Área: %.2f km²\n", areaG_4);
    printf("PIB: R$ %.2f bilhões\n", pibG_4);
    printf("Pontos turísticos: %d\n", pontos_turisticosG_4);

//ESTADO H:
printf("Estado: %s\n", estadoH);
    printf("Cidade 1: %s - %s\n", codigo_da_cidadeH_1, nomeH_1);
    printf("População: %d habitantes\n", populacaoH_1);
    printf("Área: %.2f km²\n", areaH_1);
    printf("PIB: R$ %.2f bilhões\n", pibH_1);
    printf("Pontos turísticos: %d\n", pontos_turisticosH_1);

    printf("Cidade 2: %s - %s\n", codigo_da_cidadeH_2, nomeH_2);
    printf("População: %d habitantes\n", populacaoH_2);
    printf("Área: %.2f km²\n", areaH_2);
    printf("PIB: R$ %.2f bilhões\n", pibH_2);
    printf("Pontos turísticos: %d\n", pontos_turisticosH_2);

    printf("Cidade 3: %s - %s\n", codigo_da_cidadeH_3, nomeH_3);
    printf("População: %d habitantes\n", populacaoH_3);
    printf("Área: %.2f km²\n", areaH_3);
    printf("PIB: R$ %.2f bilhões\n", pibH_3);
    printf("Pontos turísticos: %d\n", pontos_turisticosH_3);

    printf("Cidade 4: %s - %s\n", codigo_da_cidadeH_4, nomeH_4);
    printf("População: %d habitantes\n", populacaoH_4);
    printf("Área: %.2f km²\n", areaH_4);
    printf("PIB: R$ %.2f bilhões\n", pibH_4);
    printf("Pontos turísticos: %d\n", pontos_turisticosH_4);







    
}











