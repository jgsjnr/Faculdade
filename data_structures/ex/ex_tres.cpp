#include <stdio.h>
#include <stdlib.h>
#define MAX 21

void retira_brancos(char *frase){
	for(int i = 0; frase[i] != '\0'; i++){
		if(frase[i] == ' '){
			for(int j = i; frase[j] != '\0'; j++){
				frase[j]=frase[j+1];
			}
		}
	}
}

int main(){
	printf("Escreva a string: ");
    char string[MAX];
    fflush(stdin);
    gets(string);
    retira_brancos(string);
    printf("%s", string);
}
