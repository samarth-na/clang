#include <stdio.h>

int main() {
	int decimalNumber;
	printf("Enter a decimal number: ");
	scanf("%d", &decimalNumber);

	int binary = 0, i = 0;

	while (decimalNumber > 0) {
		// Shift the current bit to the right and add it
		binary += (decimalNumber % 2) << i;
		// Update decimal number by dividing by 2
		decimalNumber /= 2;
		++i;  // Increment the shift position for the next iteration
	}

	printf("Binary representation: ");
	while (binary > 0) {
		printf("%d", binary & 1);  // Print the least significant bit
		binary >>= 1;			   // Shift right to check the next bit
	}
	printf("\n");

	return 0;
}
