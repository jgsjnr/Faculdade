#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void buscaRepetidos(int vet[], int valor, int tam){
	int i, flag=0;
	for(i=0;i<tam;i++){
		if(vet[i]==valor){
			printf("%d encontrado no indice: %d\n",valor, i);
			flag=1;//encontrou algun
		}
	}
	if(flag==0)
		printf("%d NAO encontrado\n",valor);
}

int main(){
      srand((unsigned)time(NULL));//time(NULL) pega a hora de execução do programa em milésimos de segundos
      int i, tam, num;	
      int resp;
      tam=rand()%30+1; // tamanho entre 1 e 30
	  int vet[tam];
	  printf("Tamanho: %d\n",tam);
      for(i=0;i<tam;i++) {
            vet[i]= rand()% 30+1;// conteúdo entre 1 e 30
            printf("%d\t",vet[i]);
       }
       printf("\n\n");
       do{
       	 printf("Digite o numero a ser procurado: ");
       	 scanf("%d",&i);
         buscaRepetidos(vet,i,tam);
       	 printf("\nDigite 1 para procurar outro valor: ");
       	 scanf("%d",&resp);
       	
	   }while (resp==1);
      
}

