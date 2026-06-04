#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PAPEL 0
#define TESOURA 1
#define PEDRA 2

void imprimir_jogada(int numero) {
	switch(numero) {
	case 0:
		printf("🧻\n");
		break;
	case 1:
		printf("✂️\n");
		break;
	case 2:
		printf("🪨\n");
		break;
	}
}

int main() {
	srand(time(NULL));
	int vitoriasjogador1 = 0;
	int vitoriasjogador2 = 0;
	int empates = 0;

	for (int i = 0; i<10; i++) {
		int jogador1 = rand()%3;
		int jogador2 = rand()%3;
		//imprimir_jogada(jogador1);
		//imprimir_jogada(jogador2);
		if(jogador1==PAPEL && jogador2 ==PEDRA || jogador1 ==TESOURA && jogador2 == PAPEL || jogador1==PEDRA && jogador2==TESOURA) {
			printf("Jogador 1 venceu!");
			vitoriasjogador1+=1;
		} else if (jogador2==PAPEL && jogador1 ==PEDRA || jogador2 ==TESOURA && jogador1 == PAPEL || jogador2==PEDRA && jogador1==PAPEL) {
			printf("Jogador 2 venceu!");
			vitoriasjogador2+=1;
		} else {
			printf("Os jogadores empataram!");
			empates+=1;
		}
		printf("\n");
	}
	printf("\n\nVitórias do jogador 1: %d\n", vitoriasjogador1);
	printf("Vitórias do jogador 2: %d\n", vitoriasjogador2);
	printf("Empates: %d\n\n", empates);

	if(vitoriasjogador1>vitoriasjogador2) {
		printf("O jogador 1 ganhou com %d vitórias🏆", vitoriasjogador1);
	} else if (vitoriasjogador2>vitoriasjogador1)  {
		printf("O jogador 2 ganhou com %d vitórias🏆", vitoriasjogador2);
	} else {
		printf("Os jogadores empataram ao longo das 10 rodadas");
	}
}


