#include "PILHA_DINAMICA.h"

int main(){
setlocale(LC_ALL, "Portuguese");
limparTela();
int valorDECIMAL=0, /**/TAMVETDN=4;/**/
PilhaDinamica *pilha = criar_pilha(TAMVETDN);

int INTENCAO=0;

do{
printf("\033[92m");
valorDECIMAL = lerInteiro();
TRASFORMAemBINARIO(pilha,valorDECIMAL);

  printf("\033[92m");
  printf("DECIMAL INFORMADO: %d\n\n",valorDECIMAL);
  printf("RESULTADO EM BINÁRIO: ");
while(pilha->topo > 0){
  printf("%d", pop(pilha));
}
printf("\n\n");


}while(INTENCAO !=5);

printf("\033[0m");
destruir_pilha(pilha);
return 0;}


