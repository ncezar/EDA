#include "lista.h"

void inicializaLista(Lista *p, int tam){
    p->vetor= (int *) malloc(tam* sizeof(int));
    p->qtdNos=0;
    p->inicio=-1;
    p->fim=tam;
    printf("uhu");
}

void insereAntes(Lista *p,int k){
    int i;
    if(p->qtdNos==p->fim){
        printf("Lista cheia!\n");
    }else{
        if(k<0 || k>p->fim){
            printf("Erro");
            return ;
        }
        if(k>=0 && k<p->fim){
            if(p->inicio==-1){
                p->inicio=0;
            }

            printf("Digite os valores que deseja inserir: \n");
            for(i=0;i<k;i++){
                scanf("%i", &p->vetor[i]);
                p->qtdNos++;
            }
        }
    }
}

void insereDepois(Lista *p,int k){
    int i;
    if(p->qtdNos==p->fim){
        printf("Lista cheia!\n");
    }else{
        if(k<0 || k>p->fim){
            printf("Erro!\n");
            return ;
        }
        if(k>=0 && k<p->fim){
            if(p->inicio==-1){
               p->inicio=k;
            }

            printf("Digite os valores que deseja inserir: \n");
            for(i=k;i<p->fim;i++){
                scanf("%i", &p->vetor[i]);
                p->qtdNos++;

            }
        }
    }
}

void acessaNo(Lista *p, int k){

     if(k<0 || k>p->fim){
            printf("Erro!\n");
            return ;
     }
     if(k>=0 && k<p->fim){
        printf("O valor do no %i eh: %i \n", k, p->vetor[k]);
     }

}


void alteraNo(Lista *p, int k, int valor){

     if(k<0 || k>p->fim){
        printf("Erro!\n");
        return ;
     }
     if(k>=0 && k<p->fim){
        p->vetor[k]=valor;
     }

}

void removeNo(Lista *p, int k){
    if(k<0 || k>p->fim){
        printf("Erro!\n");
        return ;
     }
     if(k>=0 && k<p->fim){
        p->vetor[k]=-1;
        p->qtdNos--;
     }
}

void numeroNos(Lista *p){
    printf("A quantidade de nos eh: %i \n", p->qtdNos);
}

void localizaNo(Lista *p,int valor){

    int i,cont;
    for(i=0;i<p->fim;i++){
        if(p->vetor[i]==valor){
            cont=i;
        }
    }
    printf("O no que possui o valor %i eh a posicao: %i", valor, cont);
}
