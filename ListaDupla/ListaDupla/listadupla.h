#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIM 1
#define NAO 0
#define ERRO -987654321
typedef struct no{
    int dado;
    struct no *prox;
    struct no *ant;
}tNoD;
typedef struct lista{
    tNoD *cabecalho;
    int n_elem;
}tListaD;


void inicializaLista(tListaD *lista);
int listaVazia(tListaD lista);
void inserirNoInicio(tListaD *lista, int dado);
void inserirNoFim (tListaD *lista, int dado);
void inserirNoMeio(tListaD *lista, int dado);
int removerNoInicio(tListaD *lista);
int removerNoFim(tListaD *lista);
int removerNoMeio(tListaD *lista);
void mostraLista(tListaD lista);
int posicaoElemento(tListaD lista, int pos);
void modificaNaPos(tListaD *lista, int pos, int dado);
