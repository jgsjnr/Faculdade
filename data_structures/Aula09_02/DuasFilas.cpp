//fila com vetor

#include <stdio.h>
#include <stdlib.h>
#include "filasmart.h" //ou qq outra interface

int main(){
	Fila *f1=fila_cria();
	Fila *f2=fila_cria();
	Fila *f3; //ponteiro para uma fila
	//insere elementos em f1
	fila_insere(f1,1);
	fila_insere(f1,2);
	fila_insere(f1,3);
	fila_insere(f1,4);
	
	//insere elementos em f2
	fila_insere(f2,10);
	fila_insere(f2,20);
	fila_insere(f2,30);
	fila_insere(f2,40);

	fila_mostra(f1);
	fila_mostra(f2);
	fila_mostra(f3);
}
                                          
