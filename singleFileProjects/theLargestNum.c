#include <stdio.h>
/*
*	Recitation 
*	9/27/2022
* 
	Time: 8:24.29
*  Not bad time wise. Could have saved a lot of time not adding the extra stuff at the end, and accidentally using biggest.
* 
* 
* Find the largest number in a set of numbers the user inputs, stops if user inputs 0 or negative number
* 
*/

int main(void) {
	int looping = 1;
	float biggest = -1;
	float currentNum;
	while (looping) {
	
		printf("Enter a number: ");
		
		scanf_s("%f", &currentNum);

		if (currentNum <= 0) {
			looping = 0;
		}
		else {
			if (currentNum > biggest) {
				biggest = currentNum;
			}

		}



	}

	if (biggest == -1) {
		printf("Error: No Number Entered! Please try again.\n\n");
	}
	else {
		printf("The largest number entered was %.2f\n\n", biggest);
	}

	

	return 0;
}