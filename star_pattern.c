#include <stdio.h>

int main(){
  int n,i,j,k;
  printf("Enter the number of rows/length of the pattern: ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<i;j++){
      printf(" ");
    }
    for(k=0;k<n-i;k++){
      printf("*");
    }
    printf("\n");
  }
  for(i=0;i<n;i++){
    for(j=1;j<n-i;j++){
      printf(" ");
    }
    for(k=n;k>=n-i;k--){
      printf("*");
    }
    printf("\n");
  }
}
