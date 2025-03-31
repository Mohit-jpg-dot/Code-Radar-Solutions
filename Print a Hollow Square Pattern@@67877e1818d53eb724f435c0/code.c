#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n; j++) {  // Loop for columns
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");  // Print '*' for border
            } else {
                printf("  ");  // Print space inside the square
            }
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
