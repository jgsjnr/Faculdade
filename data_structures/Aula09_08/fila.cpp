#include <stdio.h>
#include <stdlib.h>
//#include "filaCircFloat.h"
#include "filaComLista.h"

void menu(){
     system("cls");
     printf("Escolha uma das opcoes do menu: \n");
     printf("1. Enfileira\n");       
     printf("2. Retira \n");
     printf("3. Mostra a fila\n");
     printf("9. Fim\n");
     printf("==> ");
} 

//----------------------------------------------------
main(){
 Fila *fi=fila_cria();
 Fila *aux;//ponteiro para uma fila auxiliar
 int opmenu; 
 float item;
 do{
    menu(); 
    scanf("%d", &opmenu);
    switch (opmenu){
    case 1 : //insere
          printf("Digite o valor a ser enfileirado: ");
          scanf("%f", &item);
          fila_insere(fi,item); break;
    case 2 : //retira
          if(fila_vazia(fi)) 
              printf("fila vazia.\n");
          else
              printf("Elemento retirado = %.0f\n",fila_retira(fi));
          break;    
    case 3 : //mostra
          fila_mostra(fi);
		  break; 
             
   }//switch
   printf("\n");
   system("pause"); 
 } while(opmenu!=9);
}


