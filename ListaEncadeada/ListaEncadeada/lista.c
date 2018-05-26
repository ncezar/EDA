#include <stdio.h>
#include <stdlib.h>
#include "lista.h"



void insereInicio(NoEstrutura **cabecalho, int dado, NoEstrutura **ptr)
{

    NoEstrutura *novo = (NoEstrutura *) malloc (sizeof(NoEstrutura));

    novo->dado = dado;
    //printf(">>%p\n", *cabecalho);
    if(*cabecalho==NULL)
    {
        novo->prox = NULL;
        *ptr=novo;
        *cabecalho = novo;
        return ;
    }
        novo->prox = *cabecalho;

        *cabecalho = novo;



}



void insereFim(NoEstrutura **cabecalho, int dado, NoEstrutura **ptr){

    NoEstrutura *novo = (NoEstrutura *) malloc (sizeof(NoEstrutura));

    novo->dado = dado;

    if(*cabecalho==NULL)
    {
         novo->prox = NULL;
        *cabecalho = novo;
        *ptr=novo;
        return ;
    }


         novo->prox = NULL;

        (*ptr)->prox=novo;
        *ptr = novo;


}




void mostraLista(NoEstrutura **cabecalho, int cont){
    NoEstrutura *aux = *cabecalho;
    int i=cont;
    if(*cabecalho==NULL)
    {
        printf("\n\nFila Vazia\n");
        return;
    }

    printf("Dado Encadeado: %i \n", aux->dado);
    aux= aux->prox;

    while(aux!=NULL){

        printf("Dado Encadeado: %i \n", aux->dado);
        aux = aux->prox;
        i++;

    }
}

void removeInicio(NoEstrutura **cabecalho){
    NoEstrutura *aux;
    aux=(*cabecalho)->prox;


    (*cabecalho)->dado=NULL;
    *cabecalho=aux;

}

void removeFim(NoEstrutura **cabecalho,NoEstrutura **ptr, int cont){
    NoEstrutura *aux=*cabecalho;


    while(aux->prox!=*ptr){

        aux=aux->prox;

    }
    aux->prox=NULL;
    *ptr=aux;


}

void mostraNo(NoEstrutura **cabecalho, int posicao){
    int i=0;
    NoEstrutura *aux=*cabecalho;
    while(i!=posicao){
        aux=aux->prox;
        i++;
    }
    printf("O dado da posicao  %i eh: %i \n",posicao,aux->dado);

}



void modificaElemento(NoEstrutura **cabecalho, int posicao){

}

void listaVazia(){

}

void insereMeio(NoEstrutura **cabecalho, int dado, int vez, int cont){

}

void removeMeio(){

}
void modificaElemento(){

}





