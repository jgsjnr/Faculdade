//fila com vetor

#include <stdio.h>
#include <stdlib.h>
#include "filacompacta.h"

 
int fila_conta(Fila *f){
	int c=0;
	float x;
	Fila *ff=fila_cria();
	//esvazia para contar usando uma fila aux
	while(!fila_vazia(f)){
		x=fila_retira(f);
		fila_insere(ff,x);
	}
    while(!fila_vazia(ff)){
    	x=fila_retira(ff);
    	fila_insere(f,x);
    	c++;
	}
	fila_libera(ff);
	return c;
}
void menu(){
     system("cls");
     printf("Escolha uma das opcoes do menu: \n");
     printf("1. Enfileira\n");       
     printf("2. Retira \n");
     printf("3. Mostra a fila\n");
     printf("4. Conta elementos\n");
     printf("9. Fim\n");
}     
main(){
 Fila *fi=fila_cria();
 int opmenu; //usando o typedef
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
	case 4: //conta elementos
		    printf("Total de elementos = %d\n",fila_conta(fi));
			break;             
   }//switch
   printf("\n");
   system("pause"); 
 } while(opmenu!=9);
}
                                          
