#include "PILHA_DINAMICA.h"

#include <stdio.h>
#include <stdlib.h>

int main(){
limparTela();
DESENHATERMINAL();
int valorDECIMAL=0, TAMVETDN=128;
PilhaDinamica *pilha = criar_pilha(TAMVETDN);

int INTENCAO=0;

do{

printf("\033[97m");
mensagensErespostas(2);
valorDECIMAL = lerInteiro();

TRASFORMAemBINARIO(pilha,valorDECIMAL);

LIMPARERRO();
LIMPARRESULTADO();

int indice=19;

while(pilha->topo > 0){
  POSICIONARCURSOR(10,indice);printf("\033[92m%d", pop(pilha));
  indice++;
}

printf("\033[0m");

}while(INTENCAO !=5);

destruir_pilha(pilha);
return 0;}


