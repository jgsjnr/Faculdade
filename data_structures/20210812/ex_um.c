#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int RA;
    char nome[21];
    float media;
} Aluno;

int main(){
    Aluno a[3];
    int i;
    for(i=0;i<3;i++){
        printf("Digite o RA: ");
        scanf("%d", &a[i].RA);
        printf("Digite o nome: ");
        fflush(stdin);
        gets(a[i].nome);
        printf("\nDigite media: ");
        scanf("%f", &a[i].media);
        printf("\n");

    }
    system("cls");
    for(i=0;i<3;i++){
        printf("RA: %d\nNome: %s\nMedia: %.1f\n\n", a[i].RA, a[i].nome, a[i].media);
    }
}
