#include <stdio.h>
#include <stdlib.h>
#define MAX 21

void trocaCarac(char *f, char m, char p){
    for(int i = 0; f[i] != '\0'; i++){
        if(m == f[i]) f[i] = p;
    }
}

int main(){
    printf("Escreva o caractere m: ");
    char m, p;
    scanf("%c", &m);
    printf("Escreva o caractere p: ");
    fflush(stdin);
    scanf("%c", &p);
    printf("Escreva a string: ");
    char string[MAX];
    fflush(stdin);
    gets(string);
    trocaCarac(string, m, p);
    printf("%s", string);
}
