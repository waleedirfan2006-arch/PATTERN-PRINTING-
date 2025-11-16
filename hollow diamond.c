#include <stdio.h>

int main() {
    int n, i, j, space;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    space = n - 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
        space--;
    }
    space = 1;
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= space; j++)
            printf(" ");
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
        space++;
    }
    return 0;
}
