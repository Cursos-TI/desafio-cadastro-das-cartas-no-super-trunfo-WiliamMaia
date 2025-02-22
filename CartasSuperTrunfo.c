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
    char codigo1[4], codigo2[4];
    char nomedacidade1[20], nomedacidade2[20];
    unsigned int populacao1, populacao2;  // Alterei para unsigned int para garantir que o valor seja mantido.
    double area1, area2;  // Precisei alterarrpara double para o valor ser exato
    long double PIB1, PIB2;  // Precisei mudar para long double para o valor ser exato
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapta1, PIBpercapta2;
    long double superpoder1, superpoder2;  // Precisei mudar para long double para o balor ser exato

    //  Aqui solicitaremos o cadastro da carta
    // Todo 'printf' será a solicitação da informação
    // Todo 'scanf' será a entrada de dados

    printf("Vamos cadastrar uma carta !\n");
	printf("Começaremos com a carta 1\n\n");
    printf("____________________\n\n");

    printf("Qual será a letra que representará o grupo do estado? Por exemplo, A do grupo A\n");
        scanf(" %c", &estado1);

    printf("Qual o número da carta? Adicione a letra também para atribuí-la ao grupo. Exemplo: A01\n");
        scanf(" %s", &codigo1);

    printf("Qual o nome da cidade? Por favor sem espaços e acentuação\n");
        scanf(" %s", &nomedacidade1);

    printf("Informe a população apenas com números: \n");
        scanf(" %u", &populacao1);  // Alterei de %i para %u agora que é undigned int

    printf("Qual a àrea? \n");
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

	printf("Qual o número da carta? Adicione a letra também para atribuí-la ao grupo. Exemplo: A01\n");
	scanf(" %s", &codigo2);

	printf("Qual o nome da cidade? Por favor sem espaços e acentuação\n");
	scanf(" %s", &nomedacidade2);

	printf("Informe a população apenas com números: \n");
	scanf(" %u", &populacao2);

	printf("Qual a àrea? \n");
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
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2Lf\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapta2);
    printf("Super Poder: %.2Lf\n\n", superpoder2);

	printf("Pronto !\n");

return 0;

}
