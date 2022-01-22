#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int ra;
	char nome[21];
	float media;
}Aluno;


int main(){
	//Aluna pa[3];
	Aluno *pa;
	pa=(Aluno*)malloc(sizeof(Aluno)*3);

	int i;
	for(i=0;i<3;i++){
		printf("Digite a matricula: ");
		scanf("%d",&pa[i].ra);
		printf("Digite o nome: ");
		fflush(stdin);
		gets(pa[i].nome);
		printf("Digite a media: ");
		scanf("%f",&pa[i].media);
		printf("\n");
	}
	system("cls");
	for(i=0;i<3;i++){
		printf("Matricula: %d\nNome: %s\nMedia: %.1f\n\n", 
		             pa[i].ra, pa[i].nome, pa[i].media);
	}
}
