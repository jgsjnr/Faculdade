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
         abb_ordem(a->esq); 
         printf("%d ", a->info);//visita esq-raiz-dir
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
//usando o percurso em pre-ordem (ou qq percurso)
void abb_semFilhos(Arv* a){//visita a raiz-esq-dir
     if(a!=NULL){
     	 if(a->esq==NULL && a->dir==NULL)
         	printf("%d  ", a->info); 
         abb_semFilhos(a->esq);
         abb_semFilhos(a->dir);
     }                
}
//usando o percurso em-ordem (ou qq percurso)
void abb_2Filhos(Arv* a){//visita a es-raiz-esq
     if(a!=NULL){
     	abb_2Filhos(a->esq);
     	if(a->esq!=NULL && a->dir!=NULL)
         	printf("%d  ", a->info); 
        abb_2Filhos(a->dir);
     }                
}
//---------------------------------------------------------
//usando o percurso em-ordem (ou qq percurso)
void abb_1Filho(Arv* a){//visita a es-raiz-esq
     if(!abb_vazia(a)){
     	abb_1Filho(a->esq);
     	if((a->esq!=NULL && a->dir==NULL)||(a->esq==NULL)&&(a->dir!=NULL))
         	printf("%d  ", a->info); 
        abb_1Filho(a->dir);
     }                
}
/*------------------------------------------------------------
int contaNos(Arv *a){
	int conta=0;
	if(a!=NULL){
         //printf("%d ", a->info); //visita a raiz-esq-dir
         conta=conta+1;
         conta=conta+contaNos(a->esq);
         conta=conta+contaNos(a->dir);
     }   
     return conta;
}*/
int contaNos(Arv *a){
	if(a!=NULL)//if(!abb_vazia(a)
	   return 1+ contaNos(a->esq)+contaNos(a->dir);
}
/*--------------------------------------------------------------
int somaNos(Arv *a){
	int soma=0;
	if(a!=NULL){//if(!abb_vazia(a))
         //printf("%d ", a->info); //visita a raiz-esq-dir
         soma+=a->info;
         soma+=somaNos(a->esq);
         soma+=somaNos(a->dir);
     }   
     return soma;
}*/
int somaNos(Arv *t){
	if(t!=NULL)
	  return t->info+somaNos(t->esq)+somaNos(t->dir);
}
void vizinhos(Arv *a){
	if(a->esq==NULL)
	   printf("Nao tem filho a esquerda\n");
	else
	   printf("Filho a esquerda: %d\n",a->esq->info);
	if(a->dir==NULL)
	   printf("Nao tem filho a direita\n");
	else
	   printf("Filho a direita: %d\n",a->dir->info);
}
//--------------------------------------------------------------
void menu(){
      system("CLS");
      printf("**Escolha uma opcao**\n");
      printf("1- Inserir\n");
      printf("2- Retirar\n");
      printf("3- Mostrar todos os percursos\n");
      printf("4- Busca No:\n");
      /*
      printf("5- Altura da arvore\n");*/
      printf("6- Mostrar nos dependendo dos seus Filhos\n");
      printf("7- Contar\n");//int contaNos(Arv *a)
      printf("8- Somar\n");//int somaNos(Arv *a)
      printf("9- Sair\n");
      printf("==> ");
}    

    
//------------------------------------------------------------------                                   
int main(){
  int num;
  Arv *a=abb_cria();
  Arv *aux; //ponteiro auxiliar
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
            else{
			    //aux=aux->info | aux->esq | aux->dir
			     printf("Elemento %d localizado!\n",aux->info);
			     vizinhos(aux);
			     printf("\n");
			 }
			   
			break;
        case 6:
        	printf("Nos sem filhos\n");
        	abb_semFilhos(a);
        	printf("\nNos com 2 filhos\n");
        	abb_2Filhos(a);
        	printf("\nNos com 1 filho\n");
        	abb_1Filho(a);
         	printf("\n");
        	break;
        case 7: //contar nós
            printf("Numero de nos: %d\n",contaNos(a));
            break;
        case 8: //somar nós
            printf("Soma dos nos: %d\n",somaNos(a));
            break;
             
      }
      system("pause");
  }
  while (resp!=9); 
  printf("\n***FIM***\n\n");             
  return 0;
  
}                                                                                        
