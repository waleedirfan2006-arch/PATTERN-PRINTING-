#include <stdio.h>

int main() {
    int n = 6; // number of rows (A to F)

    for (int i = 0; i < n; i++) {

        // print spaces
        for (int s = 0; s < i; s++) {
            printf(" ");
        }

        // print increasing letters
        for (char ch = 'A' + i; ch <= 'F'; ch++) {
            printf("%c", ch);
        }

        // print decreasing letters
        for (char ch = 'F' - 1; ch >= 'A' + i; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}