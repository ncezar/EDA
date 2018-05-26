struct node{
    int dado;
    struct node *prox;
};

typedef struct node NoEstrutura;


void insereInicio(NoEstrutura **cabecalho, int dado, NoEstrutura **ptr);
void insereFim(NoEstrutura **cabecalho, int dado, NoEstrutura **ptr);
void mostraLista(NoEstrutura **cabecalho, int cont);
void removeInicio(NoEstrutura **cabecalho);
void removeFim(NoEstrutura **cabecalho,NoEstrutura **ptr, int cont);
void mostraNo(NoEstrutura **cabecalho, int posicao);
void insereMeio(NoEstrutura **cabecalho, int dado, int vez, int cont);


