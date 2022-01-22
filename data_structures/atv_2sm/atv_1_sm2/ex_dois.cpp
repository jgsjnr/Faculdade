//Aluno: José Geraldo da Silva Júnior RA:1680482022037

int buscavetor(int *vetor, int tam, int valor){				//funcao prototipo que busca um valor em um vetor
	if(tam == 0){											//verifica se chegou ao fim do indice
		printf("Valor nao encontrado: \n");					//print para exibir que chegou ao fim dos indices					
		printf("Valor %d: \n", valor);						//print que mostra o valor a ser procurado
		system("pause");									//pausa o sistema para visualizacao
		return -1;											//return -1 que finaliza a funcao solicitada no enunciado
	}														//
	else {													//else que caso nao tenha chegado ainda no fim ele faz a continuacao da funcao 
		if(vetor[tam] == valor) 							//verifica se o indice atual do vetor e igual ao valor procurado
		printf("Valor: %d\n", valor);						//print que diz o valor procurado
		printf("Valor encontrado no indice %d \n", tam);	//print que exibe em qual indice foi encontrado
		else return buscavetor(vetor, tam -1, valor);		//recursividade para continuar a busca caso nao for encontrado o valor e nao seja o fim dos indices
	}														//
}															//