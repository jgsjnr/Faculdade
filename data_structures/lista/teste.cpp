#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
	
	float x;
	float y;
	struct ponto *prox;
	
}Ponto;

Ponto *listaPontos;//aponta p 1°elemento da ista

void add(float x, float y){
	
	Ponto *p = (Ponto*)malloc(sizeof(Ponto));
	p->x=x;
	p->y=y;
	p->prox= listaPontos;
	listaPontos = p;
	
}

void imprime(){
	
	Ponto *auxLista = listaPontos;
	while(auxLista != NULL){
		printf("\nPonto (%.1f, %.1f)", auxLista->x, auxLista->y);
		auxLista = auxLista->prox;
	}
	
}

int main(){
	
	add(1,4);
	add(2,7);
	add(8,9);
	
	imprime();
	
	return 0;
}