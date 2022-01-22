#include <stdio.h>


//funcao prototipo para ler numeros reais
//em um arquivo binario
void leNumerosReais (FILE *Num, int t){
	//primeiro mostro as variaveis que vou
	//armazenar a soma e os valores
    int sum, n[t];
	//inica o loop para leitura em um vetor
	//lendo tudo de uma vez para o vetor n
    while(fread(n, sizeof(int), t, Num));
	//apos isso ele faz a soma de todos os valores
	//por meio de um for ate o valor de t
	for(int i = 0; i < t; i++) {
    		sum += n[i];
		}
	//apos terminar a soma total dos valores
	//ele apresenta o valor da soma
	printf("Soma total: %d\n", sum);
	//inicia um novo loop que mostra os ultimos tres
	//valores por meio do for com tamanho de t
	//indo do fim ao comeco
	for(int i = 3; i != 0; i--){
		//apresenta esses ultimos numeros
		printf("Ultimos numeros: %d\n", n[t-i]);
	}
}




int main(){
    FILE * fp;
	fp = fopen("vetBinary.bin","rb");
    leNumerosReais(fp, 20);
    fclose(fp);
}