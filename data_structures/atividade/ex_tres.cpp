#include <stdio.h>
#include <stdlib.h>
//Inclui a biblioteca fila
#include "fila.h"
//procedimento que conta o tamanho das duas filas
int tamFila(Fila *f1, Fila *f2){
	//declara as variavei que vao navegar pela fila 1
	//e pela fila 2 e res para o resultado
	int = 0, int j = 0, int res = 0;
	//nevega pelos indices da fila 1
	for(; i < f1->n; i++);
	//navega pelos indices da fila 2	
	for(; j < f2->n; j++);
	//soma os dois valores que foram contados das filas
	res = i+j;
	//devolve o valor das filas					
	return res;
}
//procedimento que intercala filas
Fila *intercala_fila(Fila *f1, Fila *f2){
	//verifica se o tamanho da fila e maior que 5		
	if(tamFila(f1, f2) > 5){
		//escreve na tela se a fila for maior do que cabe				
		printf("As duas filas sao maiores\n");	
	}	
	//caso seja menor que o tamanho das filas										
	else{
		//aloca a nova fila que vai ser gerada
		Fila *f=(Fila*)malloc(sizeof(Fila));
		//inicia os indices
		int i = 0;
		//navega pelos indices da fila de f1 ate o fim da fila f gerada
		for(; i < f1->n; i++)
			//a fila gerada recebe os valores de f1 ate o fim de f1
			f->vet[i] = f1->vet[i];
		//pega os tamanhos das duas filas e as soma
		int fim = f1->n+f2->n;
		//navega pelos indices ate o fim da fila f 
		//gerada enquanto incrementa os indices de f2 ate ate fim da fila f2,
		//navegando pelos indices de f2
		for(int j = 0; i < fim; i++, j++)
		//adiciona a fila f gerada os valores de f2 ate o fim de f2	
			f->vet[i] = f2->vet[j];
		//devolve f que foi gerada
		return f;
	}
	
}

int main(){
	
}
