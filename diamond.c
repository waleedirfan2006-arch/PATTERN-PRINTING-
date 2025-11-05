#include <stdio.h>

int main() {
    int n, i, j, k, space;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper half
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        for (k = i - 1; k >= 1; k--)
            printf("%d ", k);
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        for (k = i - 1; k >= 1; k--)
            printf("%d ", k);
        printf("\n");
    }

    return 0;
}
