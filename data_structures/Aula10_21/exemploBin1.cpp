#include <stdlib.h>
#include <stdio.h>
//uso do fseek

int main(){
    FILE *fp;
    int x=3;
    float y=2.5;
    char str[]="Ola";
      
    int num[20];
    int vet[5];
    for(int i=0;i<20;i++)
       num[i]=i;
    fp=fopen("vetBin.bin","wb");//gravação binario (gera novo arq)
    fwrite(&num, sizeof(int),20,fp);
    fclose(fp);
    
    fp=fopen("vetBin.bin","rb");
    //fseek(fp,-5*sizeof(int),SEEK_END); //SEEK_CUR ou SEEK_SET
    printf("\nVetor resultante\n");
    while(fread(vet, sizeof(int),5,fp)){
	
		for(int i=0; i<5;i++)
   	    	printf("%d\t",vet[i]);
    	printf("\n");
	}
    
    
    printf("\n\n");   
    fclose(fp);
    return 0;
}

