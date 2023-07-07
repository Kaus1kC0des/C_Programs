#include <stdio.h>

int main(){
  double salary;
  double *ptr = &salary;

  printf("Enter your salary: ");
  scanf("%lf",&salary);

  printf("The salary is: %lf",salary);

  printf("Enter your new salary: ");
  scanf("%lf",ptr);
  printf("The new salary is: %lf",*ptr);
  return 0;

}
