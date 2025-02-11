#include <stdio.h>

int main() {
	int quotient;
	int rem;
	int i = 0;
	int binnum[32];
	printf("Enter the decimal number for conversion to binary: ");
	scanf("%d", &quotient);
	
	if (quotient == 0) {
		printf("0\n");
		return 0;
	}

	while (quotient > 0) {
		rem = quotient % 2;
		quotient = quotient / 2;
		binnum[i] = rem;
		i++;
	}
	printf("Binary representation: ");
	for (i = i - 1; i >= 0; i--) {
		printf("%d", binnum[i]);
	}
	printf("\n");
	return 0;

}
