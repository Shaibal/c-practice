// This program will print the sum of 1^1 + 2^2 + 3^3 + 4^4 + ..... + n^n
// I will not be using the math.h library, hence no use of pow function.

#include <stdio.h>

void main() {
	printf("Please enter a number: ");
	int num;
	scanf("%d", &num);
	int i,j,k, sum = 0;
	i = 1;
	while (i <= num) {
		k = 1;
		for (j=1;j<=i;j++) {
			k *= i;
		}
		sum += k;
		i++;	
	}
	printf("The sum of the series 1^1 + 2^2 + 3^3 + .... + n^n for n= %d is %d\n",num, sum);  
}
