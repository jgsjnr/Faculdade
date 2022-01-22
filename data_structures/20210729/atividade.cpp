#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Aluno
// Jos� Geraldo da Silva J�nior


/* Escreva um programa em C de forma modular tal que: Leia 3 notas (float) de um aluno, validando se estas notas est�o entre 0 e 10. Ap�s isso, 
chame uma fun��o que calcule e retorne a m�dia aritm�tica dessas notas ao programa principal que dever� mostr�-la. 
Esta m�dia ser� passada como par�metro para um procedimento que dir� se o aluno foi ou n�o aprovado (Crit�rio: m�dia>=6). Prever repeti��o. 
Anexe o fonte cpp do programa indicando o nome dos participantes da dupla como coment�rio.*/

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
		m = media(n, qtd); //chama a fun��o m�dia
		printf("Media=%.2f\n", m);
		status(m); //chama o rocedimento status
		fflush(stdin);
		printf("Digite 's' para repetir o processo: ");
		scanf("%c", &resp);
	}
}

