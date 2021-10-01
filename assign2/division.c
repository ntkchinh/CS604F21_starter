
#include <stdio.h>

int main() {
	float res;
	int i = 3;
	int p = 2;		

	res =  i / p; 
	//TODO: this prints out 1.000000 because / is an integer division
	//TODO: please modify the expression so the division yields a real number (1.500000 in this case) WITHOUT changing the declared type of i or p.	
	//hint: try to make either divisor or dividend a float type
	printf("%f\n", res);
	return 0;
}
