
//usando conceito de percurso em ordem
//de forma recursiva
//funcao prototipo de busco de nota maior
void mostraMaior(Arv *T, float nota){
	//verifica se o caminho existe
	if(T!=NULL){
		//se existir ele vai percorrer todo o caminho da esquer
		mostraMaior(T->left, nota);
		//se a condicao for verdadeira ele apresenta
		//matricula e nota do lado
		//no caso se for nota maior
		if(T->nota > nota) printf("Matricula: %d \n nota: %f.2\n", T->matricula, T->nota);
		//percorre todo o caminho da direira
		//mostrando todos os resultados
		mostraMaior(T->right, nota);
		//finaliza o percurso
	}
}


//usando novamento o percurso em ordem
//funcao prototipo de contagem de notas igual
int contaNota(Arv *T, float nota){
	//variavel que serve para a contagem
	//quando nao for verdadeiro nenhuma situacao
	//ele devolve 0 indicando que naquele cominho
	//nao ouve nenhuma nota igual
	int cont = 0;
	//verifica se a arvore existe
	if(T!=NULL){
		//se existir ele verifica se o valor
		//da nota e igual a nota passada por parametro
		if(T->nota == nota){
			//se for verdadeiro automaticamente
			//a contagem recebe um
			cont = 1;
			//depois de forma recursiva
			//ela executa a funcao
			//e dependendo do valor que devolve incrementa
			//se for 1 ele cont 1+1 e assim sucessivamente
			//navega pelo caminho da direita
			cont += mostraMaior(T->left, nota);
			//segue o mesmo de cima porem para direita
			cont += mostraMaior(T->right, nota);
		}
		//caso nao for verdadeira a condicao de nota igual
		//ele continua o caminho adicionando valores
		//incrementando o contador recursivo
		else{
			//segue o conceito de percruso em ordem
			//buscando valores que sejam condizentes
			//com nota igual pela direta
			cont += mostraMaior(T->left, nota);
			//mesmo de cima pela esquerda
			cont += mostraMaior(T->right, nota);
		}
	}
	//no final ele retorna o quanto
	//acumulou de condicoes verdadeiras
	//e aos poucos vai devolvendo
	//somando
	return cont;
}