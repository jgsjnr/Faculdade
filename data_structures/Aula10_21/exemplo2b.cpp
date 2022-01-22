/*conta o numero de palavras de um arquivo*/
#include <stdio.h>

int main () {
    int cont=0; char palavra[20];
    FILE *p; 
    p=fopen("entrada.txt", "rt"); //abre o arquivo
    if (p==NULL) {
      printf("Nao foi possivel abrir o arquivo.\n");
      return 1;
    }
    while(fscanf(p, "%s", palavra)==1) {
      cont++;
    }
   fclose(p); //fecha o arquivo
   printf("Numero de palavras = %d\n", cont); /* resultado*/
  return 0;
}

