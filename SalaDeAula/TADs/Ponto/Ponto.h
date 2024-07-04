typedef struct Ponto{
    float x, y;
}Ponto;

void inicia(Ponto *p);

void desloca(Ponto *p, float dx, float dy){
    (*p).x += dx;
    (*p).y += dy;
}

void mover_origem(Ponto *p, float nx, float ny){
    p->x = nx;
    p->y = ny;
}