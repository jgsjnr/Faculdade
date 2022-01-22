//fila com vetor
#include <stdio.h>
#include <stdlib.h>
//#include "filacompacta.h"
//#include "fila.h"
//#include "filaSmart.h"
#include "filaCircFloat.h"

void menu(){
     system("cls");
     printf("Escolha uma das opcoes do menu: \n");
     printf("1. Enfilera\n");       
     printf("2. Retira \n");
     printf("3. Mostra a fila\n");
     
     printf("4. Conta elementos\n");//int fila_conta(Fila f*)
     printf("5. Soma elementos\n");// float fila_soma(Fila *f)
     
     printf("9. Fim\n");
} 
//---------------------------------------------------------------    
main(){
 Fila *fi=fila_cria();
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
          fila_mostra(fi);  break;                   
   }//switch
   printf("\n");
   system("pause"); 
 } while(opmenu!=9);
}
                                          
