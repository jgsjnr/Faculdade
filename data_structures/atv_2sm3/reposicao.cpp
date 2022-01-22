#include <stdio.h>

float somaVet (float v[], int t){
	if(t == 0) return 0;
	else return v[t-1] + somaVet(v, t-1);
}

typedef struct lista{ int valor; struct lista * next; }Lista;


int gravaLista(FILE *arq, Lista *li){
	char fn = ';';
	int count = 0;
	for(Lista * a = li ;a != NULL; a = li->next){
		fputc(a->valor, arq);
		fputc(fn, arq);
		++count;
	}
	return count;
}

typedef struct lista2{int contacorrente;float valor;struct lista2 *ant;struct lista2 *prox;}Lista2;

float saldo(Lista2 *lc, int cc){
	float ct = 0;
	for(Lista2 * a  = lc; a != NULL; a=lc->prox){
		if(a->contacorrente == cc) ct += a->valor;
	}
	return ct;
}

typedef struct arv{int codproduto;float preco;struct arv *sae;struct arv *sad;}Arv;

int precoIgual(Arv * T, float valor){
	int ct = 0;
	if(T!=NULL){
		if(T->preco == valor) return ct += 1 + precoIgual(T->sae, valor) + precoIgual(T->sad, valor);
		else return ct += precoIgual(T->sae, valor) + precoIgual(T->sad, valor);	
	}
	else printf("Fim da arvore!\n");
}

int main(){
	Arv * T = NULL;
	float valor = 0;
	precoIgual(T, valor);
}
