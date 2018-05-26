#include <stdio.h>
#include <stdlib.h>
#include "ab.h"

void inicializaArvore(Nodo *p){
    p->raiz=NULL;

}

void insereNodo(Nodo *p,int info){
    Nodo *novo= malloc (sizeof(Nodo));
    novo->dado=info;
    novo->dir=NULL;
    novo->esq=NULL;

    if(p->raiz==NULL){
        p->raiz=malloc(sizeof(Nodo));
        p->raiz=novo;



    }else{
        Nodo *atual=p->raiz;
        Nodo *pai=NULL;
        while(atual!=NULL){
            pai=atual;
            if(info== atual->dado){

                return ;
            }if(info> atual->dado){
             atual=atual->dir;

             }else{
                atual=atual->esq;
             }
        }
        if(info>pai->dado){
            pai->dir=novo;
        }else{
            pai->esq=novo;
        }


    }
}


int removeNodo(Nodo *p, int info){

    //////////////////////////////////////
int removeAtual(Nodo* atual){
    Nodo *no1, *no2;
    if(atual->esq==NULL){
        no2=atual->dir;
        free(atual);
        return no2;
    }
    no1=atual;
    no2=atual-> esq;
    while(no2->dir !=NULL){
        no1=no2;
        no2=no2->dir;
    }
    if(no1 != atual){
        no1->dir = no2->esq;
        no2->esq=atual->esq;
    }
    no2->dir=atual->dir;
    free(atual);
    return no2;
///////////////////////////////////////////////////
    if(p->raiz==NULL){
        return ;
    }
    Nodo *pai=NULL;
    Nodo *atual = p->raiz;
    while(atual!=NULL){
        if(info==atual->dado){
            if(atual==p->raiz){
                p->raiz=removeAtual(atual);
            }else{
            pai->esq=removeAtual(&atual);
            }
            return 1;
        }
        pai=atual;
        if(valor>atual->dado){
            atual=atual->dir;
        }else{
            atual=atual->esq;
        }
    }
    return 0;
}}



void mostraArvore(Nodo *p){
    if(p->raiz==NULL){
        return ;
    }
    if(p->raiz!=NULL){
        printf("%i\n",p->raiz->dado);
        mostraArvore(&(p->raiz->esq));
        mostraArvore(&(p->raiz->dir));
    }
}

void consultaNodo(Nodo *p, int info){
    if(p->raiz==NULL){
 //       return ; nao precisa retornar
    }
    Nodo *atual= p->raiz;
    while(atual!=NULL){
        if(info == atual->dado){
            return 1;
        }
        if(info>atual->dado){
            atual=atual->dir;
        }else{
            atual=atual->esq;
        }
    }
//    return 0; nao precisa retornar
}
