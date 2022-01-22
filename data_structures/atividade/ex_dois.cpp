#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
//Procedimento que mostra a base da pilha
float base(Pilha *pi){
	//gera uma variavel que armazena o valor 
	//da base ou do indice 0 da estrutura pilha
	float base = pi->vet[0];
	//valor que vai armazenar o valor retornado da pilha,
	//automaticamente retornando o valor 0, ou da base da pilha
	return base;
}

int main(){
		Pilha *pi=pilha_cria();
		pilha_push(pi, 1.45);
		printf("Valor da base da pilha: %f", base(pi));
		int opmenu;
		float item;
		do{
			scanf("%d", &opmenu);
			switch(opmenu){
				case 1:
					printf("Digite o valor a ser empilhado: ");
					scanf("%f", &item);
					pilha_push(pi, item);
					break;
				case 2:
					if(pilha_vazia(pi))
						printf("Pilha vazia \n");
					else 
						printf("Elemento retirado = %.0f",pilha_pop(pi));
					break;
				case 3:
					pilha_mostra(pi); break;
			}
			printf("\n");
			system("pause");
			} while(opmenu!=9);
		}
