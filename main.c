#include "PILHA_DINAMICA.h"

#include <stdio.h>
#include <stdlib.h>

int main(){
limparTela();
printf("\033[32m");
int valorDECIMAL=0, TAMVETDN=128;
PilhaDinamica *pilha = criar_pilha(TAMVETDN);

int INTENCAO=0;

do{
valorDECIMAL = lerInteiro();
TRASFORMAemBINARIO(pilha,valorDECIMAL);


printf("\n");
while(pilha->topo > 0){
  printf("%d", pop(pilha));
}
printf("\n");

}while(INTENCAO !=5);

destruir_pilha(pilha);
return 0;}


