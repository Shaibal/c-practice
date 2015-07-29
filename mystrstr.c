// This program will check if a substring is inside a string.

#include <stdio.h>
#include <stdlib.h>

// This string length function uses pointers to find the string length
int myStrLen(char *s) {
	int i=0;
	// checking value at pointer location sand incrementing till we reach null value
	while (*(s+i)) {
		i++;
	}
	return i;
}

// This string length function uses array element to find the string length
/*int myStrLen2(char s[]) {
	int i=0;
	while (s[i]!='\0') {
		i++;
	}
	return i;
}
*/

void main () {
	char *string1 = "This is the haystack, find the needle";
	int stringLength = myStrLen(string1);
	printf("The length of the string %s is %d\n",string1, stringLength );

	char *string2 = malloc(81);
	printf("Please enter a string to search in our stored string.\n");

	fgets (string2, 80, stdin);
	// However fgets might return the '\n' at the end of user input. So following is a good practice to get just the string.
	int targetLength = myStrLen(string2);
	if (string2[targetLength - 1] == '\n') {
		string2[targetLength - 1] = '\0';
	}
	targetLength = myStrLen(string2);
	printf("The length of the string '%s' is %d\n",string2, targetLength );

	int targetAt = myStrStr(string1, string2);

	if ( targetAt < stringLength) {
		printf("The target is in the source string, starting at position %d\n", targetAt);
		printf("%s\n", string1+targetAt );
	} else {
		printf("The target is not in the source string.\n");
	}
}

int myStrStr (char *myString, char *target) {
	int i,j;
	int stringLength = myStrLen(myString);
	int targetLength = myStrLen(target);
	if (stringLength < targetLength) {
		return stringLength;
	}
	if (targetLength == 0) {
		return 0;
	}
	for (i=0; i <= stringLength - targetLength ; i++) {
		for (j = 0; j < targetLength; j++) {
			if (myString[i+j] != target[j]) {
				break;
			}
		}
		// will only be true if a target match has been found
		if (j==targetLength) {
			return i;
		}
	}
	return stringLength;
}