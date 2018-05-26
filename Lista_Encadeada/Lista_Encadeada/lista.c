#include "lista.h"

void inicializaLista(tLista *lista){
    lista->n_elem = 0;
    lista->cabecalho = (tNo *) malloc(sizeof(tNo));
    }

int listaVazia(tLista lista){
    if(lista.n_elem == 0){
        return SIM;
    }
    else {
        return NAO;
    }
}

void inserirNoInicio(tLista *lista, int dado){
    tNo *no;
    no = (tNo *) malloc(sizeof(tNo));
    no->dado = dado;
    if(lista->n_elem == 0){
        no->prox = NULL;
        lista->cabecalho = no;
        lista->n_elem = lista->n_elem +1 ;
    }else{
        no->prox = lista->cabecalho;
        lista->cabecalho = no;
        lista->n_elem = lista->n_elem +1 ;
    }
}

void inserirNoFim(tLista *lista, int dado){
    tNo *no;
    tNo *ptr;
    no = (tNo *) malloc(sizeof(tNo));
    ptr= (tNo *) malloc(sizeof(tNo));
    no->dado = dado;
    ptr = lista->cabecalho;
    if(lista->n_elem == 0){
        no->prox = NULL;
        lista->cabecalho = no;
        lista->n_elem = lista->n_elem+1;
    }
    else{
            while(ptr->prox != NULL){
                ptr = ptr->prox;
            }
            ptr->prox = no;
            no->prox = NULL;
            lista->n_elem = lista->n_elem +1;
    }
}
void inserirNoMeio(tLista *lista, int dado){
    tNo *no;
    no = (tNo *) malloc(sizeof(tNo));
    no->dado = dado;
    if(lista->n_elem == 1){
        inserirNoFim(lista, dado);
        lista->n_elem = lista->n_elem +1;
    }
    else{
        no->prox = lista->cabecalho->prox;
        lista->cabecalho->prox = no;
        lista->n_elem = lista->n_elem +1;
    }
}
int removerNoInicio(tLista *lista){
    int dado;
    dado = lista->cabecalho->dado;
    lista->cabecalho = lista->cabecalho->prox;
    lista->n_elem = lista->n_elem -1;
    return dado;
}
int removerNoFim(tLista *lista){
    int dado;
    tNo *ptr;
    ptr = lista->cabecalho;
    while(ptr->prox->prox != NULL){
        ptr = ptr->prox;
    }
    dado = ptr->prox->dado;
    ptr->prox = NULL;
    lista->n_elem = lista->n_elem -1;
    return dado;

}
int removerNoMeio(tLista *lista){
    int dado;
    dado = lista->cabecalho->prox->dado;
    lista->cabecalho->prox = lista->cabecalho->prox->prox;
    lista->n_elem = lista->n_elem -1;
    return dado;
}

void mostraLista(tLista lista){
    int i;
    printf("\nDados da lista:\n");
    for(i=0;i<lista.n_elem;i++){
    printf("\tDados[%i]: %i\n",i,lista.cabecalho->dado);
    lista.cabecalho = lista.cabecalho->prox;
    }
}

int posicaoElemento(tLista lista,int pos){
    int i=0;
    tNo *ptr;
    ptr = lista.cabecalho;
    while(i!=pos){
        ptr=ptr->prox;
        i++;
    }
    return ptr->dado;
}

void modificaNaPos(tLista *lista, int pos,int dado){
    int i=0;
    tNo *ptr;
    ptr = lista->cabecalho;
    while(i!=pos){
        ptr=ptr->prox;
        i++;
    }
    ptr->dado = dado;
}
