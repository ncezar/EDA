typedef struct No{
    int dado;
    struct No *esq;
    struct No *dir;
    struct No *raiz;
}Nodo;

void inicializaArvore(Nodo *p);

void insereNodo(Nodo *p,int info);

int removeAtual(Nodo*atual);


int removeNodo(Nodo *p, int info);



void mostraArvore(Nodo *p);


void consultaNodo(Nodo *p, int info);
