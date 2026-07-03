#include <stdio.h>
#include <stdlib.h>

int main() {
    
int escolha = -1;
float Celsius = 0;
float Fahrenheit = 0;
float Kelvin = 0;

while (escolha != 0) {
    printf("O que você deseja fazer? \n [1] Converter de Celsius para Fahrenheit \n [2] Converter de Fahrenheit para Celsius \n ");
    printf("[3] Converter de Celsius para Kelvin \n [4] Converter de Kelvin para Celsius \n ");
    printf("[5] Converter de Fahrenheit para Kelvin \n [6] Converter de Kelvin para Fahrenheit \n [0] Sair \n Insira o valor: ");
    scanf("%d", &escolha);
    printf("\n \n-----------------------------------------------------------------------------------------------------\n \n");
  
    if (escolha == 1 || escolha == 3) {
        printf("Informe o valor em Celsius: \n");
        scanf("%f", &Celsius);
        if (escolha == 1) {
            Fahrenheit = Celsius * 9.0/5.0 + 32;
            printf("A temperatura de %.2f°C representa %.2f°F \n \n", Celsius, Fahrenheit);     
        }
        else {
            Kelvin = Celsius + 273.15;
            printf("A temperatura de %.2f°C representa %.2fK \n \n", Celsius, Kelvin);
        }
    }
    else if (escolha == 2 || escolha == 5) {
        printf("Informe o valor em Fahrenheit: \n");
        scanf("%f", &Fahrenheit);
        if (escolha == 2) {
            Celsius = (Fahrenheit -32)*5.0/9.0;
            printf("A temperatura de %.2f°F representa %.2f°C \n \n", Fahrenheit, Celsius);
        }
        else {
            Kelvin = (Fahrenheit -32)*5.0/9.0 + 273.15;
            printf("A temperatura de %.2f°F representa %.2fK \n \n", Fahrenheit, Kelvin);
        }
    }
    else if (escolha == 4 || escolha == 6) {
        printf("Informe o valor em Kelvin: \n");
        scanf("%f", &Kelvin);
        if (escolha == 4) {
            Celsius = Kelvin - 273.15;
            printf("A temperatura de %.2fK representa %.2f°C \n \n", Kelvin, Celsius);
        }
        else {
            Fahrenheit = (Kelvin - 273.15) * 9.0/5.0 + 32;
            printf("A temperatura de %.2fK representa %.2f°F \n \n", Kelvin, Fahrenheit);
        }
    }
    else if (escolha == 0) {
        break;
    }
    else {
        printf("Valor Inválido \n \n");
    }
}
}
