#include <stdio.h>
#include <stdlib.h>

int main() {
	int dia, mes, ano;
	printf("Digite a data: ");
	scanf("%d %d %d", &dia, &mes, &ano);
	
	printf("Dia atual: ");
    if (mes < 10 && dia < 10) {
        printf("0%d/0%d/%d \n", dia, mes ,ano);
    } else if (mes < 10) {
        printf("%d/0%d/%d \n", dia, mes ,ano);
    } else if (dia < 10) {
        printf("0%d/%d/%d \n ", dia, mes ,ano);
    } else {
        printf("%d/%d/%d \n", dia, mes ,ano);
    }
    
    if (ano%4==0){
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){ //31 dias
            if (dia == 31 && mes == 12) {
                dia = 1;
                mes = 1;
                ano ++;
            } else if (dia == 31) {
                dia = 1;
                mes ++;
            } else {
                dia ++;
            }
        } else if (mes == 2) { // 29 dias
            if (dia == 29) {
                dia = 1;
                mes ++;
            } else {
                dia ++;
            }
        } else { // 30 dias
            if (dia == 30) {
                dia = 1;
                mes ++;
            } else {
                dia ++;
            }
        }
    } else {
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){ //31 dias
            if (dia == 31 && mes == 12) {
                dia = 1;
                mes = 1;
                ano ++;
            } else if (dia == 31) {
                dia = 1;
                mes ++;
            } else {
                dia ++; 
            }
        } else if (mes == 2) { // 28 dias
            if (dia == 28) {
                dia = 1;
                mes ++;
            } else {
                dia ++;
            }
        } else { // 30 dias
            if (dia == 30) {
                dia = 1;
                mes ++;
            } else {
                dia ++;
            }    
        }
    }
    
    printf("Dia seguinte: ");
    if (mes < 10 && dia < 10) {
        printf("0%d/0%d/%d", dia, mes ,ano);
    } else if (mes < 10) {
        printf("%d/0%d/%d", dia, mes ,ano);
    } else if (dia < 10) {
        printf("0%d/%d/%d", dia, mes ,ano);
    } else {
        printf("%d/%d/%d", dia, mes ,ano);
    }
    

}
