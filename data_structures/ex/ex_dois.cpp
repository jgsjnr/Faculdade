#include <stdio.h>
#include <stdlib.h>
#define MAX 21

int palavraTam(char *palavra){
	int i = 0;
	for(; palavra[i] != '\0'; i++);
	return i;
}

void copiaStr(char * um, char * dois){
	int i = 0;
	for(; um[i] != '\0'; i++) dois[i] = um[i];
	dois[i] = '\0';
}

void palindromo(char *palavra){
	int tam = palavraTam(palavra), dif = 0;
	char aux[tam];
	copiaStr(palavra, aux);
	for(int i = 0, j = tam-1; palavra[i] != '\0'; ++i, --j){
		printf("%c\n%c\n", aux[i], palavra[i]);
		if(palavra[i] != aux[j]) dif++;
	}
	if(dif == 0) printf("palindromo\n");
	else printf("nao palindromo\n");	
}



int main(){
	printf("Escreva a string: ");
    char string[MAX];
    fflush(stdin);
    gets(string);
    palindromo(string);
}
