#include <stdio.h>
#include <stdlib.h>

#define TOTAL 3

typedef struct node{

  int X;
  int Y;
  float Z;

} node;



int main(void) {
  int *teste_node;

  teste_node = malloc(2*sizeof(int));

  *(teste_node+1) = 15;

  printf("%d\n", teste_node[1]);

  teste_node = malloc(3*sizeof(2));

  printf("%d\n", teste_node[1]);
  

  
  return 0;
}
