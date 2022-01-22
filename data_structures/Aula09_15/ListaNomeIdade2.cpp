
#include "listaNome.h"
int main(){
	Lista *li=lista_cria();
	li=lista_ordenada(li,"ana",20);
	li=lista_ordenada(li,"bia",30);
	li=lista_ordenada(li,"dani",20);
	li=lista_ordenada(li,"clara",50);
	lista_mostra(li);
}

