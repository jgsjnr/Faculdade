#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Aluno
// José Geraldo da Silva Júnior


/* Escreva um programa em C de forma modular tal que: Leia 3 notas (float) de um aluno, validando se estas notas estão entre 0 e 10. Após isso, 
chame uma função que calcule e retorne a média aritmética dessas notas ao programa principal que deverá mostrá-la. 
Esta média será passada como parâmetro para um procedimento que dirá se o aluno foi ou não aprovado (Critério: média>=6). Prever repetição. 
Anexe o fonte cpp do programa indicando o nome dos participantes da dupla como comentário.*/

bool validacao(float * n, int qtd){
	for(int i = 0; i < qtd; i++){
		if(n[i] < 0 || n[i] > 10) return false;
	}
	return true;
}

float media(float * n, int qtd){
	return (n[0]+ n[1]+ n[2])/qtd;
}
//----------------------------------------------
void status(float z){
	if(z>=6)
	  printf("Aprovado\n");
	else
	  printf("Reprovado\n");
}
//-----------------------------------------------------
int main(){
	float n[3], m;
	int qtd = 3;
	char resp = 's';
	while(resp == 's' || resp == 'S'){
		system("cls");
		printf("Digite 3 notas: ");
		scanf("%f %f %f", &n[0], &n[1], &n[2]);
		while(validacao(n, qtd) == false){
			system("cls");
			printf("Notas invalidas: \n");
			printf("Digite 3 notas: ");
			scanf("%f %f %f", &n[0], &n[1], &n[2]);
		}
		m = media(n, qtd); //chama a função média
		printf("Media=%.2f\n", m);
		status(m); //chama o rocedimento status
		fflush(stdin);
		printf("Digite 's' para repetir o processo: ");
		scanf("%c", &resp);
	}
}

