#include "PILHA_DINAMICA.h"

PilhaDinamica* criar_pilha(int tamanho_pilha){

  PilhaDinamica* pilha = malloc(sizeof(PilhaDinamica));
  if (pilha == NULL) {
        return NULL;
    }
  pilha->itens = malloc(tamanho_pilha * sizeof(int));
  if (pilha->itens == NULL) {
        free(pilha);
        return NULL;
  }
  pilha->capacidade = tamanho_pilha;
  pilha->topo = 0;

  return pilha;
}

void destruir_pilha(PilhaDinamica *pilha){
    free(pilha->itens);
    free(pilha);

}

int pilha_vazia(PilhaDinamica *pilha) {
    return pilha->topo == 0;
}

void transformar_binario(PilhaDinamica *pilha,int valor_decimal){
int resto=0;

if(valor_decimal == 0) {
  printf("0");
  return;
}

while(valor_decimal > 0){
  resto = valor_decimal % 2;
  valor_decimal = valor_decimal / 2;

  push(pilha,resto);
}
}

void push(PilhaDinamica *pilha, int valor){
    if(esta_cheia(pilha)){
    int novo_tamanho = pilha->capacidade * 2;
    int *aux = realloc(pilha->itens,novo_tamanho * sizeof(int));

 if(aux == NULL){
        return;
 } else{

     pilha->capacidade = novo_tamanho;
     pilha->itens = aux;
  }
 }
 pilha->itens[pilha->topo] = valor;
 pilha->topo++;
}

int pop(PilhaDinamica *pilha){

    pilha->topo--;
    return pilha->itens[pilha->topo];

}

int esta_cheia(PilhaDinamica *pilha){
    return pilha->topo == pilha->capacidade;
}


int lerInteiro(void) {
    int valor;
    printf("DIGITE UM NÚMERO INTEIRO: ");
    while(scanf("%d", &valor) != 1) {
        while(getchar() != '\n');
        printf("\033[91m");
        printf("\nDIGITE UM NÚMERO INTEÍRO !!! ");
    }

    while(getchar() != '\n');
    printf("\n");
    return valor;
}

void limparTela(void) {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls"); // Comando para limpar o terminal no Windows
    #elif defined(__linux__) || defined(__unix__)
        system("clear"); // Comando para limpar o terminal no Linux ou Unix
    #else
        printf("\nErro: Sistema operacional não suportado.\n");
    #endif
}
