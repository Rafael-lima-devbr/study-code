#include <stdio.h>
#include <stdlib.h>

int main() {
    int distancia;
    printf("Digite a distância percorrida: ");
    scanf("%d", &distancia);
    
    if (distancia < 0) {
        printf("Valor inválido para distância");
        return 0;
    } else if (distancia < 11) {
        printf("Sem energia suficiente para sair");
        return 0;
    }
    
    
    distancia -= 3;
    distancia = distancia%8;
    
    if (distancia <3) {
        printf("Sem energia suficiente para sair");
    } else if (distancia == 3) {
        printf("A partícula saí pela saída 1");
    } else if (distancia == 4) {
        printf("A partícula saí pela saída 2"); 
    } else if (distancia == 5) {
        printf("A partícula saí pela saída 3"); 
    } else {
        printf("A distância percorrida é inválida");
        return 1;
    }
    
    return 0;
}
