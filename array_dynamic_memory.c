#include <stdio.h>
#include <stdlib.h>

int main(){
  int *arr;
  int limit,i;
  int sum=0;
  printf("Enter the number of elements: ");
  scanf("%d",limit);
  arr = (int*)malloc(limit*sizeof(int));
  if (arr==NULL){
    printf("Insufficient memory! Exiting...\n");
    return 0;
  }
  printf("Enter the elements of the array: ");
  for(i=0;i<limit;i++){
    scanf("%d",(arr+i));
    sum += *(arr+i);
  }
  printf("\nThe elements of the array are: \n");
  for(i=0;i<limit;i++){
    printf("%d\t",*(arr+i));
  }
  printf("\n");s
}
