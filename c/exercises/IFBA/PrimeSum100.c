#include <stdio.h>
#include <unistd.h>

int main(){
    int soma = 0;
    int primeiros = 0;
    for(int i = 1; primeiros<100; i++){
        int total_primo = 0;
        for (int j = 1; j<=i; j++){
            if (i%j == 0) total_primo +=1;
        }
        if (total_primo == 2) {
            soma += i;
            primeiros += 1;
            printf("%d\n", i);
        }
}
printf("%d", soma);
}
