#include "PILHA_DINAMICA.h"



int main(){
/**/limparTela();/**/
int valorDECIMAL=0, TAMVETDN=8;
PilhaDinamica *pilha = criar_pilha(TAMVETDN);

/**/POSICIONARCURSOR(1,1);/**/ printf("[pergunta]:DIGITE UM VALOR INTEIRO: "); /**/mensagensErespostas(1);/**/
valorDECIMAL = lerInteiro();

TRASFORMAemBINARIO(pilha,valorDECIMAL);

while(pilha->topo > 0) {
  printf("%d", pop(pilha));
}
destruir_pilha(pilha);
return 0;}


