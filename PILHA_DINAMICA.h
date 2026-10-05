#ifndef PILHA_DINAMICA_H_INCLUDED
#define PILHA_DINAMICA_H_INCLUDED

#include "TELA.h"

typedef struct {
  int *itens;
  int topo;
  int capacidade;
}PilhaDinamica;

PilhaDinamica* criar_pilha(int capacidade_inicial);

void destruir_pilha(PilhaDinamica *PILHA);

void push(PilhaDinamica **PILHA, int *capacidade_total, int valor);

int pop(PilhaDinamica *PILHA);

int peek(PilhaDinamica *PILHA);

int esta_vazia_cheia(PilhaDinamica *PILHA,int *capacidade_total);










#endif // PILHA_DINAMICA_H_INCLUDED
