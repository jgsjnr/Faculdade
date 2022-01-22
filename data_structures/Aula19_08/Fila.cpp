//fila com vetor

#include <stdio.h>
#include <stdlib.h>
#define N 50
typedef struct {
        int n;//posicao final
        int ini;
        float vet[N];
        }Fila;

Fila *fila_cria(void){
      Fila *f=(Fila*)malloc(sizeof(Fila));
      f->n=0;
      f->ini=0;
      return f;
}      
        
void fila_insere(Fila *f, float v){//insere sempre no final
    int fim;
    if(f->n==N){ //fila cheia
      printf("Capacidade da fila esgotada.\n");
      return; //retorna ao programa 
      }
      //insere novo elemento
      f->vet[f->n]=v;
      f->n++; 
}              
int fila_vazia(Fila *f){
    return(f->n == f->ini);
    /*if (f->n==f->ini)
           return 1;
      return 0;*/
}
float fila_retira(Fila *f){
     float v;
     
     //retira o elemento da fila sempre do inicio
     v=f->vet[f->ini];
     f->ini++;
     return v;
}
void fila_libera(Fila *f){
     free(f);
}                           
void fila_mostra(Fila *f){
	if(f->n==f->ini){
	  printf("Fila vazia!\n");
	  return;
    }
	 printf("Conteudo da fila\n");
     int i;
     for(i=f->ini;i<f->n;i++)
              printf("%0.f\n",f->vet[i]);
     printf("\n");
}               
void menu(){
     system("cls");
     printf("Escolha uma das opcoes do menu: \n");
     printf("1. Enfileira\n");       
     printf("2. Retira \n");
     printf("3. Mostra a fila\n");
     printf("9. Fim\n");
}     
main(){
 Fila *fi=fila_cria();
 int opmenu; 
 float item;
 do{
    menu(); 
    scanf("%d", &opmenu);
    switch (opmenu){
    case 1 : //insere
          printf("Digite o valor a ser enfileirado: ");
          scanf("%f", &item);
          fila_insere(fi,item); break;
    case 2 : //retira
          if(fila_vazia(fi)) 
              printf("fila vazia.\n");
          else
              printf("Elemento retirado = %.0f\n",fila_retira(fi));
          break;    
    case 3 : //mostra
          fila_mostra(fi);  break;                   
   }//switch
   printf("\n");
   system("pause"); 
 } while(opmenu!=9);
}
                                          
