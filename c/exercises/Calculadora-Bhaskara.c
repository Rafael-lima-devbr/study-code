#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b, c, delta;
float x1, x2;

int main() { 
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    printf("Insira o valor de c: ");
    scanf("%d", &c);
    delta = pow(b, 2) - 4*a*c;
    x1= (-b+sqrt(delta))/(2*a);
    x2= (-b-sqrt(delta))/(2*a);
    if (delta > 0) {
        printf("O resultado da equação é x'= %.0f e x'' = %.0f ", x1, x2);
    } if (delta == 0){
       printf("O resultado da equação é x= %.0f ", x1); 
    } if (delta < 0) {
    printf("A equação não possui raízes reais");
    }
}
