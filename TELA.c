#include <stdio.h>
#include <stdlib.h>

#include "TELA.h"

int lerInteiro(void) {
    int valor;
    while(scanf("%d", &valor) != 1) {
        while(getchar() != '\n');
        mensagensErespostas(3);
    }

    while(getchar() != '\n');
    return valor;
}


void limparTela(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls"); // Comando para limpar o terminal no Windows
    #elif defined(__linux__) || defined(__unix__)
        system("clear"); // Comando para limpar o terminal no Linux ou Unix
    #else
        printf("\nErro: Sistema operacional não suportado.\n");
    #endif
}

void DESENHATERMINAL(void){
for(int i=1; i<200; i++){POSICIONARCURSOR(1,i); printf("\033[105m \033[0m");}
for(int i=1; i<200; i++){POSICIONARCURSOR(35,i); printf("\033[105m \033[0m");}
}

void POSICIONARCURSOR(int linha,int coluna){
printf("\033[97m");printf("\033[%d;%dH",linha,coluna);
}

void LIMPARLINHA(int linha,int coluna){
POSICIONARCURSOR(linha,coluna);
printf("\033[K");
}

void TROCAPERGUNTA(void){
LIMPARLINHA(4,6);
}

void LIMPARESPOSTA(void){
LIMPARLINHA(6,18);
}

void LIMPARERRO(void){
LIMPARLINHA(8,18);
}

void LIMPARRESULTADO(void){
LIMPARLINHA(10,18);
}

void mensagensErespostas(int mensagens){

if(mensagens == 1){
LIMPARESPOSTA();
POSICIONARCURSOR(6,6);
printf("[resposta]: ");
POSICIONARCURSOR(8,6);
printf("[erro]: ");
POSICIONARCURSOR(10,6);
printf("[resultado]: ");
POSICIONARCURSOR(6,18);
}
else if(mensagens == 2){
TROCAPERGUNTA();
POSICIONARCURSOR(4,6); printf("[pergunta]: DIGITE UM VALOR INTEIRO : ");
mensagensErespostas(1);
}

else if(mensagens == 3){
POSICIONARCURSOR(8,18); printf("\033[91mDIGITE UM INTEIRO!!\033[0m");
POSICIONARCURSOR(6,18); LIMPARESPOSTA();
}
}
