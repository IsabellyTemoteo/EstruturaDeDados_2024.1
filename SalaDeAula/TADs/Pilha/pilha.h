#define maxtam 5

typedef struct pilha{
    int elementos[maxtam];
    int pos;
    int tam;
}pilha;

int pilha_iniciar(pilha *p){
    p->tam = maxtam;
    p->pos = 0;
}

int pilha_vazia(pilha p){
    if(p.pos == 0)
        return 1; //sim está vazia
    else return 0; //nao está vazia
}

int pilha_cheia(pilha p){
    if(p.pos == p.tam)
        return 1; //sim está cheia
    else return 0; //não esetá cheia
}

int pilha_empilha(pilha *p, int x){
    if(pilha_cheia(*p)) return 1;

    p->elementos[p->pos] = x;
    p->pos++;

    return 0;
}

int pilha_desempilha(pilha *p){
    if(pilha_vazia(*p)) return 1;

    p->pos--;
    return 0;
}

void pilha_printar(pilha *p);