/*
This program will check if a number is palindrome or not.
*/
#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int num);
bool isPalindrome2(int num);

void main() {
	printf("Please enter a number to check if it is a palindrome.\n");
	int num;
	int i;
	for (i=0; i<10; i++) {
		scanf("%d", &num);
		if (isPalindrome2(num)) {
			printf("%d is a palindrome\n", num);
		} else {
			printf("%d is not a palindrome\n", num);
		}
	}
}

bool isPalindrome2(int num) {
	int temp = num;
	int digit = 0;
	int reverseNum = 0;
	while ( num > 0 ) {
		digit = (num % 10);
		reverseNum = (reverseNum*10) + digit;
		num /= 10; 			
	}
	if (temp == reverseNum) {
		return true;
	} else {
		return false;
	}
}

bool isPalindrome(int num) {
	int a[20];
	int i = 0;
	while (num > 0) {
		a[i] = num % 10;
		i++;
		num /= 10;
	}
	i--;
	int j;
	bool palindrome = true;
	for (j=0; j<= i/2; j++) {
		if (a[j] != a[i-j]){
			palindrome = false;
			break;
		}
	}
	return palindrome;
}
