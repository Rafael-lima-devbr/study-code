#include <stdio.h>
#include <stdlib.h>

// funções
float serie();
float paralelo();


int main() {
	float Resistencia_final;
	int opcao;
	int n;

	//Recebe os valores e os valida
	printf("Quantos resistores deseja calcular? ");
	scanf("%d", &n);
	float resistores[n];

	for (int i = 0; i<n ; i++) {
		printf("Informe a resistência do resistor %d: ", i+1);
		if (scanf("%f", &resistores[i]) != 1 || resistores[i] <0) {
			printf("Caractere inserido é inválido. Verifique se está no formato esperado ou se o número possui números negativos");
			exit(1);
		}
	}


	// Escolhe o tipo de circuito
	printf("O circuito está em \n 1- Série \n 2- Paralelo \n");
	if (scanf("%d", &opcao) != 1 || opcao != 1 && opcao != 2) {
		printf("Caractere inserido é inválido");
		exit(1);
	}

	// Calcula baseado na escolha
	if (opcao == 1) {
		Resistencia_final = serie(resistores, n);
	} else {
		Resistencia_final = paralelo(resistores, n);
	}

	// Mostra o resultado
	printf("O valor da resistência final é %.2fΩ", Resistencia_final);

	return 0;
}

float serie(float resistores[], int n) { //Cálculo em Série
	float total = 0;
	for (int i = 0; i<n; i++) {
		total+= resistores[i];
	}
	return total;
}

float paralelo(float resistores[], int n) { //Cálculo em Paralelo
	float total = 0;
	float soma_paralelo = 0;
	for (int i = 0; i<n; i++) {
		total+= resistores[i];
	}
	if (total == 0) {
		printf("O valor da resistência é 0");
		exit(0);
	} else {
		for (int i = 0; i<n; i++) {
			soma_paralelo+= 1.0/resistores[i];
		}
		return 1.0/soma_paralelo;
	}
}
