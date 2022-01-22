#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
//Procedimento que verifica se item e par
Lista *lista_impares(Lista *l1){
	//Lista auxiliar para navegar nos indices
	Lista *a;
	//Lista que vai ser devolvida no final com valores impares
	Lista *ret = lista_cria();
	//variavel para armazenar se e impar ou par
	int res;
	//for para percorrer a lista principal
	for(a=l1;a!=NULL;a=a->prox){
		//faz o modulo de 2,
		//assim verificando se aquele valor e divisivel por 2
		res = a->info%2;
		//comparacao se o valor da lista e maior que o valor inicial
		if(res == 1) lista_insere(ret, a->info);
	}
	//devolve a lista ret com valores impares
	return ret;
}

int main(){
}