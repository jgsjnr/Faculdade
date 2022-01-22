#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exercício 1 
//Leia os dados numéricos de um arquivo .txt e retorne a soma total dos valores.
/*
int main () {
    int n;
    int soma=0;
    FILE *arquivo;
    arquivo=fopen("/home/rjsa/Área de Trabalho/numeros.txt", "rt"); //abre o arquivo
     if (arquivo==NULL) {
      printf("Nao foi possivel abrir o arquivo.\n"); //mensagem de erro em caso de arquivo não localizado
      system("pause");
      exit(1);
      }
     while(fscanf(arquivo, "%d",&n)==1) {
            if(n!=' ') soma=soma+n;
     }
    fclose(arquivo); //fecha o arquivo
    printf("Soma dos valores no arquivo = %d\n\n", soma); //exibe o resultado na tela
    //system("pause"); //forma alternativa de interrupção do script
	exit(1);
	return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------------------------------

//Exercício 2
//Leia os dados do arquivo .txt e mostre quantas palavras foram lidas e quantas são iguais a palavra chave.
//NÃO ESTÁ IDENTIFICANDO A PALAVRA BOLA
/*
int main () {
	int cont=0, kw=0;
    char keyword[50]="bola";
	char palavra[50];
	FILE *p;
	p=fopen("/home/rjsa/Área de Trabalho/palavras.dat", "rt");
	if(p==NULL){
		printf("Nao foi possivel abrir o arquivo.\n");
		return 1;
	}
	while(fscanf(p, "%s", palavra)==1){
        cont++;
        if(strcmp(palavra,keyword)==0) kw++;
	}
    
	fclose(p);
	printf("Numero de palavras = %d\n", cont);
	printf("Numero de palavras = %d\n", kw);
    printf("\n");
	return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------------------------------

//Exercício 3
//Leia palavras de até 15 caracteres até que a palavra “fim” seja digitada.
//Grave num arquivo de nome “palavras2.txt”. Grave 1 palavra por linha.

//NÃO FUNCIONA AINDA - NÃO ESTÁ ENCERRANDO O SCRIPT

int main(){ 
    FILE *fp;
    char palavra[16];
    char fim[15]="fim";
	fp=fopen("palavras2.txt","wt");
	printf("Digite uma palavra:  ");
	while(*(fgets(palavra, 15, stdin)) != '\n')
	{
	    //fgets(palavra,15,stdin);
		//scanf("%s",palavra);
		fflush(stdin);
        fprintf(fp,"%s", palavra); //grava 
        printf("Digite uma palavra:  ");
    } 
    
    fclose(fp);
    printf("Arquivo gravado\n");
    return 0;
}


//-----------------------------------------------------------------------------------------------------------------------------------------

//Exercício 4
//Leia 10 números reais (float) e armazene-os, 1 por vez, em um arquivo binário de nome NumBin.
//Depois posicione o arquivo no inicio, leia e mostre os números digitados, também 1 por vez.
//Digite números positivos e negativos.
/*
int main(){
    FILE *fp;      
    float num[10], n;
    for(int i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%f", &n);
        num[i]=n;
    }
    fp=fopen("/home/rjsa/Área de Trabalho/vetBin.bin","wb");//grava��o binario (gera novo arq)
    fwrite(&num, sizeof(int),10,fp);
    fclose(fp);
    fp=fopen("/home/rjsa/Área de Trabalho/vetBin.bin","rb");
    printf("\nVetor resultante\n");
    while(fread(num, sizeof(int),10,fp)){
		for(int i=0; i<10;i++){
            printf("%.2f\t",num[i]);
        }
    	printf("\n");
	}
    printf("\n\n");   
    fclose(fp);
    return 0;
}
*/
