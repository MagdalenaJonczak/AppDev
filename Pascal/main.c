#include <stdio.h>
#include "Pascal.h"

int main(void) {
	//printf("4! = %d\n", factorial(4));
	//printf("b(5,2) = %d\n", binomial(5, 2));

	printf("\033[1;36m");			//033 in octal means ESC key (0x1B in hex), 1(brighter), 36(color of the background) in VT

	int n, k;
	for (n = 0; n < ROWS; n++) { // outer loop for rows
		for (int i = 0; i < ROWS - n; i++) printf("  ");

		for (k = 0; k <= n; k++) {
			printf("%4d", binomial(n, k));
		}
		printf("\n"); // make a new row
	}
	printf("\033[0m");

}