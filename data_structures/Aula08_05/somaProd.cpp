#include <stdio.h>
void calcula (int a, int b, int *s, int *p) {
  *s= a + b;
  *p= a * b;
  }
  
int main( ) {
  int x = 3, y = 4;
  int soma, prod;
  calcula(x, y, &soma, &prod);//onde x e y s�o passados por valor e soma e prod
                              //por refer�ncia
  printf("soma=%d  produto=%d\n", soma, prod);
  return 0;  
}
