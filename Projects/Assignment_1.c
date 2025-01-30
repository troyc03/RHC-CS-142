#include <stdio.h>
#include <math.h>

int main() {
   
    int binNum[8];
    int num;
    int result = 0;
    int i;
    int j = 0;

    printf("Enter a binary number with eight digits: ");
    for (i = 0; i < 8; i++) {
        scanf("%d", &binNum[i]);
    }
    for (i = i - 1; i >= 0; i--) {
        result = result + (binNum[i] * pow(2, j));
        ++j;
    }

    printf("The decimal number is %d", result);
    return 0;
}