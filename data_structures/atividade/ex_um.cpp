#include <stdio.h>
#include <stdlib.h>
#define MAX 21 //tamanho maximo da string

//funcao que devolve o tamanho da palavra
int palavraTam(char *palavra){ 	
	//variavel que vai devolver no fim,
	//também serve pra navegar nos indices		
	int i = 0;
	//for para navegar ate o fim da palavra							
	for(; palavra[i] != '\0'; i++);
	//devoluçao do i com tamanho da palavra contado
	return i;
}
//procedimento para copiar a string
void copiaStr(char * um, char * dois){
	//variavel para navegar nos indices
	int i = 0;
	//for que copia indice a indice para a outra string
	for(; um[i] != '\0'; i++) dois[i] = um[i];	
	//adiciona o caracter \0 ao fim da string
	dois[i] = '\0';	
}
//procedimento de verificacao do palindromo
void palindromo(char *palavra){
	///armazena o tamanho da palavra e cria uma 
	//variavel para caso haja diferença entre o palindromo
	int tam = palavraTam(palavra), dif = 0;
	//cria uma string auxiliar com o tamanho da palavra anterior
	char aux[tam];
	//copia a string passada como parametro para a auxiliar
	copiaStr(palavra, aux);
	//for necessario para navegar nos indices da palavra e da auxiliar,
	//com i começando no começo da palavra e j no fim da palavra		
	for(int i = 0, j = tam-1; palavra[i] != '\0'; ++i, --j){
		//mostra o caracter que está sendo observado
		printf("%c\n%c\n", aux[i], palavra[i]);
		//verfica se existe qualquer letra diferente entre as duas palavras,
		//verificando se não é palindromo
		if(palavra[i] != aux[j]) dif++;
	}
	//se não houver letras em ordens 
	//diferentes esse if diz que é um palindromo
	if(dif == 0) printf("palindromo\n");
	//caso a variavel dif for maior que 0,
	//entao dira que nao e um palindromo
	else printf("nao palindromo\n");
}



int main(){
	printf("Escreva a string: ");
    char string[MAX];
    fflush(stdin);
    gets(string);
    palindromo(string);
}
