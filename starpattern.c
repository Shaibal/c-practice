// This program prints some patterns made of * and . depending on input value.

#include <stdio.h>

void printPattern1(int num);
void printPattern2(int num);
void printPattern3(int num);
void printPattern4(int num);

void main () {
	printf("Enter a value for n to draw the patterns. n = ");
	int num;
	scanf("%d", &num);
	printf("Printing first pattern: \n");
	printPattern1(num);
	printf("Printing second pattern: \n");
	printPattern2(num);
	printf("Printing third pattern: \n");
	printPattern3(num);
	printf("Printing fourth pattern: \n");
	printPattern4(num);
}

void printPattern1(int num) {
/*
*..
**.
***
*/
	int i,j;
	for (i = 1; i<= num; i++) {
		j = 1;
		while (j<=num) {
			if(j<=i) {
				printf("*");	
			} else {
				printf(".");
			}
			j++;
		}
		printf("\n");			
	}

}

void printPattern2(int num) {
/*
***
.**
..*
*/
	int i,j;
	for (i = 1; i <= num; i++) {
		j=1;
		while (j<=num) {
			if (j<i) {
				printf(".");
			} else {
				printf("*");
			}
			j++;
		}
		printf("\n");
	}
}

void printPattern3(int num) {
/*
for n = 3
..*..
.***.
*****
*/
	int i, j, num2 ;
	num2 = (num * 2) - 1;
	i = 1;
	while (i <= num) {
		j = 1;
		while (j <= num2) {
			if (j > num-i && j < num+i) {
				printf("*");
			} else {
				printf(".");
			}
			j++;
		}

		i++;
		printf("\n");
	}
}

void printPattern4( int num ) {
/*
for n = 3
12321
.121.
..1..
*/	
	int i,j,num2, k;
	num2 = (num * 2) - 1;
	i = 1;
	while (i <= num) {
		j = 1;
		k = 0;
		while (j <= num2) {
			/*
			Notes:
			for num = 3, num2 = 5
			when i = 1, j = 1, print 1
			when i = 1, j = 2, print 2
			when i = 1, j = 3, print 3
			when i = 1, j = 1, print 2
			when i = 1, j = 1, print 1
			when i = 2, j = 1, print .
			when i = 2, j = 2, print 1
			when i = 2, j = 3, print 2
			when i = 2, j = 4, print 1
			when i = 2, j = 5, print .
			
			*/
			if (j >= i && j <= num2-i+1) {
				if (j<=num) {
					k++;
				} else {
					k--;
				}
				printf("%d", k);
			} else {
				printf(".");
			}
			j++;
		}
		printf("\n");
		i++;
	}
}
