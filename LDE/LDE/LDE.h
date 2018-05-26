#include <stdio.h>
#include <stdlib.h>

typedef struct eleDuplo{
    void *info;
    struct eleDuplo *ant, *suc;

}EleDuplo;

typedef struct{
    EleDuplo *cabeca;
    int tamInfo;
}LDE;

void inicializa_LDE(LDE *l, int t);
int listaVazia (LDE l);

int insereInicio (LDE *l, void *info);
//int removeInicio (LDE *l, void *info);
