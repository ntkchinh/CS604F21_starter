#include <stdio.h>
int main(void) {


	int t;
	int grades[20]; //we declare an array of 20 grades because the question assumes the capacity of the class is 20
	int i = 0; //i can represent how many grades are stored in array.

	printf("Enter a grade:\n");
	scanf("%d", &t);

	//TODO: we do not know how many grades we will get eventually -- the max is 20 grades, but
	//TODO: some students could be absent. We will keep on accepting grades until we see a
	//TODO: -1. Grades can't be negative, and we are using -1 as a sentinel to end the input.
	
	while(???){ // TODO: replace ??? with condition to check if it is -1
		//TODO: it is not -1, because we are in the loop
		//TODO: now add the grade t to the grades array, and increase index i by 1.
		//TODO: read a new grade and store in t, why? because we have already processed what is in t
		//TODO: we are ready to process next grade, we will repeat read->check->process
		//TODO:                                                      ^             |	
		//TODO:                                                      |_____________|
		//TODO:  in which read is to scan data into t, check is to make sure t is not terminator -1
		//TODO: and process is to store t into grades. Double check your loop body follows this workflow
	}
	
	
	
	
	float average; //do not modify this declaration

	//TODO: now complete the folloing loop to find the average of the class grades, make sure the result is stored in the
	//TODO: float average declared as above

	//do not change the following printf
	printf("the average grade of the class is %.2f", average);

	return 0;
}
