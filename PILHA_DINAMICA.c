#include "PILHA_DINAMICA.h"

#include <stdio.h>
#include <stdlib.h>

PilhaDinamica* criar_pilha(int capacidade_inicial){}

void destruir_pilha(PilhaDinamica *PILHA){free(PILHA);}


/*A função push é fundamental neste trabalho. Ela deve verificar se a pilha está cheia
antes de inserir um novo elemento.
• Se estiver cheia, a função deve dobrar a capacidade do vetor itens usando
realloc.
• Importante: Implemente o padrão de segurança do realloc, usando um
ponteiro temporário para não perder a referência do vetor original em caso
de falha na realocação.*/

void push(PilhaDinamica **PILHA, int *capacidade_total, int valor){}

int pop(PilhaDinamica *PILHA){}

int peek(PilhaDinamica *PILHA){}

int esta_vazia_cheia(PilhaDinamica *PILHA,int *capacidade_total){}
