#include <stdio.h>

int main(){
  int i;
  char str[10];
  printf("Enter the string to find the length for ");
  scanf("%s",&str);
  for(i=0;str[i]!='\0';i++);
  printf("The length of the string is %d",i);
  return 0;
}
