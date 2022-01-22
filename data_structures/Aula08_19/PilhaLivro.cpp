//pilha com vetor
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void pilha_topo(Pilha *p){
	if(pilha_vazia(p)==1)
	   printf("Pilha vazia nao tem topo\n");
	else{
		float v;
		v=pilha_pop(p);
		pilha_push(p,v);
		printf("Topo da pilha = %.0f\n",v);
	}
}

int pilha_conta(Pilha *s){
	int cont=0;
	float x;
	Pilha *aux=pilha_cria();
	//esvaziar a pilha original para poder contar
	while(pilha_vazia(s)==0){
		x=pilha_pop(s);
		cont++;
		pilha_push(aux,x);
	}
	//restaurar a pilha original a partir da pilha auxiliar
	while(pilha_vazia(aux)==0){
		x=pilha_pop(aux);
		pilha_push(s,x);
	}
	pilha_libera(aux);
	return cont;
}
float pilha_soma(Pilha *s){
	float x,soma=0;
	Pilha *a;
	a=pilha_cria();
	//esvaziar a pilha original para poder contar
	while(!pilha_vazia(s)){//if (pilha_vazia(s)==0){
		x=pilha_pop(s);
		soma=soma+x;//acumula valores
		pilha_push(a,x);
	}
	//restaurar a pilha original a partir da pilha auxiliar
	while(pilha_vazia(a)==0){
		x=pilha_pop(a);
		pilha_push(s,x);
	}
	pilha_libera(a);
	return soma;
}

void menu(){
     system("cls");
     printf("Escolha uma das opcoes do menu: \n");
     printf("1. Empilha (push)\n");
     printf("2. Retira (pop)\n");
     printf("3. Mostra a pilha\n");
     
     printf("4. Mostra o topo\n");//void pilha_topo(Pilha *p)
     printf("5. Conta elementos\n");//int pilha_conta(Pilha *p)
     printf("6. Soma elementos\n");//float pilha_soma(Pilha *p)  
     printf("9. Fim\n");
}
main(){
      Pilha *pi=pilha_cria();
      int opmenu;
      float item;
      do{
         menu();
         scanf("%d", &opmenu);
         switch (opmenu){
         case 1 : //insere
                printf("Digite o valor a ser empilhado: ");
                scanf("%f", &item);
                pilha_push(pi,item);
                break;
        case 2 : //retira
               if(pilha_vazia(pi))//verifica antes se está vazia
                   printf("Pilha vazia.\n");
               else
                   printf("Elemento retirado = %.0f\n",pilha_pop(pi));
               break;
        case 3 : //mostra
				if(pilha_vazia(pi))//verifica antes se está vazia
                   printf("Pilha vazia.\n");
               else
                	pilha_mostra(pi);
                break;
        case 4: //mostra o topo
                pilha_topo(pi);
                break;
        case 5://conta elementos
                printf("Total de elementos: %d\n",pilha_conta(pi));
                break;
        case 6://soma elementos
                printf("Soma dos elementos: %.0f\n",pilha_soma(pi));
                break;
        
        
       }//switch
       printf("\n");
       system("pause");
       
     } while(opmenu!=9);
     pilha_libera(pi);
   }
