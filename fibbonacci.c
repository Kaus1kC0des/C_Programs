#include <stdio.h>

int main(){
  int first=0,second=1,next,n;
  printf("Enter the number of terms to print: ");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    if(i<=1){
      next=i;
    }
    else{
      next = first+second;
      // Iter 1,2,3,4 --> next = 0,1,1,2
      first = second;
      // Iter 1,2,3,4 --> first = 1,1,2,3
      second = next;
      // Iter 1,2,3,4 -->  
    }
    printf("%d ",next);
  }
  return 0;
}
