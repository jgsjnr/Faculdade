#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char**argv){

    char string[101];
    int x, i, a;

    printf("Foneca uma string com espacos em branco: ");
    gets(string);
    printf("%s\n",string);

    for(i=0; i<strlen(string); i++){
        if(string[i]==' '){
            string[i]=string[i+1];
        }   
    }

    printf("String sem espa�os em branco: %s\n", string);

    return 0;
}
