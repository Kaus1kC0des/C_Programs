#include <stdio.h>

int main() {
    double a = 5.242;
    int b = 9;
    int result = a+b;
    printf("\nThe sum is %d",result);
    /*The output of result is int because of the int datatype specified
    in front of the result variable  and has nothing to do with the datatype of b or a

    If we change the datatype of result to double, the decimals are visible
    */
    double reslt = a+b;
    printf("\nThe sum is %lf",reslt);
    //Explicit type conversion
    double res = a + (double) b;
    printf("\n%lf",res);
    printf("\n");
    return 0;
}