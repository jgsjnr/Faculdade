//Aluno: José Geraldo da Silva Júnior RA:1680482022037

void semRepetidos(int v[], int tam){ 			//funcao prototipo para gerar numeros aleatorios sem repeticao
	srand((unsigned)time(NULL)); 				//declara a semente dos numeros aleatorios
	int igualdade = 0;							//define a variavel que vai auxiliar na identificacao se ouve ou nao igualdade
	int i = 0; 									//indice para o loop
	while(i < tam){ 							//loop que vai gerar os numeros aleatorios
		v[i] = rand()%tam+1; 					//geracao de numeros randomicos que vao ser armazenados no vetor
		for(int j = 0; j < i; ++j){ 			//inicia um loop para verificar se essa sequencia de numeros é aleatorio
			if(v[j] == v[i]){ 					//verifica se esse numero e igual ao numero atual no indice desse loop de verificacao
				igualdade = 1;					//se a igualdade existir ele acusa como numero 1 e fecha o loop forçando a gerar novo numero aleatorio para aquela posicao
				break;							//para o processo no caso de igualdade
			}									//									
			else igualdade = 0;					//se nao existir igualdade ele acusa com o numero 0
		};										//
		if(igualdade == 0) ++i;					//se a igualdade nao existir ele aumenta 1 no indice e permite que o programa continue funcionando
	}											//								
	for(int k = 0; k < tam; k++){				//loop que mostra quais os numeros gerados aleatoriamente
		printf("valor do vetor: %d\n", v[k]);	//print que mostra os numeros
	};											//								
	system("pause");							//pausa o programa para visualizacao
}												//