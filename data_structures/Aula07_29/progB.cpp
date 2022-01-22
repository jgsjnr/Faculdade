#include <stdio.h>
#include <stdlib.h>
/* Este programa le 2 notas de um aluno (valores reais),
e valida se estas notas estão no intervalo de 0 a 10.
Se as notas estiverem ok, chame uma função que recebe as notas como 
parâmetros e retorne a média artimética delas.Com a média recebida 
o programa chama um procedimento que recebe a media e informa a
situação do aluno. (Aprovado se média>=6 ou reprovado caso contrário)
Prever repetição.*/
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
		m=media(n1,n2);//chama a função media
		printf("Media=%.2f\n",m);
		status(m);//chama o rocedimento status
		printf("\nDigite 's' para repetir o processo: ");
		fflush(stdin);//limpa o buffer de teclado
		scanf("%c",&resp);
	}
}
