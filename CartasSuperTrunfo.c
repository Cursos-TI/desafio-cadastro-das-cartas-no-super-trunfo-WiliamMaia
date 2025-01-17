#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

	char identificacao[3];
	char cidade[20];
	int pontosturisticos, area;
	float populacao;
	double PIB;

    printf("Vamos cadastrar uma carta!\n\n");

	printf("Digite o código da carta, por exemplo 'A01': \n");
	scanf("%s", &identificacao);

	printf("Digite o nome da Cidade: \n");
	scanf("%s", &cidade);

	printf("Digite a população: \n");
	scanf("%f", &populacao);

	printf("Digite a área: \n");
	scanf("%d", &area);

	printf("Digite o PIB: \n");
	scanf("%f", &PIB);

	printf("Quantos ponros turísticos?: \n");
	scanf("%d", &pontosturisticos);

	printf("Carta criada!\n\n");

	printf("Carta: %s\n", identificacao);
	printf("Cidade: %s\n", cidade);
	printf("População: %.2f\n", populacao);
	printf("Área: %d\n", area);
	printf("PIB: %f\n", PIB);
	printf("Pontos Turísticos: %d\n", pontosturisticos);

    return 0;
}
