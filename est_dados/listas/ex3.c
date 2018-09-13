struct lista{
    int info;
    struct lista *prox;
    struct lista *ant;
};

typedef struct lista Lista;

void lst_cria (Lista *l) {
    l->prox=NULL;
    l->ant=NULL;
}

Lista* lst_insere (Lista *l, int i) {
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    novo->info=i;
    if (l->prox == NULL) {
        l->prox = novo;
        l->ant = novo;
    }
    else {
        novo->ant = l->prox;
        l = novo;
    }
}

Lista* lst_retira (Lista* l, int v);

Lista* lst_busca(Lista* l, int v);

void lst_imprime (Lista* l); 

void lst_libera (Lista* l);

int main () {

    printf("LISTA \n");

    Lista* l;

    l = lst_cria();

    l = lst_insere(l,23);

    l  = lst_insere(l,45);

    l = lst_insere(l,56);

    l = lst_insere(l,78); 

    lst_imprime(l);

    printf("--------------------------\n");

    l = lst_retira(l,45);

    lst_imprime(l);

    lst_libera(l);

    return 0;

}