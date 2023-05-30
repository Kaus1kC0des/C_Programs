#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int n;
  char *text;
  printf("Enter the limit of the text: ");
  scanf("%d",&n);
  text = (int*)malloc(n*sizeof(int));
  printf("Enter the text: ");
  scanf(" ");
  gets(text);
  printf("Inputted text is: %s\n",text);
  printf("\nThe length of the text is: %ld",strlen(text));
  free(text);
  return 0;
}
