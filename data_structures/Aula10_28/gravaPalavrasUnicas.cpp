#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//programa grava palavras únicas em um arquivo

int procura(char *p,FILE *f){
    fseek(f,0,SEEK_SET);//posiciona no inicio do arquivo
    char pp[21];
    while(fscanf(f,"%s",pp)==1){//enquanto tiver palavras a serem lidas
        if(strcmp(pp,p)==0)//pesquisa se o que foi lida é uma das palavras do arquivo
           return 1;}//significa que houve repetição
    return 0;
}


int main(){
    FILE *fp=fopen("PalavrasUnicas.txt","a+");
    char palavra[21];
    int final=0;
    while (!final){
       printf("Digite uma palavra: ");
       scanf("%s",palavra);
       if (strcmp(palavra,"fim")!=0)//pq não é fim
           if(procura(palavra,fp))
              printf("Palavra repetida\n");
           else{
               fseek(fp,0,SEEK_END);//posiciona no fim do arquivo 
               fprintf(fp,"%s\n",palavra);
               }
       else
          final=1;
    }
    system("pause");
    return 0;
}
