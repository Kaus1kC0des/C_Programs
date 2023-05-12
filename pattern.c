#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    // Iterate over each row
    for(i=1; i<=n; i++) {
        // Iterate over each column
        for(j=1; j<=n; j++) {
            // Check if we are on the first or last row
            // or the first or last column
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
