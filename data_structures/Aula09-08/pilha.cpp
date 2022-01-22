#include <stdio.h>
#include <stdlib.h>
#include "pilhacomlista.h"//insere o arquivo de interface xxx.h

void menu(){
     system("cls");
     printf("Escolha uma das opcoes do menu: \n");
     printf("1. Empilha (push)\n");       
     printf("2. Retira (pop)\n");
     printf("3. Mostra a pilha\n");
  
     printf("9. Fim\n");
     printf("==> ");
}
//------------------------------------------------
main(){     
      Pilha *pi=pilha_cria();
      int opmenu;
      float item;
      do{
         menu(); 
         scanf("%d", &opmenu);
         switch (opmenu) {
         case 1 : //insere
                printf("Digite o valor a ser empilhado: "); 
                scanf("%f", &item);
                pilha_push(pi,item);
                break;
        case 2 : //retira
			 if(pilha_vazia(pi)) 
                    printf("Pilha Vazia\n");
                else
                  printf("Elemento retirado = %.0f\n",
				        pilha_pop(pi));
                break;    
        case 3 : //mostra
                pilha_mostra(pi);
			    break; 
		                 
       }  //switch
       printf("\n");
	   system("pause"); 
     } while(opmenu!=9);
   } 

