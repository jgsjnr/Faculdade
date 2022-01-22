#include <stdio.h>
#include <stdlib.h>
/* Este programa le 3 notas de um aluno (valores reais),
e valida se estas notas estão no intervalo de 0 a 10.
Se as notas estiverem ok, chame uma função que recebe as notas como 
parâmetros e retorne a média artimética delas.Com a média recebida 
o programa mostra a média obtida e chama um procedimento que recebe a media
e informa a situação do aluno. (Aprovado se média>=6 ou reprovado )
Prever repetição.*/

float media(float x, float y,float z){
	return (x+y+z)/3;
}
//-----------------------------------------------------
float lenota(int i){
	float n;
	do{
		printf("Digite a %i. nota: ",i);
		scanf("%f",&n);
		if (n<0 ||n>10)
		  printf("Nota %i invalida- Redigite\n",i);
	}while(n<0||n>10);
	return n;
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
	float n1,n2,n3,m;
	char resp='s';/*controla o looping do programa*/
	while(resp=='s'||resp=='S'){
		system("cls");//limpa a tela
		n1=lenota(1);
		n2=lenota(2);
		n3=lenota(3);
		m=media(n1,n2,n3);//chama a função media
		printf("Media=%.2f\n",m);
		status(m);//chama o rocedimento status
		printf("\nDigite 's' para repetir o processo: ");
		fflush(stdin);//limpa o buffer de teclado
		scanf("%c",&resp);
	}
}
