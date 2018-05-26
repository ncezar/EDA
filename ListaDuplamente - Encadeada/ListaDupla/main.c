#include <stdio.h>
#include <stdlib.h>
#include "listadupla.h"

int main()
{
        int dado,escolha,posicao;
        tListaD lista;
        inicializaLista(&lista);
        do{
        system("cls");
        printf("\n1. Insere inicio\n2. Insere fim\n3. Insere meio\n4. Remove inicio\n5. Remove fim\n6. Remove meio\n7. Mostra Lista\n8. Mostra no da posicao\n9. Modifica elemento\n0. Sair\n");
        printf("Opcao: ");
        scanf("%i",&escolha);

    switch(escolha){
        case 1:
            printf("\nDigite o dado(-1 para sair):\t");
            while(scanf("%i", &dado), dado>=0){
                printf("Digite o dado(-1 para sair):\t");
                inserirNoInicio(&lista,dado);
        }
        break;
        case 2:
            printf("\nDigite o dado(-1 para sair):\t");
            while(scanf("%i", &dado), dado>=0){
                printf("Digite o dado(-1 para sair):\t");
                inserirNoFim(&lista, dado);
        }
        break;
        case 3:
            printf("\nDigite o dado(-1 para sair):\t");
            while(scanf("%i", &dado), dado>=0){
                printf("Digite o dado(-1 para sair):\t");
                inserirNoMeio(&lista, dado);
        }
        break;
        case 4:
            printf("\n\tElem removido: %i",removerNoInicio(&lista));
            printf("\nPressione uma tecla para sair\n");
            getch();
        break;
        case 5:
            printf("\n\tElem removido: %i",removerNoFim(&lista));
            printf("\nPressione uma tecla para sair\n");
            getch();
        break;
        case 6:
            printf("\n\tElem removido: %i",removerNoMeio(&lista));
            printf("\nPressione uma tecla para sair\n");
            getch();
        break;
        case 7:
            mostraLista(lista);
            printf("\nPressione uma tecla para sair\n");
            getch();
        break;
        case 8:
            printf("\nQual posicao voce deseja ver:\t");
            scanf("%i",&posicao);
            printf("\n\tElem eh: %i",posicaoElemento(lista,posicao));
            printf("\nPressione uma tecla para sair\n");
            getch();
        break;
        case 9:
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
