#include <stdio.h>
#define TAM 
int main()
{
  char s1[TAM];
  int cont = 0;
  printf(" Digite a primeira string: ");
  fgets(s1);
  
  for(int i; i<TAM;i++){
    cont = cont + 1;
    TAM = cont;
  }
  printf("O tamanho da string é:%d",cont);
  return 0;
}