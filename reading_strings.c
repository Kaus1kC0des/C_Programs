#include <stdio.h>
#include <string.h>

int main(){
  int i;
  char ch;
  char str[10];
  char strs[10];
  // char a;
  // char b;
  // printf("Enter the string: ");
  // First is using the gets method, it gets the string as input from the user.
  // gets(str);
  // printf("The entered string is %s",str);
  // Second is the getchar() function, it gets a character as an input.
  // Repeated use of getchar function could lead to the creation of a string.
  // The code is demonstrated below.
  i=0;
  ch = getchar();
  while(ch!='*'){
    strs[i] = ch;
    i++;
    ch = getchar();
  }
  strs[i] = '\0';
  printf("\n");
  printf("The new string from getchar() is: %s",strs);
  return 0;
}
