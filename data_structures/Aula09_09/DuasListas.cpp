#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
Lista *lista_dobro(Lista *l1){
	//recebe uma lista e retorna ao programa uma nova lista onde cada elemento é o dobro 
	// do elemento da lista original
	Lista *nova=lista_cria();
	//percorrer os elementos da lista original colocando-os depois de dobrá-los na lista nova
	Lista *a;
	for(a=l1;a!=NULL; a=a->prox){
		nova=lista_ordenada(nova,2 * a->info);
	}
	return nova;
}

//--------------------------------------------------            
main(){
  Lista *l1=lista_cria();
  Lista *l2; //só ponteiro para uma lista
  //inserir dados na lista l1
  l1=lista_ordenada(l1,3);
  l1=lista_ordenada(l1,2);
  l1=lista_ordenada(l1,6);
  l1=lista_ordenada(l1,4);
  l1=lista_ordenada(l1,1);
  l1=lista_ordenada(l1,5);
  l2=lista_dobro(l1);
  printf("Original");
  lista_mostra(l1);
  printf("\nDobrada");
  lista_mostra(l2);
  
}
