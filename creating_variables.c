#include <stdio.h>

int main() {
    int age = 19;
    printf("Current Age: %d",age);
    age = 28; //modifying the existing value of age
    printf("\nAfter nine years, the age is: %d",age);

    //assigning the value of one variable to another
    int newage = age+21;
    printf("\nThe age after 21 years would be: %d",newage);

    //Declaring two variables at the same time
    int var1,var2;
    int a = 23,b = 21;
    printf("\nThe value of a is : %d and the value of b is: %d",a,b);

    //variable names cannot start with numbers
    //var names should not have built-in keywords
    //var names cannot have spaces in between them
    return 0;
} 