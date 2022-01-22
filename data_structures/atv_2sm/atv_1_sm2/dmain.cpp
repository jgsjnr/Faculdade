#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Aluno: José Geraldo da Silva Júnior 	RA:1680482022037
//Aluno: Higor Goularte Manssur			RA:1680482021010

void semRepetidos(int v[], int tam){ 			//funcao prototipo para gerar numeros aleatorios sem repeticao
	srand((unsigned)time(NULL)); 				//declara a semente dos numeros aleatorios
	int igualdade = 0;							//define a variavel que vai auxiliar na identificacao se ouve ou nao igualdade
	int i = 0; 									//indice para o loop
	while(i < tam){ 							//loop que vai gerar os numeros aleatorios
		v[i] = rand()%tam+1; 					//geracao de numeros randomicos que vao ser armazenados no vetor
		for(int j = 0; j < i; ++j){ 			//inicia um loop para verificar se essa sequencia de numeros é aleatorio
			if(v[j] == v[i]){ 					//verifica se esse numero e igual ao numero atual no indice desse loop de verificacao
				igualdade = 1;					//se a igualdade existir ele acusa como numero 1 e fecha o loop forçando a gerar novo numero aleatorio para aquela posicao
				break;							//para o processo no caso de igualdade
			}									//									
			else igualdade = 0;					//se nao existir igualdade ele acusa com o numero 0
		};										//
		if(igualdade == 0) ++i;					//se a igualdade nao existir ele aumenta 1 no indice e permite que o programa continue funcionando
	}											//								
	for(int k = 0; k < tam; k++){				//loop que mostra quais os numeros gerados aleatoriamente
		printf("valor do vetor: %d\n", v[k]);	//print que mostra os numeros
	};											//								
	system("pause");							//pausa o programa para visualizacao
}

int buscavetor(int *vetor, int tam, int valor){				//funcao prototipo que busca um valor em um vetor
	if(tam == 0){											//verifica se chegou ao fim do indice
		printf("Valor nao encontrado: \n");					//print para exibir que chegou ao fim dos indices					
		printf("Valor %d \n", valor);						//print que mostra o valor a ser procurado
		system("pause");									//pausa o sistema para visualizacao
		return -1;											//return -1 que finaliza a funcao solicitada no enunciado
	}														//
	else {													//else que caso nao tenha chegado ainda no fim ele faz a continuacao da funcao 
		if(vetor[tam] == valor)								//
		{													//verifica se o indice atual do vetor e igual ao valor procurado
			printf("Valor: %d\n", valor);					//print que diz o valor procurado
			printf("Valor encontrado no indice %d \n", tam);//print que exibe em qual indice foi encontrado
		}													//
		else return buscavetor(vetor, tam -1, valor);		//recursividade para continuar a busca caso nao for encontrado o valor e nao seja o fim dos indices
	}														//
}															//


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