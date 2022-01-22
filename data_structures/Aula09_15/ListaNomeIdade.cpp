
#include "listaNome.h"
void lista_ultimo(Lista *ls){
	Lista *a;
	/*while(a->prox!=NULL)
	   a=a->prox;*/
	for(a=ls;a->prox!=NULL;a=a->prox);
	printf("Ultimo: %s\n",a->nome);
}

Lista *lista_semRepetir(Lista *ls, char *v, int id){
	Lista *aux=lista_busca(ls,v);
	if(aux==NULL)
	    ls=lista_ordenada(ls,v,id);
	else
	    printf("Elemento duplicado\n");
	return ls;
}
//programa principal
void menu(){
     system("cls");
     printf("Escolha uma das opcoes do menu: \n");
     printf("------------------------------\n");
     printf("1. Insere na lista sem repetir\n");       
     printf("2. Retira da lista\n");
     printf("3. Mostra a lista\n");
     
     printf("4. Busca item na lista\n");
     
    // printf("5. Conta Elementos\n");//int lista_conta(Lista *l)
    // printf("6. Soma Elementos\n");//int lista_soma(Lista *l)
     
     printf("7. Ultimo da lista\n");//void lista_ultimo(lista *l)
            
     printf("9. Fim\n");
     printf("==> ");
}
//--------------------------------------------------            
main(){
  int opmenu, id;
  char nome[31];
  Lista *li=lista_cria();//inicializa a lista com NULL
  Lista *aux;//ponteiro auxiliar - necessário para a busca
  do{
     menu();   
     scanf("%d",&opmenu);
     switch(opmenu){
        case 1: //insere
               printf("Informe o nome: ");
               scanf(" %s",nome);
               printf("Informe a idade: ");
			   scanf("%d", &id);
			   fflush(stdin);
               //li=lista_semRepetir(li,nome, id);
               li=lista_ordenada(li,nome,id);
               //li=lista_insere(li,item);
               break;
        case 2:  //retira
             printf("Informe o nome que deseja retirar: ");
             scanf("%s",nome);
             li=lista_retira(li,nome); 
             break;
        case 3://mostra
		    if(lista_vazia(li))
			   printf("Lista vazia\n");
			else 
		  		 lista_mostra(li);
		      
            break;
        case 4:  //busca
             printf("Informe o nome que deseja procurar: ");
             scanf("%s",nome);
             aux=lista_busca(li,nome); 
             if(aux==NULL)
                printf("%s nao encontrado\n",nome);
             else
                printf("%s - %d encontrado!!!\n",aux->nome, aux->idade);
             break;
        case 7: //ultimo da lista
        		if(lista_vazia(li))
			   		printf("Lista vazia\n");
				else 
		  		   lista_ultimo(li);
		  		break;
        }//fim switch
   printf("\n");
   system("pause");
   }while(opmenu!=9);
   lista_libera(li);
}
