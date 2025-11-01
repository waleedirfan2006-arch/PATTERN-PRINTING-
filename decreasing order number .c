#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int size = 2 * n - 1; // total rows and columns

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {

            // find distance from all 4 sides
            int top = i - 1;
            int left = j - 1;
            int bottom = size - i;
            int right = size - j;

            // find the smallest distance
            int min = top;
            if (left < min) min = left;
            if (bottom < min) min = bottom;
            if (right < min) min = right;

            // print number based on layer
            printf("%d", n - min);
        }
        printf("\n");
    }

    return 0;
}
