#include <stdio.h>
#include <stdlib.h>

//PROGRAMA:  abb2
//arvore binaria
struct arv
{
    int info;
    struct arv* esq;
    struct arv* dir;
};
typedef struct arv Arv;

//cria arvore vazia
Arv*  abb_cria(){
      return NULL;
}

//verifica se a arvore está vazia
int abb_vazia(Arv* a){
    return a == NULL;
}    
      
//insere elemento interativamente
Arv  *abb_insere(Arv* a,int c){
     Arv *p,*q,*r;
     p=(Arv*)malloc(sizeof(Arv));
     p->info = c;
     p->esq = p->dir = NULL;
     
     if (abb_vazia(a))//primeiro elemento da árvore
         a=p;
     else {
         q=a;
         while(q!=NULL){
             r=q;
             if(c < q->info)
                  q=q->esq;
             else
                  q=q->dir;
         }
         if(c < r->info)
            r->esq=p;
         else
            r->dir=p;
     }
     return a;
 }   

//retira elemento
Arv* abb_retira(Arv *r, int v){
     if (r==NULL) return NULL;
     if(r->info > v) r->esq = abb_retira(r->esq, v);
     else 
       if (r->info < v) r->dir = abb_retira(r->dir, v);
       else {
           //achou o elemento 
         if ( r->esq ==NULL && r->dir ==NULL) { // no sem filhos
              free(r);
              r=NULL;
         } 
         else
            if (r->esq ==NULL) { //filho a direita            
                Arv *t = r;
                r=r->dir;
                free(t);
            }
            else
              if( r->dir ==NULL) { //filho a esquerda
                  Arv *t=r;
                  r=r->esq;
                  free(t);
              }
              else { //tem 2 filhos     
                  Arv *f=r->esq;
                  while (f->dir != NULL)f=f->dir;
                      r->info =f->info;
                      f->info=v;
                      r->esq=abb_retira(r->esq,v);
                  }
         }
     return r;                           
}

//percurso em pre-ordem
void abb_pre(Arv* a){
     if(a!=NULL){
         printf("%d ", a->info); //visita a raiz-esq-dir
         abb_pre(a->esq);
         abb_pre(a->dir);
     }                
}
//percurso em ordem
void abb_ordem(Arv* a){
     if(a!=NULL){
         abb_ordem(a->esq); //visita esq-raiz-dir
         printf("%d ", a->info);
         abb_ordem(a->dir);
      }                
}
//percurso em pos-ordem
void abb_pos(Arv* a){
     if(a!=NULL){
         
         abb_pre(a->esq);
         abb_pre(a->dir);
         printf("%d ", a->info); //visita a esq-dir-raiz
     }                
}
//operação de busca
Arv* abb_busca(Arv *a, int v){
     if (abb_vazia(a))
         return NULL;
     if(a->info > v)
         return abb_busca(a->esq,v);
     if (a->info < v)
         return abb_busca (a->dir, v);
     return a;
}    
//função auxiliar usada na determinação da altura da arvore
int max2 (int a, int b){
       return (a>b)?a:b;
}       
//determina a altura da arvore
int abb_altura(Arv *a){
       if (abb_vazia(a))
           return -1;
       return 1+ max2(abb_altura(a->esq),abb_altura(a->dir));   
}   

         
void menu(){
      system("CLS");
      printf("**Escolha uma opcao**\n");
      printf("1- Inserir\n");
      printf("2- Retirar\n");
      printf("3- Mostrar todos os percursos\n");
      printf("4- Busca No:\n");
      /*
      printf("5- Altura da arvore\n");
      printf("6- Mostrar nos sem filhos\n");
      printf("7- Contar\n");
      printf("8- Somar\n");
      */
      printf("9- Sair\n");
      printf("==> ");
}            
//------------------------------------------------------------------                                   
int main(){
  int num;
  Arv *a=abb_cria();
  Arv *aux; //ponteiro auxiliar
  int v;
  int resp;
  do{
        menu();
        scanf("%d", &resp);
        switch(resp){
        case 1://insere
              printf("\nEntre com o valor a ser inserido: ");
              scanf("%d", &num);
              a=abb_insere(a,num);
              break;
                                          
       case 2://retira
            printf("\nEntre com o valor a ser retirado: ");
            scanf("%d", &num);
            a=abb_retira(a, num);
            break;
       case 3: //mostra os percursos
             printf("Percurso em pre-ordem\n");
             abb_pre(a); 
             printf("\n\nPercurso em ordem\n");
             abb_ordem(a); 
             printf("\n\nPercurso em pos-ordem\n"); 
             abb_pos(a); 
             printf("\n\n"); 
             break;     
       case 4://busca no
            printf("Digite o elemento a ser procurado: ");
            scanf("%d", &num);
            aux=abb_busca(a,num);
            if(aux==NULL)
               printf("Elemento NAO localizado!\n");
            else
               printf("Elemento localizado!\n");
            break;
                         
      }
      system("pause");
  }
  while (resp!=9); 
  printf("\n***FIM***\n\n");             
  return 0;
  
}                                                                                        
