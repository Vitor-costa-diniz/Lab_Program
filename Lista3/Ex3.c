#include <stdio.h>
int main(void){
  int d = 0, cont = 0,*b;
  char c = 'S';
  while (c == 'S'){
    printf("escreva um número:\n"); 
    scanf("%d",&d);
    if (cont == 0){
      b = &d;
    }
    cont+=1;
    if (*b > d){
      b = &d;
    }
    printf("O menor valor digitador até agora foi %d\n",*b);
    printf("O endereço do menor valor ate agora: %p\n",b);
    printf("Deseja continuar ?: [S/N]\n");
    scanf(" %c",&c); 
  }
  printf("O menor valor digitado foi %d\n",*b);
  printf("O endereço do menor valor é %p\n",b);
  printf("O endereço do ponteiro é:%p\n",b);
  return 0;
}