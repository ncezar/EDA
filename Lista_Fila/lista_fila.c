#include "lista_fila.h"

void inicializaLista(tLista *lista){
    lista->n_elem = 0;
    lista->inicio = (tNo *) malloc(sizeof(tNo));
    }

int listaVazia(tLista lista){
    if(lista.n_elem == 0){
        return SIM;
    }
    else {
        return NAO;
    }
}



void inserirNoFim(tLista *lista, int dado){
    tNo *no;
    tNo *ptr;
    no = (tNo *) malloc(sizeof(tNo));
    ptr= (tNo *) malloc(sizeof(tNo));
    no->dado = dado;
    ptr = lista->inicio;
    if(lista->n_elem == 0){
    no->prox = NULL;
    lista->inicio = no;
    lista->fim=no;
    lista->n_elem = lista->n_elem+1;
    }
    else{
            while(ptr->prox != NULL){
                ptr = ptr->prox;
            }
            ptr->prox = no;
            lista->fim=no;
            no->prox = NULL;
            lista->n_elem = lista->n_elem +1;
    }
}

int removerNoInicio(tLista *lista){
    int dado;
    dado = lista->inicio->dado;
    lista->inicio = lista->inicio->prox;
    lista->n_elem = lista->n_elem -1;
    return dado;
}


void mostraLista(tLista lista){
    int i;
    printf("\nDados da lista:\n");
    for(i=0;i<lista.n_elem;i++){
    printf("\tDados[%i]: %i\n",i,lista.inicio->dado);
    lista.inicio = lista.inicio->prox;
    }
}

int posicaoElemento(tLista lista,int pos){
    int i=0;
    tNo *ptr;
    ptr = lista.inicio;
    while(i!=pos){
        ptr=ptr->prox;
        i++;
    }
    return ptr->dado;
}

void modificaNaPos(tLista *lista, int pos,int dado){
    int i=0;
    tNo *ptr;
    ptr = lista->inicio;
    while(i!=pos){
        ptr=ptr->prox;
        i++;
    }
    ptr->dado = dado;
}
