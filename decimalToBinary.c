// This program will convert a decimal number to binary number.
/*
notes: Divide by 2 rule is used to convert decimal to binary

decimal 6
6 / 2, R0 = 0
3 / 2, R1 = 1
1 / 2, R2 = 1

decimal 9
9 / 2, R0 = 1
4 / 2, R1 = 0
2 / 2, R2 = 0
1 / 2, R3 = 1

*/
#include <stdio.h>
void convertDecimaltoBinary(int num);

void main () {
	printf("Enter a number to convert to binary : \n");
	int num;
	scanf("%d", &num);
	while (num < 0) {
		printf("Please enter a non negative number\n");
		scanf("%d", &num);
	}
	if (num == 0) {
		printf("The decimal number 0 in binary is 0\n");
	} else {
		convertDecimaltoBinary(num);
	}
}


void convertDecimaltoBinary(int num) {
	int arr[10],i = 0;
	int temp = num;
	while (num !=0) {
		arr[i] = num % 2;
		num = num / 2;
		i++;
	}

	printf("The decimal number %d in binary is ", temp);
	int j;
	for (j = i-1; j>=0; j--) {
		printf("%d",arr[j]);
	}
	printf("\n");

}

