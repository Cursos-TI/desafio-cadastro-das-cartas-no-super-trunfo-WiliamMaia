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

	char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomedacidade1[20], nomedacidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapta1, PIBpercapta2;

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
        scanf(" %d", &populacao1);

    printf("Qual a àrea? \n");
        scanf(" %f", &area1);

    printf("Qual é o PIB? \n");
        scanf(" %f", &PIB1);

    printf("Quanrtos pontos turísticos? \n");
        scanf(" %d", &numerodepontosturisticos1);

    densidadepopulacional1 = (float) populacao1 / area1; // Aqui calculamos a Densidade Populacional

    PIBpercapta1 = (float) PIB1 / populacao1; // Aqui calculamos o PIB per Capita

// Aqui exibirei os dados coletados

	printf("____________________\n\n");
    printf("A carta 1 ficou assim: \n\n");
    printf("Esrado grupo: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);  // Adicionada a Densidade Populacional do Nível Aventureiro Tema 1
    printf("PIB per Capita: R$ %.2f\n\n", PIBpercapta1); // Adicionado o PIB per Capta do Nível Aventureiro Tema 1

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
	scanf(" %d", &populacao2);

	printf("Qual a àrea? \n");
	scanf(" %f", &area2);

	printf("Qual é o PIB? \n");
	scanf(" %f", &PIB2);

	printf("Quanrtos pontos turísticos? \n");
	scanf(" %d", &numerodepontosturisticos2);

    densidadepopulacional2 = (float) populacao2 / area2;

    PIBpercapta2 = (float) PIB2 / populacao2;

	printf("____________________\n\n");
    printf("A carta 2 ficou assim: \n\n");
    printf("Esrado grupo: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2f\n\n", PIBpercapta2);

	printf("Pronto !\n");

return 0;

}
