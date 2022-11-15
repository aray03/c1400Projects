#include <stdio.h>
#include <math.h>

/*
By:		Aidan Andersen
Date:	10/4/2022
Function Title: Main

Summary: Asks the user to enter a number, and the program outputs that
number's square root 5 number places out.

Inputs: none
Outputs: none

Compile instructions: gcc Source.c -o Source.exe

Pseudocode
Begin
	print to prompt user for a pos num
	gets user input for a number
	while "loop" equals 1
		compute the average
		if y minus the number average is less than .00001
			set "loop" to 0
		else
			set y to the average
	print the square root
	use getchar to stall
End


*/


int main(void) { //Begin

	double xNum, numAvg; 
	
	// x is user input, y is the current number.

	printf("Enter a positive number: ");//print to prompt user for a pos num
	scanf("%lf", &xNum); //gets user input for a number

	double yNum = 1;

	int loop = 1;
	while (loop == 1) { //while "loop" equals 1

		numAvg = (yNum + xNum / yNum) / 2; //compute the average

		//if y minus the number average is less than .00001
		if (fabs(yNum - numAvg) <= .00001) { 
			loop = 0; //set "loop" to 0
		}
		else { //else
			yNum = numAvg; //set y to the average
		}

	}

	printf("Square root: %.5f", yNum); //print the square root

	char c = getchar(); //use getchar to stall
	return 0; //End

}






