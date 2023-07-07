#include <stdio.h>

int main(){
  int array[5] = {1, 2, 3, 6, 8};
  for(int i=0;i<5;i++){
    printf("Number: %d ---> Memory Address: %p\n",*(array+i),(array+i));
  }
  printf("\nThe Address of array is: %p",array);
  return 0;
}
