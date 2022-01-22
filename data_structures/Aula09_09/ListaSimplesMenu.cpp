#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

//programa principal
void menu(){
     system("cls");
     printf("Escolha uma das opcoes do menu: \n");
     printf("------------------------------\n");
     printf("1. Insere na lista\n");       
     printf("2. Retira da lista\n");
     printf("3. Mostra a lista\n");
            
     printf("9. Fim\n");
     printf("==> ");
}
//--------------------------------------------------            
main(){
  int opmenu, item;
  Lista *li=lista_cria();//inicializa a lista com NULL
  Lista *aux;//ponteiro auxiliar - necessário para a busca
  do{
     menu();   
     scanf("%d",&opmenu);
     switch(opmenu){
        case 1: //insere
               printf("Informe o item que deseja adicionar: ");
               scanf("%d",&item);
               li=lista_ordenada(li,item);
               //li=lista_insere(li,item);
               break;
        case 2:  //retira
             printf("Informe o item que deseja retirar: ");
             scanf("%d",&item);
             li=lista_retira(li,item); 
             break;
        case 3://mostra
		    if(lista_vazia(li))
			   printf("Lista vazia\n");
			else 
		  		 lista_mostra(li);
		      
            break;
        }//fim switch
   printf("\n");
   system("pause");
   }while(opmenu!=9);
   lista_libera(li);
}
