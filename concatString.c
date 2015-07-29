// This program will concat 2 strings

#include <stdio.h>
#include <string.h>

void mystrcat(char dest[], char src[]) {
	int i=0, j = 0;
	while (dest[i] != '\0') {
		i++;
	}
	while (src[j] != '\0' && src[j] != '\n') {
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
}

void main () {
	char string1[] = "Water";
	char string2[10];
	fgets(string2,10,stdin);
	mystrcat(string1,string2);
	printf("%s\n",string1);
	//printf("%s\n",strcat(string1,string2));	
}