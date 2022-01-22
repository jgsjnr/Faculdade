#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int ra;
	char nome[21];
	float media;
}Aluno;


int main(){
	//Aluna pa[3];
	Aluno *pa,*paux; //paux é um ponteiro auxiliar
	pa=(Aluno*)malloc(sizeof(Aluno)*3);
	paux=pa;//guardou o endereço original que foi dado pelo malloc
   //uso do pa como um ponteiro móvel
	int i;
	for(i=0;i<3;i++){
		printf("Digite a matricula: ");
		scanf("%d",&(*pa).ra);//&pa->ra
		printf("Digite o nome: ");
		fflush(stdin);
		gets(pa->nome);
		printf("Digite a media: ");
		scanf("%f",&pa->media);
		pa++;
		printf("\n");
	}
	system("cls");
	pa=paux;//recuperar o endereço inicial
	for(i=0;i<3;i++,pa++){
		printf("Matricula: %d\nNome: %s\nMedia: %.1f\n\n", 
		             pa->ra, pa->nome, pa->media);
	
	}
	free(paux);
}
