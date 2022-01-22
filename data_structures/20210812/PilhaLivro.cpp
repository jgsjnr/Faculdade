//pilha com vetor
#include <stdio.h>
#include <stdlib.h>
#define N 50 
typedef struct pilha{
        int n;//indica o topo da pilha
        float vet[N];
        }Pilha;

Pilha *pilha_cria(){//função do tipo ponteiro p/ pilha - retorna o endereço da pilha
      Pilha *p=(Pilha*)malloc(sizeof(Pilha));
      p->n=0;
      return p;
} 
int pilha_vazia(Pilha *p){//retorna 1 se a pilha estiver vazia ou 0 se tem algo
    if (p->n==0) return 1;
    return 0;
}
void pilha_push(Pilha *p, float v) {//insere o item na pilha
    if(p->n==N){
      printf("Capacidade da pilha esgotada.\n");
      return; //volta para o programa
      }   //insere novo elemento
       p->vet[p->n]=v;
	   p->n++;//incrementa o topo
}
float pilha_pop(Pilha *p){//retira o elemento que está no topo
     float v;
//retira o elemento da pilha
     v=p->vet[p->n-1];  //o último colocado está em p->n-1
     p->n--;
     return v;
}
void pilha_libera(Pilha *p){
     free(p);
}      
void pilha_mostra(Pilha *p) {
     printf("Conteudo da pilha\n");
     for(int i=p->n-1;i>=0;i--)
         printf("%.0f\n",p->vet[i]);
     printf("\n");
} 
void menu(){
     system("cls");
     printf("Escolha uma das opcoes do menu: \n");
     printf("1. Empilha (push)\n");
     printf("2. Retira (pop)\n");
     printf("3. Mostra a pilha\n");
         
     printf("9. Fim\n");
}
main(){
      Pilha *pi=pilha_cria();
      int opmenu;
      float item;
      do{
         menu();
         scanf("%d", &opmenu);
         switch (opmenu){
         case 1 : //insere
                printf("Digite o valor a ser empilhado: ");
                scanf("%f", &item);
                pilha_push(pi,item);
                break;
        case 2 : //retira
               if(pilha_vazia(pi))//verifica antes se está vazia
                   printf("Pilha vazia.\n");
               else
                   printf("Elemento retirado = %.0f\n",pilha_pop(pi));
               break;
        case 3 : //mostra
				if(pilha_vazia(pi))//verifica antes se está vazia
                   printf("Pilha vazia.\n");
               else
                	pilha_mostra(pi);
                break;
        
        
       }//switch
       printf("\n");
       system("pause");
       
     } while(opmenu!=9);
     pilha_libera(pi);
   }
