#include <stdio.h>
#include <stdlib.h>

char bit[1000];
int decimal = 0;

int main() {
    printf("Informe o número em binário: ");
    scanf("%s", bit);
    for (int i = 0; bit[i] != '\0' ; i++) {
        decimal = decimal*2 + (bit[i] - '0');
    }
    printf("O seu resultado em decimal é %d.", decimal);
}
