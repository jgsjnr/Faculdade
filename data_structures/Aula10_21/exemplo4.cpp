#include <stdio.h>
#include <stdlib.h>
//grava a frase no arquivo tipo texto
int main(){
    FILE *fp;
    char frase[]="Fatec Sao Caetano do Sul";
    fp=fopen("saida.txt","wt");
    for(int i=0; frase[i]!='\0';i++)
       fprintf(fp,"%c",frase[i]);//grava 1 caractere por vez
    fputc('\n',fp);
    fclose(fp);
    printf("arquivo gravado\n");
    system("pause");
    return 0;
}      
