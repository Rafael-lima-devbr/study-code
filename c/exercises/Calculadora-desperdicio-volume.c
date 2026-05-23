#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float raio;
float pi = 3.14159265;
float volume_final,volume_inicial, volume_desperdicado, comprimento;

int main() {
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    printf("Insira o valor do comprimento: ");
    scanf("%f", &comprimento);
    volume_inicial = pi*pow(raio, 2)*comprimento;
    volume_final = pow(raio, 2)*2*comprimento;
    volume_desperdicado = volume_inicial - volume_final;
    printf("O volume inicial é %.2f cm³ \n O volume final é %.2f cm³ \n", volume_inicial, volume_final);
    printf("O volume desperdiçado é %.2f cm³", volume_desperdicado);
}
