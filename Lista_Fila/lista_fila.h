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
    tNo *inicio;
    tNo *fim;
    int n_elem;
}tLista;


void inicializaLista(tLista *lista);
int listaVazia(tLista lista);

void inserirNoFim (tLista *lista, int dado);
int removerNoInicio(tLista *lista);
void mostraLista(tLista lista);
int posicaoElemento(tLista lista, int pos);
void modificaNaPos(tLista *lista, int pos, int dado);

