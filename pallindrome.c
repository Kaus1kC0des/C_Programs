#include <stdio.h>
#include <string.h>

int main(){
  char str[10];
  char str2[10];
  char str3[10];
  printf("Enter the first string to check for pallindrome: ");
  scanf("%s",&str);
  printf("Enter the second string to check for pallindrome: ");
  scanf("%s",&str2);
  // printf("%c",str[2]);
  // int a = strcmp(str,str2);
  // printf("%d",a);
  //Copying Strings
  if(strcmp(str,str2)==0){
    printf("Same");
  }
  else{
    printf("Not same");
  }
  strrev(str3,str2);
  printf("\nThe new string is %s",str3);

  //printf("%s",x);

  // printf('%s',str[0]);
  return 0;
}
