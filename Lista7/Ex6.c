#include <stdio.h>
#include <stdlib.h>

enum teste { E1, E2,  E3};


int main()
{
  
    enum teste E1 = 185;
    enum teste E2 = 'G';
    enum teste E3 = 1042;
  

  printf("\nCampo X: %d // Campo Y: %c// Campo E3: %d\n", E1, E2, E3);
  
    return 0;
}
