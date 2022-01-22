//ordenação por contagem
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_TAM 30 //tamanho máximo do vetor = 30
/*algoritmo original

void contagem(int vet[], int ord[], int n){
//determinar a posição de cada elemento do vetor quando ordenado
//ordenação por contagem
    int i, j ,p;
    for(i=0;i<n;i++){
       p=0;
       for(j=0;j<n;j++)
           if (vet[i]>vet[j])
		       p++;
           
       ord[p]=vet[i];
    } 
}
*/
void ordenaPorContagem(int vet[], int ord[], int n){
	 //determinar a posição de cada elemento do vetor quando de ordenado
    //ordenação por contagem
    int i, j ,p;
    for(i=0;i<n;i++){
       p=0;
       for(j=0;j<n;j++)
           if (vet[i]>vet[j]) p++;
       while(ord[p]==vet[i]) p++;//acrescimo desta linha para resolver os repetidos
       ord[p]=vet[i];
    }                    
}
void mostra(int vet[], int n){
	 for(int i=0;i<n;i++)
       printf("%5d", vet[i]);
    printf("\n\n");
}
int main(){
    int i,n,r;
    //gera o tamanho do vetor (maximo de 50 elementos)
    srand((unsigned)time(NULL));
    n= rand()% MAX_TAM+1;   
    int vet[n],ord[n]; //cria os vetores do tamanho estimado em n  
    i=0;
    do{
        r=rand()% MAX_TAM+1; //gera números de 1 a MAX_TAM para gerar mais repetições
        vet[i]=r;
        i++;
    }while (i<n);
    //mostra o vetor gerado  
    mostra(vet,n);
    ordenaPorContagem(vet, ord, n);            
    mostra(ord,n);
    return 0;
}        
                                           
