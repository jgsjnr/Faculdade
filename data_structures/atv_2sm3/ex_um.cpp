
//funcao prototipo de busca numa lista
//duplamente encadeada
//primeiro recebendo o ultimo indice da lista
void procuraNasc(Lista *last, char *n){
    //ele vai retornando ate o comeco dela
    //pelo endereco anterior
    if(last->ant != NULL){
        //aos poucos ele vai comparando
        //vendo se o nome e o nascimento
        //e igual por meio de uma comparacao
        //caso for ele mostra
        if(strcmp(last->nome, n) == 1) printf("Nascimento: %s", a->nasc);
        //apos isso se ele nao encontrar
        //ele continua indo de tras pra frente na lista
        else procuraNasc(last->ant, n);
    //caso nao encontre nada
    else{
        //ele apresenta que nao foi encontrado
        printf("Nao encontrado!")
    }
}
int main(){
    typedef struct lista{
        char nome[21];
        char  nasc[11];
        struct lista *ant;
        struct lista *prox;
    }Lista;
    void(ultimo(lista_ultimo(l1), nome))
}