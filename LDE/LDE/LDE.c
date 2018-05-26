#include "LDE.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void inicializa_LDE(LDE *l, int t){
    l->tamInfo = t;
    l->cabeca = NULL;
}
int listaVazia (LDE l){
    return l.cabeca == NULL;
}

int insereInicio (LDE *l, void *info){
    EleDuplo *p = malloz(sizeof(EleDuplo));
    if (p==NULL){
        return 0; // FRACASSO
    }
    p->info = malloc (l->tamInfo);
    if (p->info==NULL){
        free(p);
        return NULL;
    }
    memcpy(p->info, info, l->tamInfo);
    p->suc = l->cabeca;
    l->cabeca=p;
    if(p->suc!=NULL){
        p->suc->ant=p;
    }
    p->ant=NULL;
    return 1;
}

//int removeInicio (LDE *l, void *info);

