#include <stdio.h>

typedef struct lista{
       int valor;
       struct lista *prev;
       struct lista *next;}Lista;


//José Geraldo da Silva Júnior   
void primeiroUltimo(Lista * l){
	Lista * pri = l;
	Lista * ult = l;
	for(ult = l; ult != NULL; ult = ult->next);
	ult = ult->prev;
	for(pri = l; pri != NULL; pri = pri->prev);
	pri = pri->next;
	printf("Primeiro: %d\nUltimo: %d", pri->valor, ult->valor);
	
}

//José Geraldo da Silva Júnior
void leTexto(FILE * arq, char * info){
	int i = 0;
	while((fgets(info, sizeof(info), arq))!=NULL ){
		if(info[0] == 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U'){
			printf("%s", info);
			i++;
		}	
	}
	printf("Quantidade de palavras: %d\n", i);
}



int main(){
	getchar();
}