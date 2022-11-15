#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
By:		Aidan Andersen
Date:	10/17/2022

Function Title: mathNerd

Summary: Computes a special polynomial from the double given

Inputs: double named x
Outputs: double

Compile instructions: gcc Source.c -o Source.exe

Pseudocode
Begin
	set total to 0
	add 2x^5 to total
	add 3x^4 to total
	subtract x^3 from the total
	subtract 5x^2 from the total
	add 6x to the total
	subtract 7 from the total
	return the total
End

*/

double mathNerd(double x) {
	double total = 0.0; //set total to 0

	total = total + ((x * x * x * x * x) * 2.0); //add 2x^5 to total
	total = total + (x * x * x * x) * 3.0; //add 3x^4 to total

	total = total - (x * x * x); //subtract x^3 from the total
	total = total - (x * x) * 5.0; //subtract 5x^2 from the total
	total = total + (6.0 * x); //add 6x to the total
	total = total - 7.0; //subtract 7 from the total

	return total; //return the total

}

/*
Function Title: main

Summary: Creates a 10/10 grid and moves around it using the alphabet

Inputs: none
Outputs: none

Compile instructions: gcc Source.c -o Source.exe

Pseudocode
Begin
	prints to explain program
	prints math done in program
	prints to prompt user to enter an x
	scanf to get user input
	call mathNerd to use x
End
*/
int main(void) { //Begin

	printf("This program calculates the following polynomial:\n"); //prints to explain program
	printf("2x^5 + 3x^4 - x^3 - 5x^2 + 6x - 7\n"); //prints math done in program
	printf("Please enter a value for x: "); //prints to prompt user to enter an x

	double x = 0;
	scanf("%lf", &x); //scanf to get user input

	printf("Result: %.8lf", mathNerd(x)); //call mathNerd to use x

	return 0;//End

}