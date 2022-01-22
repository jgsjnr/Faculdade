#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
//trabalha simultaneamente com 2 pilhas

Pilha *pilha_intercala(Pilha *p, Pilha *q){
	Pilha *pa, *pb, *p3; //3 ponteiros para as pilhas 
	pa=pilha_cria();
	pb=pilha_cria();
	p3=pilha_cria();
	float x;
	//esvaziar a pilha p em pa
	while(!pilha_vazia(p)){
		pilha_push(pa,pilha_pop(p));
	}
	//esvaziar a pilha q em pb
	while(!pilha_vazia(q))
	    pilha_push(pb,pilha_pop(q));
	//pilha p e q vazias!!
	//criação da p3 porintercalação e restauração das pilhas originais
	while(!pilha_vazia(pa)||!pilha_vazia(pb)){
		if(!pilha_vazia(pa)){
			x=pilha_pop(pa);
			pilha_push(p,x);
			pilha_push(p3,x);
		}
		if(!pilha_vazia(pb)){
			x=pilha_pop(pb);
			pilha_push(q,x);
			pilha_push(p3,x);
		}
	}
	//pilhas auxiliares vazias, pilha p3 criada e pilhas originais restauradas
	pilha_libera(pa);
	pilha_libera(pb);
	return p3;
}
int main(){
	Pilha *p1,*p2,*p3;//*p3 apenas um ponteiro para uma terceira pilha
	p1=pilha_cria();
	p2=pilha_cria();
	//inserindo dados na pilha p1
	pilha_push(p1,1);
	pilha_push(p1,2);
	pilha_push(p1,3);
	pilha_push(p1,4);
//	pilha_push(p1,5);
//	pilha_push(p1,6);
	//inserindo dados na pilha p2
	pilha_push(p2,10);
	pilha_push(p2,20);
	pilha_push(p2,30);
	pilha_push(p2,40);
	//criar a pilha p3
	p3=pilha_intercala(p1,p2);//criar esta função
	//mostrando as pilhas
	printf("Pilha p1\n");
	pilha_mostra(p1);
	printf("Pilha p2\n");
	pilha_mostra(p2);
	printf("Pilha p3\n");
	pilha_mostra(p3);
	
	//liberando espaços
	
}
