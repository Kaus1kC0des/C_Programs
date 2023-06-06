#include <stdio.h>

int main(){
  int n,i,pos,num,j;
  printf("Enter the number of elements in the list: ");
  scanf("%d",&n);
  int arr[n];
  printf("\nEnter the elements of the array\n");
  for(i=0;i<n;i++){
    printf("Enter arr[%d]:",i);
    scanf("%d",&arr[i]);
    printf("\n");
  }
  printf("\nInitial loop: \n");
  for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
  }
  printf("Enter the element to insert: \n");
  scanf("%d",&num);
  printf("Enter the position to insert: ");
  scanf("%d",&pos);
  for(i=n-1;i>=pos;i--){
    for(j=0;j<n;j++){
      printf("%d\n",arr[i]);
    }
    arr[i+1] = arr[i];
    printf("-----------------\n");
  }
  n+=1;
  arr[pos] = num;

  for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
  }
}
