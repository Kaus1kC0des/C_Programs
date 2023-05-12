#include <stdio.h>

int main(){
  int i,j,n;
  printf("Enter the dimensions of the square: ");
  scanf("%d",&n);
  //Iterating through the number of rows
  for(i=0;i<n;i++){
    //Iterating through the number of columns
    for(j=0;j<n;j++){
      if(i==0||i==n-1||j==0||j==n-1){
        printf("* ");
      }
      else{
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}
