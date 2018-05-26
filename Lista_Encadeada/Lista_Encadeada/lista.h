#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIM 1
#define NAO 0
#define ERRO -987654321
typedef struct no{
    int dado;
    struct no *prox;
}tNo;
typedef struct lista{
    tNo *cabecalho;
    int n_elem;
}tLista;


void inicializaLista(tLista *lista);
int listaVazia(tLista lista);
void inserirNoInicio(tLista *lista, int dado);
void inserirNoFim (tLista *lista, int dado);
void inserirNoMeio(tLista *lista, int dado);
int removerNoInicio(tLista *lista);
int removerNoFim(tLista *lista);
int removerNoMeio(tLista *lista);
void mostraLista(tLista lista);
int posicaoElemento(tLista lista, int pos);
void modificaNaPos(tLista *lista, int pos, int dado);
