#include <stdio.h>
#include <stdlib.h>

void aniversariantes(Amigo *a, int mes){
	
}

int main(){
	typedef struct{
		char nome[31];
		int dia;
		int mes;
		int ano;
	}Amigo;
	
	Amigo *am;
	am=(Aluno*)malloc(sizeof(Aluno)*10);
	int i;
	for(i=0;i<10;i++){
		printf("Digite o nome: ");
		fflush(stdin);
		gets(pa[i].nome);
		printf("Digite o dia: ");
		scanf("%d",&am[i].dia);
		printf("Digite o mes: ");
		scanf("%d",&am[i].mes);
		printf("Digite a ano: ");
		scanf("%f",&am[i].ano);
		printf("\n");
	}
	
	int mes = 0;
	printf("digite um mes: ");
	scanf("%d", mes);
}
