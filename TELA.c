#include <stdio.h>
#include <stdlib.h>

int lerInteiro(void) {
    int valor;
    while(scanf("%d", &valor) != 1) {
        while(getchar() != '\n');
        printf("DIGITE UM INTEIRO!!");
    }

    while(getchar() != '\n');
    return valor;
}


void limparTela() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls"); // Comando para limpar o terminal no Windows
    #elif defined(__linux__) || defined(__unix__)
        system("clear"); // Comando para limpar o terminal no Linux ou Unix
    #else
        printf("\nErro: Sistema operacional não suportado.\n");
    #endif
}

void POSICIONARCURSOR(int linha,int coluna){
printf("\033[%d;%dH",linha,coluna);
}

void LIMPARLINHA(int linha){
POSICIONARCURSOR(linha,1);
printf("\033[2K");
}

void mensagensErespostas(int mensagens){

if(mensagens == 1){
/*quadro de resposta*/
POSICIONARCURSOR(1,50);
printf("[resposta]: ");
}






}
