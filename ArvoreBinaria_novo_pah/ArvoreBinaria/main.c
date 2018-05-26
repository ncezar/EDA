#include <stdio.h>
#include <stdlib.h>
#include "ab.h"

int main(){

        int info,escolha;
        Nodo p;
        inicializaArvore(&p);
        do{
        //system("cls");
        printf("\n1. Insere \n2. Remove \n3. Mostra \n4. Consulta\n0. Sair\n");
        printf("Opcao: ");
        scanf("%i",&escolha);

    switch(escolha){
        case 1:
           // printf("\nDigite o dado(-1 para sair) para inserir:\t");
            while(scanf("%i", &info), info>=0){
                printf("Digite o dado(-1 para sair):\t");
                insereNodo(&p,info);
            }
        break;
        case 2:
            printf("\nDigite o dado para remover:\t");
            scanf("%i",&info);
            removeNodo(&p, info);

        break;
        case 3:
            mostraArvore(&p);

        break;
        case 4:
            printf("\nDigite o dado para consulta:\t");
            scanf("%i",&info);
           consultaNodo(&p, info);
        break;
        case 5:
            printf("%i",*(p.raiz->dir->dir->dir));//VERIFICANDO SE ELE ESTA LINKANDO

        default:
            return 0;
        break;
        }
    }while(escolha!=0);



    return 0;
}
