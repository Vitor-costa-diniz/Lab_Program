#include <stdio.h>
int main(){
 int a = 5;
  int*p = &a;
  printf("Número = %d",*p);
  printf("Endereç = %p",p);
  return 0;
}