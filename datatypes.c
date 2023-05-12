#include <stdio.h>

int main() {
    //different data types

    //int
    //4 bytes --> %d for printing
    int age = 19;
    printf("The age of the author is: %d",age);

    //float
    //4 bytes --> %f for printing
    //used to store numbers with decimals
    float bankBalance = 1012.343f;
    printf("\nThe balance in your bank is: %f",bankBalance);

    //double
    //8 bytes --> %lf for printing
    //Used to store decimal numbers with higher precision
    double pi = 3.142315;
    //If we want to print only the two digits after the decimal place, we could do
    printf("\nThe value of pi is : %.2lf",pi);
    //double numbers can also be used to store exponential values

    double exponential = 5.5e6;
    //This is 5.5 raised to the power 5
    printf("\nThe exponential number is: %lf",exponential);

    //char
    char a = 'a';
    printf("\nThe char value of a is: %c",a);
    //The character is stored as integers in the background, by C.
    //If we use the %d sign to print c, it will return the integer value of the character
    printf("\nThe integer value of 'a' is : %d",a);

    //To find the size of a datatype we use the 'sizeof' function
    printf("\nThe size of the character 'a' is: %d",sizeof(a));
    printf("\n");

    return 0;
}