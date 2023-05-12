#include <stdio.h>

int main() {
    int age,a,b,c;
    scanf("%d",&age);
    printf("\nThe age is %d",age);
    printf("\n");
    //taking multiple inputs
    printf("\nEnter three numbers for calculation:");
    scanf("\n%d%d%d",&a,&b,&c);
    printf("\nThe sum of three numbers is %d",(a+b+c));
    printf("\n");
    /*This is a multiline comment
    I really love this feature of VS Code
    The keyboard shortcut to multiline comment is Command+Shift+/
    */
    return 0;
}