#include "PILHA_DINAMICA.h"

#include <stdio.h>
#include <stdlib.h>

PilhaDinamica* criar_pilha(int TAMVETDN){

  PilhaDinamica* pilha = malloc(sizeof(PilhaDinamica));
  if (pilha == NULL) {
        return NULL;
    }
  pilha->itens = malloc(TAMVETDN * sizeof(int));
  if (pilha->itens == NULL) {
        free(pilha);
        return NULL;
  }
  pilha->capacidade = TAMVETDN;
  pilha->topo = 0;

  return pilha;
}

void destruir_pilha(PilhaDinamica *pilha){
    free(pilha->itens);
    free(pilha);

}

void TRASFORMAemBINARIO(PilhaDinamica *pilha,int valorDECIMAL){
int COSCIENTE=0;

if(valorDECIMAL == 0) {
  printf("0");
  return;
}

while(valorDECIMAL > 0){
  COSCIENTE = valorDECIMAL % 2;
  valorDECIMAL = valorDECIMAL / 2;

  push(pilha,COSCIENTE);
}
}

void push(PilhaDinamica *pilha, int valor){
if(esta_cheia(pilha)){
int auxTAMVETDN = pilha->capacidade * 2;
int *aux = realloc(pilha->itens,auxTAMVETDN * sizeof(int));

 if(aux == NULL){return;}
  else{

 pilha->capacidade = auxTAMVETDN;
 pilha->itens = aux;
  }
 }
 pilha->itens[pilha->topo] = valor;
 pilha->topo++;
}

int pop(PilhaDinamica *pilha){
int valorBINARIO=0;

pilha->topo--;
valorBINARIO = pilha->itens[pilha->topo];


return valorBINARIO;
}

int peek(PilhaDinamica *pilha){}

int esta_cheia(PilhaDinamica *pilha){
return pilha->topo == pilha->capacidade;
}
