#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows;
    printf("Enter number of rows for the pyramid: ");
    if (scanf("%d", &rows) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (rows <= 0) {
        fprintf(stderr, "Number of rows must be positive.\n");
        return 1;
    }

    for (int i = 1; i <= rows; ++i) {
        // print leading spaces
        for (int s = 0; s < rows - i; ++s) putchar(' ');
        // print stars: 2*i - 1
        for (int j = 0; j < 2 * i - 1; ++j) putchar('*');
        putchar('\n');
    }

    return 0;
}
