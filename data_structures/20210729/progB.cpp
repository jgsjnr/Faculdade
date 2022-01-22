#include <stdio.h>
#include <stdlib.h>
/* Este programa le 2 notas de um aluno (valores reais),
e valida se estas notas est?o no intervalo de 0 a 10.
Se as notas estiverem ok, chame uma fun??o que recebe as notas como 
par?metros e retorne a m?dia artim?tica delas.Com a m?dia recebida 
o programa chama um procedimento que recebe a media e informa a
situa??o do aluno. (Aprovado se m?dia>=6 ou reprovado caso contr?rio)
Prever repeti??o.*/
float media(float x, float y){
	return (x+y)/2;
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
	float n1,n2, m;
	char resp='s';/*controla o looping do programa*/
	while(resp=='s'||resp=='S'){
		system("cls");
		printf("Digite 2 notas: ");
		scanf("%f %f",&n1,&n2);
		m=media(n1,n2);//chama a fun??o media
		printf("Media=%.2f\n",m);
		status(m);//chama o rocedimento status
		printf("\nDigite 's' para repetir o processo: ");
		fflush(stdin);//limpa o buffer de teclado
		scanf("%c",&resp);
	}
}

