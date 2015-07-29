//This will print the sum of series 1^2 + 2^2 + 3^2 + ...... + n^2

#include <stdio.h>

void main () {
	printf("Enter a positive number.\n");
	int num;
	scanf("%d", &num);
	int sum = 0;
	int i;
	for (i=0; i<=num; i++) {
		sum += i*i;
	}	

	printf("The square sum of the series till %d is %d\n", num, sum);
}
