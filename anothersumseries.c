#include <stdio.h>

void main() {
        printf("This program will print the total of 1-2+3-4+5-6.... up to nth term\n");
        printf("Enter the value of n : ");
        int num;
        scanf("%d",&num);
        int i,sum =0;
        for (i = 1; i<= num; i++ ) {
		if(i%2 == 1) {
			sum += i;
		} else {
			sum -= i;
		}	
	}
	printf ("The sum of this series till nth term for n = %d is %d\n", num, sum);
}

