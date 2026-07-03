#include <stdio.h>
#include <stdlib.h>

int main() {
	int numero = 0;
	int resto = 0;
	int resultado_invertido[32];
	int resultado[32];
	int contador1 = 0;
	int contador2 = 0;
	printf("Escreva um número em decimal: ");
	scanf("%d",&numero);
	while(numero != 0) {
		resto = numero%2;
		numero = numero/2;
		resultado_invertido[contador1] = resto;
		contador1 += 1;
	}
	for(int i = contador1-1; i>=0; i--) {
		printf("%d", resultado_invertido[i]);
		resultado[contador2] = resultado_invertido[i];
		contador2 += 1;
	}
	printf("\n");
	for(int i = contador2 -1; i>=0; i--) {
		if (resultado[i] != resultado_invertido[i]) {
			printf("O número não é um palíndromo");
			exit (0);
		}
	}
	printf("O número é um palíndromo");
}
