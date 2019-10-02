// convert numbers to words
// Finbar Berkon
// 06/03/18
// tut02 exercise 4

#include <stdio.h>

int main(void) {
	int input;

	printf("Please enter an integer: ");
	prinf("%d", &input);
	
	printf("You have entered ");

	if (input < 1) {
		printf("a number less than one");
	}

	// if 1-5, add that number to end of line
	else if (input == 1)
	{
		printf("one");
	}
	else if (input == 2)
	{
		printf("two");
	}
	else if (input == 3)
	{
		printf("You have entered three.\n");
	}
	else if (input == 4)
	{
		printf("You have entered four.\n");
	}
	else if (input == 5)
	{
		printf("You have entered five.\n");
	}

	else if (input > 5)
	{
		printf("You have entered a number greater than five.\n");
	}
	
	printf(".\n");

	return 0;
}
