//lista simplesmente encadeada contendo nome e idade
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct lista {
       char nome[31];//string
       int idade;
       struct lista* prox;
}Lista;

Lista* lista_cria() { //função simbólica
        return NULL;
}
int lista_vazia(Lista* ls){//verifica se a lista está vazia (volta 1)
    return(ls==NULL);
}

Lista* lista_busca(Lista* ls, char *n) {     
    Lista *a; //variável usada para percorrer a lista
    for(a=ls;a!=NULL;a=a->prox) { 
        // if(a->info == dado) return a;
        if (strcmp(a->nome,n)==0) 
           return a;
    }
    return NULL;
}

Lista* lista_insere(Lista* ls, char *n, int id) {//insere no inicio
      Lista *novo= (Lista*) malloc (sizeof(Lista));
      strcpy(novo->nome,n);
      novo->idade=id;
      novo->prox=ls;
      return novo;
}

void lista_mostra(Lista* ls) {
     Lista *aux;//variável usada para percorrer a lista
     printf("\nLista\n");
     for(aux=ls;aux!=NULL;aux=aux->prox)
         printf("%s - %d\n", aux->nome, aux->idade);
     printf("\n");
}         
  
Lista* lista_retira(Lista* ls, char *n){
      Lista* ant=NULL; //ponteiro para o anterior
      Lista *aux=ls;// ponteiro para percorrer a lista  
      //procura o elemento na lista guardando seu anterior
      while(aux!=NULL && (strcmp(aux->nome,n)!=0) ){
            ant=aux;
            aux=aux->prox;
      }
      //verifica se achou o elemento
      if(aux==NULL) {
           printf("\nNAO localizado\n");         
           return ls; //não achou - retorna a lista
      }
      //retira o elemento
      if (ant==NULL) //primeiro da lista
         ls=aux->prox;
      else
        //retira do meio da lista
        ant->prox=aux->prox;
      free(aux);
      return ls;
}

//Opcionalmente pode-se inserir na lista de forma ordenada
Lista* lista_ordenada(Lista* ls, char *n, int id) {
    Lista* novo;
    Lista* ant=NULL;
    Lista* p=ls;
    
    //cria novo elemento
    novo=(Lista*)malloc(sizeof(Lista));
    strcpy(novo->nome,n);
    novo->idade=id;
        
    //procura posição de inserção
    while (p!=NULL && (strcmp(p->nome,n)<0))  {
          ant=p;
          p=p->prox;
    }     
    //encadeia o elemento
    if(ant==NULL) { //insere no inicio
         novo->prox=ls;
         ls=novo;
    }
    else //insere no meio ou no fim da lista
    {
         novo->prox=ant->prox;
         ant->prox=novo;
     }
     return ls;
} 
void lista_libera(Lista *ls){
     Lista *p,*t;//ponteiros auxiliares
     p=ls;
     while(p!=NULL){
       t=p->prox;
       free(p);
       p=t;
     }                           
}

