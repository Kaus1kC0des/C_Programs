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
      first = second;
      second = next;
    }
    printf("%d ",next);
  }
  return 0;
}
