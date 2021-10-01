#include <stdio.h>

int main(void) {

	int input;
	printf ("please enter a number greater than 5 and less than 10\n");
	scanf("%d", &input);
	//TODO: please replace ??? with an compound conditional expression 
	//TODO: please do not modify anywhere else
	//TODO: the expected behavior of the program is to print out valid data!:) only when
	//TODO: user enters a number greater than 5 and less than 10, any other number will 
	//TODO: be stuck in the loop and continue to ask for inputs.
	while(???) {
		printf ("invalid number\n");
		printf ("please enter a number greater than 5 and less than 10\n");
		scanf("%d", &input);
	}
	printf("valid data!:)\n");
	return 0;
}
