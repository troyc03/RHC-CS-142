#include <stdio.h>
int main() {
        int quotient;
        int rem;
        int i = 0;
        int decnum[5];
        printf("Enter the decimal number for conversion to binary: \n");
        scanf("%d", &quotient);
        while (i < 5) {
                rem = quotient % 2;
                quotient = quotient / 2;
                decnum[i] = rem;
                i++;

        }
        printf("\n");
        for (i = i - 1; i >= 0; i--) {
                printf("%d", decnum[i]);
                printf("\n");
                return 0;
        }

}