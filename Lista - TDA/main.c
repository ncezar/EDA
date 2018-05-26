#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    Lista *p;
    int tam, k, escolha, valor;

    printf("Digite o tamanho da lista: ");
    scanf("%i", &tam);
    inicializaLista(&p, tam);

     do{
        printf("\n\n\n1. Insere antes\n2. Insere depois\n3. Acessa k-esimo\n4. Altera k-esimo\n5. Remove k-esimo\n6. Numeros de nos\n7. Localiza no que contem valor\n0. Sair\n\n");
        printf("Opcao: ");
        scanf("%i",&escolha);


        switch(escolha){
        case 1:
            printf("Digite a posicao que deseja inserir antes:\n\n");
            scanf("%i",&k);
            insereAntes(&p, k);

        break;
        case 2:
            printf("Digite a posicao que deseja inserir depois:\n\n");
            scanf("%i",&k);
            insereDepois(&p, k);

        break;
        case 3:
            printf("Digite a posicao que deseja acessar:\n\n");
            scanf("%i",&k);
            acessaNo(&p, k);

        break;
        case 4:
            printf("Digite a posicao que deseja inserir depois:\n\n");
            scanf("%i",&k);
            printf("Digite o valor que deseja atribuir a posicao:\n\n");
            scanf("%i",&valor);
            alteraNo(&p,k,valor);
        break;
        case 5:
            printf("Digite a posicao que deseja remover:\n\n");
            scanf("%i",&k);
            removeNo(&p, k);
        break;
        case 6:
            numeroNos(&p);
        break;
        case 7:
            printf("Digite o valor que deseja atribuir a posicao:\n\n");
            scanf("%i",&valor);
            localizaNo(&p, valor);
        break;
        default:
            return 0;
        break;
        }
    }while(escolha!=0);


    return 0;
}
