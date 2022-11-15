#include <stdio.h>

/*
Chapter 4 progarmming assignment 1

Summary: Swaps Numbers 1 and 2, taken from 1 number input


//Completed in 5:42.99

Psudocode
print Enter Number to prompt user
get number input from user
do math to divide number to get number 2
do math to get the remainder
print the numbers from eariler but swapped


*/




int main(void) {

	int number1, number2;

	printf("Enter Number: "); //print Enter Number to prompt user
	scanf_s("%d", &number1); //get number input from user

	number2 = number1 / 10; //do math to divide number to get number 2
	number1 = number1 % 10; //do math to get the remainder

	printf("Number Swapped: %d%d", number1, number2); //print the numbers from eariler but swapped


}