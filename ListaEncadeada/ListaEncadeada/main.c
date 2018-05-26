#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int main()
{

    NoEstrutura *ptr, *novo, *cabecalho;
    cabecalho = NULL;
    int dado, vez=0;
    int cont=0, posicao, i;
    //ptr = NULL;
    int escolha;
     do{
        printf("\n1. Insere inicio\n2. Insere fim\n3. Insere meio\n4. Remove inicio\n5. Remove fim\n6. Remove meio\n7. Mostra Lista\n8. Mostra no da posicao\n9. Modifica elemento\n0. Sair\n");
        printf("Opcao: ");
        scanf("%i",&escolha);

        switch(escolha){
        case 1:
        while(scanf("%i", &dado), dado>=0){
            insereInicio(&cabecalho, dado, &ptr);
            //printf("Dados inseridos: %i %p\n", (cabecalho)->dado,(cabecalho)->prox);
            printf("Ptr: %i \n",(ptr)->dado);
            printf("Cabecalho: %i \n", (cabecalho)->dado);
            cont++;

        }

        // printf("\n\nTesta dados: %i\n\n",(ptr->dado));


        break;
        case 2:
            while(scanf("%i", &dado), dado>=0){
            insereFim(&cabecalho, dado, &ptr);
            printf("Ptr: %i \n",(ptr)->dado);
            printf("Cabecalho: %i \n", (cabecalho)->dado);
            //printf("Dados inseridos: %i %p\n", (cabecalho)->dado,(cabecalho)->prox);
            cont++;

        }


        break;
        case 3:
            vez++;
            while(scanf("%i", &dado), dado>=0){
            insereMeio(&cabecalho, dado, vez, cont);
            printf("Ptr: %i \n",(ptr)->dado);
            printf("Cabecalho: %i \n", (cabecalho)->dado);

            cont++;

        }

        break;
        case 4:
            removeInicio(&cabecalho);
            cont--;
            printf("Ptr: %i \n",(ptr)->dado);
            printf("Cabecalho: %i \n", (cabecalho)->dado);
        break;
        case 5:
            removeFim(&cabecalho,&ptr, cont);
            printf("Ptr: %i \n",(ptr)->dado);
            printf("Cabecalho: %i \n", (cabecalho)->dado);
            cont--;
        break;
        case 6:

        break;
        case 7:
            mostraLista(&cabecalho, cont);
        break;
        case 8:
            printf("Digite qual posicao deseja ver:\n");
            scanf("%i", &posicao);
            mostraNo(&cabecalho, posicao);
        break;
        case 9:

        break;
        default:
            return 0;
        break;
        }
    }while(escolha!=0);


    return 0;
}
