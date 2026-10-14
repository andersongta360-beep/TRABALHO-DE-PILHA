#include "PILHA_DINAMICA.h"

int main(){
setlocale(LC_ALL, "Portuguese");
limparTela();
int valor_decimal=0, /**/TAMVETDN=4;/**/

PilhaDinamica *pilha = criar_pilha(TAMVETDN);

do{
    printf("\033[92m");
    valor_decimal = lerInteiro();

    if(valor_decimal != -1){
    transformar_binario(pilha,valor_decimal);

      printf("\033[92m");
      printf("DECIMAL INFORMADO: %d\n\n",valor_decimal);
      printf("RESULTADO EM BINÁRIO: ");
while(pilha->topo > 0){
  printf("%d", pop(pilha));
}
printf("\n\n");
}

}while(valor_decimal != -1);

printf("\033[0m");
destruir_pilha(pilha);
return 0;}


