#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void semRepetidos(int v[], int tam){
	srand((unsigned)time(NULL)); //declara a semente dos numeros aleatorios
	int igualdade = 0;//define a variavel que vai auxiliar a armazenar valores gerados pela função rand
	int i = 0;
	while(i < tam){
		v[i] = rand()%tam+1;
		for(int j = 0; j < i; ++j){ //inicia um loop para verificar se essa sequencia de numeros é aleatorio
			if(v[j] == v[i]){
				igualdade = 1;
				break;
			}
			else igualdade = 0;//se o numero ja estiver ele recebe outro numero aleatorio e verifica novamente se é igual ou não
		};
		if(igualdade == 0) ++i;
	}
	for(int k = 0; k < tam; k++){
		printf("valor do vetor: %d\n", v[k]);
	};
	system("pause");
}

int buscavetor(int *vetor, int tam, int valor){
	if(*vetor == valor){
		printf("Valor do vetor: %d\n", *vetor);
		return -1;
	}
	else return buscavetor(vetor, tam, valor);
}


int main(int argc, char** argv) {
	srand((unsigned)time(NULL));
	int i, tam, valor;
	tam = rand()%20+1;
	valor = rand()%20+1;
	int vet[tam];
	semRepetidos(vet, tam);
	buscavetor(vet, tam, valor);
	return 0;
}