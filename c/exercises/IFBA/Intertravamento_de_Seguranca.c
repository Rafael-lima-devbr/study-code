/*
Include adiciona bibliotecas ao código, sendo o stdio uma biblioteca de entrada
e saída de dados, e o stdlib uma para operações de relacionadas à memória */
#include <stdio.h>
#include <stdlib.h>

/* 
S representa o sensor de presença
E representa o botão de emergência
A representa o botão de acionamento 
*/
int S, E, A;

int main()
{
// Recebe os estados do sensor e dos botões, dizendo se há um acionamento/leitura ou não  
printf("1 - True \n0 - False\n");
printf("Insira a leitura do estado do sensor de presença: ");
scanf("%d", &S);
printf("Insira a leitura do estado do botão de emergência: ");
scanf("%d", &E);
printf("Insira a leitura do estado do botão de acionamento: ");
scanf("%d", &A);

//Valida o valor inserido para os estados pelo usuário 
if (S!=1 && S!=0 || E!=1 && E!=0 || A!=1 && A!=0) {
printf("Error: Valor inserido para um dos estados não está no formato esperado");
return 1;
}

// Aplica a estrutura de condicionais para as leituras recebidas
    if (E==1){
        printf("ERRO: Emergência Ativada - Sistema Bloqueado");
        //Se Botão de Emergência foi ativado, causa erro e bloqueia o sistema
        
    } else if (E==0 && S==1) {
        printf("ERRO: Zona de Risco Ocupado - Operacao Negada");
        //Se Sensor de presença ler algo, nega a operação por ser em zona de risco
        
    } else if (E==0 && S==0 && A==1) {
        printf("Prensa Ativada - Operacao Segura");
        //Se Botão de Acionamento foi ativado e todos os outros estão desativados, prensa ativa
        
    } else {
        printf("Aguardando Acionamento");
        //Se não há nenhuma leitura ou nenhuma ativação, o código aguarda acionamento
    }
}
