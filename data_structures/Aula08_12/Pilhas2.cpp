#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
//trabalha simultaneamente com 2 pilhas
int main(){
	Pilha *p1,*p2;
	p1=pilha_cria();
	p2=pilha_cria();
	//inserindo dados na pilha p1
	pilha_push(p1,1);
	pilha_push(p1,2);
	pilha_push(p1,3);
	//inserindo dados na pilha p2
	pilha_push(p2,10);
	pilha_push(p2,20);
	pilha_push(p2,30);
	pilha_push(p2,40);
	//mostrando as pilhas
	pilha_mostra(p1);
	pilha_mostra(p2);
	//liberando espaços
	pilha_libera(p1);
	pilha_libera(p2);
}
