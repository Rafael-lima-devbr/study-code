#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	char * texto = malloc(100 * sizeof(char));
	bool palindromo = true;
	printf("Informe o texto: ");
	fgets(texto, 100, stdin);
	int qnt = 0;

	while (texto[qnt] != '\n') {
		qnt += 1;
	}

	if (qnt%2==0) {
		for (int i=0; i<qnt/2; i++) {
		    if (texto[i] != texto[(qnt-1)-i]){
		        palindromo = false;
		    }
		}
	} else {
	    for (int i=0; i<(qnt-1)/2; i++) {
	        if (texto[i] != texto[(qnt-1)-i]){
		        palindromo = false;
		    }
	    }
	}
	
	if (palindromo) {
	    printf("Esse texto é um palíndromo");
	} else {
	    printf("Esse texto não é um palíndromo");
	}
}
