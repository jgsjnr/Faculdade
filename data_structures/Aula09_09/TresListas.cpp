#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
Lista *soma_listas(Lista *l1, Lista *l3){
	
}

//--------------------------------------------------            
main(){
  Lista *l1=lista_cria();
  Lista *l2=lista_cria(); 
  Lista *l3;//só ponteiro para uma lista
  //inserir dados na lista l1
  l1=lista_ordenada(l1,1);
  l1=lista_ordenada(l1,2);
  l1=lista_ordenada(l1,3);
  l1=lista_ordenada(l1,4);
  //inserir dados na lista l2
  l2=lista_ordenada(l2,10);
  l2=lista_ordenada(l2,20);
  l2=lista_ordenada(l2,30);
  l2=lista_ordenada(l2,40);

  printf("Lista L1");
  lista_mostra(l1);
  printf("\nLista L2");
  lista_mostra(l2);
  l3=soma_listas(l1,l2);
  printf("\nLista L3");
  lista_mostra(l3);
  
}
