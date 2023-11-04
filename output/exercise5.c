#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int spaces = rows - 1;
    int stars = 1;

    // Upper half of the diamond
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= stars; j++) {
            printf("* ");
        }

        printf("\n");
        spaces--;
        stars += 2;
    }

    // Lower half of the diamond
    spaces = 1;
    stars = 2 * rows - 3;

    for (int i = 1; i <= rows - 1; i++) {
        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= stars; j++) {
            printf("* ");
        }

        printf("\n");
        spaces++;
        stars -= 2;
    }

    return 0;
}
