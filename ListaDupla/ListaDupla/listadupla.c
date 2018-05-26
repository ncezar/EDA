#include "listadupla.h"

void inicializaLista(tListaD *lista){
    lista->n_elem = 0;
    lista->cabecalho = (tNoD *) malloc(sizeof(tNoD));
    }

int listaVazia(tListaD lista){
    if(lista.n_elem == 0){
        return SIM;
    }
    else {
        return NAO;
    }
}

void inserirNoInicio(tListaD *lista, int dado){
    tNoD *no;
    no = (tNoD *) malloc(sizeof(tNoD));
    no->dado = dado;
    if(lista->n_elem == 0){
    no->prox = NULL;
    no->ant = NULL;
    lista->cabecalho = no;
    lista->n_elem = lista->n_elem +1 ;
    }
    else{
        no->ant = NULL;
        no->prox = lista->cabecalho;
        lista->cabecalho->ant = no;
        lista->cabecalho = no;
        lista->n_elem = lista->n_elem +1 ;
    }
}

void inserirNoFim(tListaD *lista, int dado){
    tNoD *no;
    tNoD *ptr;
    no = (tNoD *) malloc(sizeof(tNoD));
    ptr= (tNoD *) malloc(sizeof(tNoD));
    no->dado = dado;
    ptr = lista->cabecalho;
    if(lista->n_elem == 0){
    no->prox = NULL;
    no->ant = NULL;
    lista->cabecalho = no;
    lista->n_elem = lista->n_elem+1;
    }
    else{
            while(ptr->prox != NULL){
                ptr = ptr->prox;
            }
            ptr->prox = no;
            no->prox = NULL;
            no->ant = ptr;
            lista->n_elem = lista->n_elem +1;
    }
}
void inserirNoMeio(tListaD *lista, int dado){
    tNoD *no;
    no = (tNoD *) malloc(sizeof(tNoD));
    no->dado = dado;
    if(lista->n_elem == 1){
        inserirNoFim(lista, dado);
        lista->n_elem = lista->n_elem +1;
    }
    else{
        no->prox = lista->cabecalho->prox;
        no->ant = lista->cabecalho;
        lista->cabecalho->prox->ant = no;
        lista->cabecalho->prox = no;
        lista->n_elem = lista->n_elem +1;
    }
}
int removerNoInicio(tListaD *lista){
    int dado;
    dado = lista->cabecalho->dado;
    lista->cabecalho = lista->cabecalho->prox;
    lista->cabecalho->ant = NULL;
    lista->n_elem = lista->n_elem -1;
    return dado;
}
int removerNoFim(tListaD *lista){
    int dado;
    tNoD *ptr;
    ptr = lista->cabecalho;
    while(ptr->prox->prox != NULL){
        ptr = ptr->prox;
    }
    dado = ptr->prox->dado;
    ptr->prox = NULL;
    lista->n_elem = lista->n_elem -1;
    return dado;

}
int removerNoMeio(tListaD *lista){
    int dado;
    dado = lista->cabecalho->prox->dado;
    lista->cabecalho->prox = lista->cabecalho->prox->prox;
    lista->cabecalho->prox->ant = lista->cabecalho;
    lista->n_elem = lista->n_elem -1;
    return dado;
}

void mostraLista(tListaD lista){
    int i;
    printf("\nDados da lista:\n");
    for(i=0;i<lista.n_elem;i++){
    printf("\tDados[%i]: %i\n",i,lista.cabecalho->dado);
    lista.cabecalho = lista.cabecalho->prox;
    }
}

int posicaoElemento(tListaD lista,int pos){
    int i=0;
    tNoD *ptr;
    ptr = lista.cabecalho;
    while(i!=pos){
        ptr=ptr->prox;
        i++;
    }
    return ptr->dado;
}

void modificaNaPos(tListaD *lista, int pos,int dado){
    int i=0;
    tNoD *ptr;
    ptr = lista->cabecalho;
    while(i!=pos){
        ptr=ptr->prox;
        i++;
    }
    ptr->dado = dado;
}
