#include <stdio.h>
main( ) {
  char frase[50] = "ABRaCADABRa";
  char *p;//ponteiro do tipo char
  int i, n=0;
//percurso usando o ponteiro para a string (p)
  //p=&frase[0]
  for(p=frase; *p !='\0'; p++) 
      if (*p=='A'||*p=='a') n++; 

  printf("Letras A = %d\n", n);
  //ao término do for anterior o ponteiro já saiu da área do vetor
  //percurso usando o vetor frase
  for(i=0, n = 0; frase[i]!='\0'; i++)
            if (frase[i]!='A' && frase[i]!='a')
			       n++; 
  printf("Consoantes = %d\n", n);     
}

