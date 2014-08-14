#include <stdio.h>
#include <stdlib.h>

int main(){
  double random;
  int i,k;
  double x=0;

  for(k=0;k<2;k++){
    srand48(k);
    x=0;
    for(i=0;i<10;i++){
      random = drand48();
      printf("random %f\n", random);
      x = x + random;
    }
    printf("%f\n", x);
  }


  return 0;
}
