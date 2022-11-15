#include <stdio.h>


/*
By:		Aidan Andersen
Date:	9/27/2022
Function Title: Main

Summary: Asks the user to enter the integer n, which will be used to calculate
pi in n terms.

Inputs: none
Outputs: none

Compile instructions: gcc Source.c -o Source.exe

Pseudocode
Begin
	print to prompt the user to enter the value n to calc pi
	get the users input
	make a loop that runs n amount of places
		if "i" is an odd number
			take current num and subtract 4/(1 + 2 for every "i" we have)
		if "i" is an even number
			take current num and add 4/(1 + 2 for every "i" we have)
	print the approx of pi using n terms
End


*/

int main(void) {
	//Begin
	//print to prompt the user to enter the value n to calc pi
	printf("Enter an integer n. The value of pi will be calculated"); 
	printf("using n terms of an infinite series.\n");
	printf("n: ");

	int n;

	float currentNum = 0;

	scanf("%d", &n); //get the users input

	for (int i = 0; i < n; i++) { //make a loop that runs n amount of places
		if (i % 2 == 1) { //if "i" is an odd number
			//take current num and subtract 4 / (1 + 2 for every "i" we have)
			currentNum = currentNum - (4.0 / (1 + i * 2)); 

			//printf("%f \n", currentNum);
		}
		else { //if "i" is an even number
			//take current num and add 4/(1 + 2 for every "i" we have)
			currentNum = currentNum + (4.0 / (1 + i * 2));
		}
	}

	//print the approx of pi using n terms
	printf("The approximation of pi using %d terms is %f.", n, currentNum); 

	return 0; //End
}