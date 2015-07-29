// This program will print the sum of 1 + (2+3) + (4+5+6) + ....+ nth term.

#include <stdio.h>

void main() {
	printf("Enter a number: ");
	int num;
	scanf("%d", &num);
	int sum=0, i, j, k=1;
	for (i = 1; i<= num; i++) {
		j=0;
		while(j<i) {	
			sum += k;
			k++;
			j++;
		}
	}
	printf("The sum of series 1 + (2+3) + (4+5+6) + .... up to nth term, for n = %d is %d\n", num, sum);
}
