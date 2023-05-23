#include <stdio.h>

void main(){
  int a = 10;
  int *b = &a;
  int **c = b;
  printf("%p\n",&a);
  printf("%p\n",&b);
  printf("%d\n",c);
}
