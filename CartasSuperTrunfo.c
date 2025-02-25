#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){

    // Aqui declaramos as variaveis que serão: 
    // Carta 1 como exemplo
    // char Estado: A
    // char Código: 01
    // char Nome da Cidade: ???
    // int População: ????????
    // float Área: ????.?? km²
    // float PIB: ???.?? de reais
    // int Número de Pontos Turísticos: ??
    // float Densidade Populacional: ???
    // float PIB per Capita: R$ ????
    // float Super Poder: ??????

	char estado1, estado2;
    char nomedoestado1[20], nomedoestado2[20];
    char codigo1[4], codigo2[4];
    char nomedacidade1[20], nomedacidade2[20];
    unsigned int populacao1, populacao2;  // Alterei para unsigned int para garantir que o valor seja mantido.
    double area1, area2;  // Precisei alterarrpara double para o valor ser exato
    long double PIB1, PIB2;  // Precisei mudar para long double para o valor ser exato
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapta1, PIBpercapta2;
    long double superpoder1, superpoder2;  // Precisei mudar para long double para o balor ser exato
    int populacaoresultado;  // A partir daqui inseri variáveis para comparação
    int arearesultado;
    int PIBresultado;
    int numerodepontosturisticosresultado;
    int densidadepopulacionalresultado;
    int PIBpercapitaresultado;
    int superpoderresultado;

    //  Aqui solicitaremos o cadastro da carta
    // Todo 'printf' será a solicitação da informação
    // Todo 'scanf' será a entrada de dados

    printf("Vamos cadastrar uma carta !\n");
	printf("Começaremos com a carta 1\n\n");
    printf("____________________\n\n");

    printf("Qual será a letra que representará o grupo do estado? Por exemplo, A do grupo A\n");
        scanf(" %c", &estado1);

    printf("Qual será o nome do estado? Por favor sem acentuação e espaços, exemplo: SP, ou Sao_Paulo\n");
        scanf(" %s", &nomedoestado1);

    printf("Qual o número da carta? Adicione a letra também para atribuí-la ao grupo. Exemplo: A01\n");
        scanf(" %s", &codigo1);

    printf("Qual o nome da cidade? Por favor sem espaços e acentuação\n");
        scanf(" %s", &nomedacidade1);

    printf("Informe a população apenas com números: \n");
        scanf(" %u", &populacao1);  // Alterei de %i para %u agora que é undigned int

    printf("Qual a área? \n");
        scanf(" %lf", &area1);  // alterei para %lf por ser long double

    printf("Qual é o PIB? \n");
        scanf(" %Lf", &PIB1);  // Alterei para %Lf por ser long long double

    printf("Quanrtos pontos turísticos? \n");
        scanf(" %d", &numerodepontosturisticos1);

    densidadepopulacional1 = (double) populacao1 / area1; // Aqui calculamos a Densidade Populacional

    PIBpercapta1 = (long double) PIB1 / populacao1; // Aqui calculamos o PIB per Capita

    superpoder1 = (long double) populacao1 + area1 + PIB1 + numerodepontosturisticos1 + PIBpercapta1 - densidadepopulacional1;

// Aqui exibirei os dados coletados

    printf("____________________\n\n");
    printf("A carta 1 ficou assim: \n\n");
    printf("Esrado grupo: %c\n", estado1);
    printf("Nome do Estado: %s\n", nomedoestado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2Lf\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);  // Adicionada a Densidade Populacional do Nível Aventureiro Tema 1
    printf("PIB per Capita: R$ %.2f\n", PIBpercapta1); // Adicionado o PIB per Capta do Nível Aventureiro Tema 1
    printf("Super Poder: %.2Lf\n\n", superpoder1); // Adicionado "Super Poder" que é a soma dos atributos numéricos com a Densidade Populacional invertida

// Agora coletaremos as informações para a carta 2

	printf("Agora a carta 2\n\n");
    printf("____________________\n\n");

	printf("Qual será a letra que representará o grupo do estado? Por exemplo, A do grupo A\n");
	    scanf(" %c", &estado2);

    printf("Qual será o nome do estado? Por favor sem acentuação e espaços, exemplo: SP, ou Sao_Paulo\n");
        scanf(" %s", &nomedoestado2);

	printf("Qual o número da carta? Adicione a letra também para atribuí-la ao grupo. Exemplo: A01\n");
	    scanf(" %s", &codigo2);

	printf("Qual o nome da cidade? Por favor sem espaços e acentuação\n");
	    scanf(" %s", &nomedacidade2);

	printf("Informe a população apenas com números: \n");
	    scanf(" %u", &populacao2);

	printf("Qual a área? \n");
	    scanf(" %lf", &area2);

	printf("Qual é o PIB? \n");
	    scanf(" %Lf", &PIB2);

	printf("Quanrtos pontos turísticos? \n");
	    scanf(" %d", &numerodepontosturisticos2);

    densidadepopulacional2 = (double) populacao2 / area2;

    PIBpercapta2 = (long double) PIB2 / populacao2;

    superpoder2 = (long double) populacao2 + area2 + PIB2 + numerodepontosturisticos2 + PIBpercapta2 - densidadepopulacional2;

	printf("____________________\n\n");
    printf("A carta 2 ficou assim: \n\n");
    printf("Esrado grupo: %c\n", estado2);
    printf("Nome do Estado: %s\n", nomedoestado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2Lf\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapta2);
    printf("Super Poder: %.2Lf\n\n", superpoder2);

	printf("Pronto, agora vamos comparar as cartas !\n\n");
    printf("__________________________\n\n");
    printf("Quando o resultado for '1', significa que a carta 1 venceu. Porém se for '0' significa que a carta 2 venceu\n\n");

    // Aqui será calculado a diferença das cartas e exibido o resultado como 1 para carta 1 venceu e 0 para carta 2 venceu

    populacaoresultado = populacao1 > populacao2;
    printf("População da carta 1 VS População da carta 2, o vencedor é %d\n", populacaoresultado);
    arearesultado = area1 > area2;
    printf("Área da carta 1 VS Área da carta 2: o vencedor é %d\n", arearesultado);
    PIBresultado = PIB1 > PIB2;
    printf("PIB da carta 1 VS PIB da carta 2: o vencedor é %d\n", PIBresultado);
    numerodepontosturisticosresultado = numerodepontosturisticos1 > numerodepontosturisticos2;
    printf("Número de Pontos Turísticos da carta 1 VS Número de Pontos Turísticos da carta 2: o vencedor é %d\n", numerodepontosturisticosresultado);
    densidadepopulacionalresultado = densidadepopulacional1 < densidadepopulacional2;
    printf("Densidade Populacional da carta 1 VS Densidade Populacional da carta 2: o vencedor é %d\n", densidadepopulacionalresultado);
    PIBpercapitaresultado = PIBpercapta1 > PIBpercapta2;
    printf("PIB per Capita da carta 1 VS PIB per capita da cara 2: o vencedor é %d\n", PIBpercapitaresultado);
    superpoderresultado = superpoder1 > superpoder2;
    printf("Superpoder da carta 1 VS Superpoder da carta 2: o vencedor é %d\n\n", superpoderresultado);

    printf("FIM !\n\n");
    
return 0;

}

// Aqui eu deixei um exemplo para 2 cartas para sempre que for testar as informações
// estão mais práticas, pesquisei em relação a 2022 as informações abaico.

// São Paulo em 2022
// População: 44 420 459 
// Área: 248 219,481 km²
// PIB: 3130333000000
// Número de pontos Turísticos: 36
// Densidade Populacional: 178,96
// PIB per Capita: 70.471,00
// ==============
// Rio de Janeiro em 2022
// População: 16 055 174
// Área: 43 750,425 km²
// PIB: 1153512000000
// Número de pontos Turísticos: 58
// Densidade Populacional: 366,97
// PIB per Capita: 71.850