#ifndef PILHA_DINAMICA_H_INCLUDED
#define PILHA_DINAMICA_H_INCLUDED

#include "TELA.h"

typedef struct {
  int *itens;
  int topo;
  int capacidade;
}PilhaDinamica;

PilhaDinamica* criar_pilha(int TAMVETDN);

void destruir_pilha(PilhaDinamica *pilha);

void TRASFORMAemBINARIO(PilhaDinamica *pilha,int valorDECIMAL);

void push(PilhaDinamica *pilha, int valor);

int pop(PilhaDinamica *pilha);

int peek(PilhaDinamica *pilha);

int esta_cheia(PilhaDinamica *pilha);










#endif // PILHA_DINAMICA_H_INCLUDED
