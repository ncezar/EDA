typedef struct{
        int *vetor;
        int inicio;
        int fim;
        int qtdNos;


}Lista;

void insereAntes(Lista *p, int k);
void insereDepois(Lista *p, int k);
void acessaNo(Lista *p, int k);
void alteraNo(Lista *p, int k, int valor);
void removeNo(Lista *p, int k);
void numeroNos(Lista *p);
void localizaNo(Lista *p,int valor);

