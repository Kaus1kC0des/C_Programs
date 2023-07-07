#include <stdio.h>

int main(){
  int i,j,n;
  printf("Enter the number of rows: \n");
  scanf("%d",&n);
  printf("\n");
  printf("\n");
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n-i;j++)
      {
          printf("-");
  }
  for(j=1;j<=i;j++)
  {
  printf("%c",(char)(j+64));
  }
  for(j=i-1;j>=1;j--)
  {
  printf("%c",(char)(j+64));
  }
      printf("\n");
}
}


//[1,2,3,4]
//This is the array
//We have to insert '6' at index position 2
//So the array should become [1,2,6,3,4]
//So this initially would become [1,2,3,3,4]
//Then we would replace [1,2,6,3,4]

/*
So what we are doing is just moving the elements without inserting an element,
Them we are replacing the element at the index position with the desired number!!
*/
