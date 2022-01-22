#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int RA;
    char nome[21];
    float media;
} Aluno;

int main(){
    Aluno *a = (Aluno*)malloc(sizeof(Aluno)*3);
    int i;
    for(i=0;i<3;a++){
        printf("Digite o RA: ");
        scanf("%d", &a->RA);
        printf("Digite o nome: ");
        fflush(stdin);
        gets(a->nome);
        printf("Digite media: ");
        scanf("%f", &a->media);
        printf("\n");

    }
    system("cls");
    for(i=0;i<3;a++){
        printf("RA: %d\nNome: %s\nMedia: %.1f\n\n", a->RA, a->nome, a->media);
    }
}
