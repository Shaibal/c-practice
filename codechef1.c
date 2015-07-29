/*
This program is a solution to  codechef problem 
https://www.codechef.com/problems/HS08TEST

Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US.

Calculate Pooja's account balance after an attempted transaction.

Input

Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.
Output

Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the transaction, output the current bank balance.
Example - Successful Transaction

Input:
30 120.00
Output:
89.50

Example - Insufficient Funds

Input:
300 120.00
Output:
120.00
*/

#include <stdio.h>
#define CHARGE 0.5
int main() {
	float withdrawAmount;
	float total;
	scanf("%f", &withdrawAmount);
	scanf("%f", &total);
	if (0 < withdrawAmount && withdrawAmount <= 2000 && 0<=total && total<=2000) {
		if ((int)withdrawAmount % 5 == 0 ) {
			if ( (withdrawAmount + CHARGE) <= total) {
				total -= (withdrawAmount + CHARGE);
			}

		}
		printf("%.2f\n", total);
	}
	return 0;
}