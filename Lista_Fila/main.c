#include <stdio.h>
#include <stdlib.h>
#include "lista_fila.h"

int main()
{
        int dado,escolha,posicao;
        tLista lista;
        inicializaLista(&lista);
        do{
        printf("\n1. Insere fim\n2. Remove inicio\n3. Mostra Lista\n4. Mostra no da posicao\n5. Modifica elemento\n0. Sair\n");
        printf("Opcao: ");
        scanf("%i",&escolha);

    switch(escolha){


        case 1:
            printf("\nDigite o dado(-1 para sair):\t");
            while(scanf("%i", &dado), dado>=0){
                printf("Digite o dado(-1 para sair):\t");
                inserirNoFim(&lista, dado);
        }
        break;

        case 2:
            printf("\n\tElem removido: %i",removerNoInicio(&lista));
        break;

        case 3:
            mostraLista(lista);
        break;
        case 4:
            printf("\nQual posicao voce deseja ver:\t");
            scanf("%i",&posicao);
            printf("\n\tElem eh: %i",posicaoElemento(lista,posicao));
        break;
        case 5:
            printf("\nQual posicao voce deseja alterar e qual o valor:\t");
            scanf("%i %i",&posicao,&dado);
            modificaNaPos(&lista,posicao,dado);
        break;
        default:
            return 0;
        break;
        }
    }while(escolha!=0);


    return 0;
}
