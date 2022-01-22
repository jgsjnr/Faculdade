#include <stdio.h>
int main( ) {
  int vet[4] = {10, 12, 30, 45};
  int *pv;//ponteiro para inteiro
  pv=vet; // ou pv=&vet[0];
  for(int i=0; i < 4; i++)
    // printf("%d  ", vet[i]);
	printf("%d  ", pv[i]);
  printf("\n\n");
  //percurso usando o ponteiro para o vetor (pv)
  for(int i=0; i < 4; i++)
     //  printf("%d  ", *pv++); 
	   printf("%d  ",(*pv)++);
  printf("\n\n");
  
  for(int i=0; i<4; i++)
  	 printf("%d  ", vet[i]);
  	 
  return 0;  
}	

