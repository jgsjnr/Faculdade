#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
//procedimento que verifica o maior numero da lista
int maiorNumero(Lista *l1){
	//variavel auxiliar para percorrer a lista
	Lista *a;
	//variavel que vai comparar com o valor que esta na lista
	int inf = 0;
	//for para percorrer a lista
	for(a=l1;a!=NULL;a=a->prox){
		//comparacao se o valor da lista e maior que o valor inicial
		if(a->info > inf) inf = a->info;
	}
	//devolve o maior valor encontrado
	return inf;
}

int main(){
	
}