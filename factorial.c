#include <stdio.h>

long factorial(int n){
  if(n==0){
    return 1;
  }
  else{
    return (n*factorial(n-1));
  }
}

int main(){
  int n;
  long fact;
  printf("Enter a number: ");
  scanf("%d",&n);
  fact = factorial(n);
  printf("The factorial of %d is %ld.\n",n,fact);
}
