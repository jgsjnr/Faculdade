#include <stdio.h>
void troca (int *a, int *b) {
  int aux;
  aux=*a;
  *a=*b;
  *b=aux;
}
/*
void troca (int a, int b){//os parâmentros foram passados por valor
	int aux;
	aux=a;
	a=b;
	b=aux;
	printf("Na funcao:\nx=%d y=%d\n",a,b);
}*/
int main() {
  int x=3, y=5;
  troca(&x, &y);//por referênicia
  //troca(x,y);
  printf("No programa:\nx=%d  y=%d\n", x, y);
  return 0;
}	

