#include<stdio.h>
int main(void) {
	int feet, fathoms;
	fathoms = 2;
	feet = fathoms * 2;
	printf("there are %d feet in %d fathoms!\n", feet, fathoms);
	printf("yes, i said %d feet!\n", 6 * fathoms);

	return 0;
}