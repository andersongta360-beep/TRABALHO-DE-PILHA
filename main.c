#include "PILHA_DINAMICA.h"

int main(){
setlocale(LC_ALL, "Portuguese");
limparTela();
int valor_decimal=0, TAMANHO_PILHA=4;

PilhaDinamica *pilha = criar_pilha(TAMANHO_PILHA);

do{
    printf("\033[92m");
    valor_decimal = lerInteiro();

    if(valor_decimal == -1){
        break;
    }
    transformar_binario(pilha,valor_decimal);

    printf("\033[92m");
    printf("DECIMAL INFORMADO: %d\n\n",valor_decimal);
    printf("RESULTADO EM BINARIO: ");
    while(!pilha_vazia(pilha)){
        printf("%d", pop(pilha));
    }
    printf("\n\n");

}while(valor_decimal != -1);
    destruir_pilha(pilha);

printf("\033[0m");
return 0;}


