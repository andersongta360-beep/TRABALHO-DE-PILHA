#include "PILHA_DINAMICA.h"

#include <stdio.h>
#include <stdlib.h>

int main(){
limparTela();
DESENHATERMINAL();
int valorDECIMAL=0, TAMVETDN=4;
PilhaDinamica *pilha = criar_pilha(TAMVETDN);

int INTENCAO=0;

do{

printf("\033[97m");
mensagensErespostas(2);
valorDECIMAL = lerInteiro();

if(valorDECIMAL != 0){

TRASFORMAemBINARIO(pilha,valorDECIMAL);

LIMPARERRO();
LIMPARRESULTADO();

int indice=19;

while(pilha->topo > 0){
  POSICIONARCURSOR(10,indice);printf("\033[92m%d", pop(pilha));
  indice++;
}
printf("\033[0m");
} else if(valorDECIMAL == 0){

LIMPARERRO();
LIMPARRESULTADO();

  POSICIONARCURSOR(10,19); printf("\033[92m0\033[0m");
}

}while(valorDECIMAL != -1);

printf("/n/n");
destruir_pilha(pilha);
return 0;}


