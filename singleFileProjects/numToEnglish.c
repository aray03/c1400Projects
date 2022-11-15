#include <stdio.h>

/*
By:		Aidan Andersen
Date:	9/16/2022
Function Title: Main

Summary: Asks the user for a number between 1 and 99 and prints out the
number into its english counterpart

Inputs: none
Outputs: none

Compile instructions: gcc hello.c -o hello.exe

Pseudocode
Begin
	print to tell the user to enter a number between 1-99
	get user input
	print the english representation of a number is
	switch based on if the first number is 0, 1, or not
		case if first number is 0:
			print out number based on user input on 0-9
		case 1:
			print out number based on user input of 0-9
		case default:
			print out first number based on user input 2-9
			print out - if the second num doesn't equal 0
			print out second number based on user input 0-9
End


*/

int main(void) { //Begin
	
	printf("Enter a number between 1 and 99: "); //print to tell the user to enter a number between 1-99

	int firstNum, secondNum;

	scanf("%1d%1d", &firstNum,&secondNum); //get user input

	printf("The English representation of %d%d is ", firstNum, secondNum); //print "the english representation of a number is"

	
	switch (firstNum) { //switch based on if the first number is 0, 1, or not

		
		case 0: //case if first number is 0:
			switch (secondNum) { //print out number based on user input on 0 - 9

			case 0:
				printf("zero");
				break;

			case 1:
				printf("one");
				break;

			case 2:
				printf("two");
				break;

			case 3:
				printf("three");
				break;

			case 4:
				printf("four");
				break;

			case 5:
				printf("five");
				break;

			case 6:
				printf("six");
				break;

			case 7:
				printf("seven");
				break;

			case 8:
				printf("eight");
				break;

			case 9:
				printf("nine");
				break;
			default:
				break;
			}
			break;

		case 1: //case 1:
			switch (secondNum) { //print out number based on user input of 0-9

			case 0:
				printf("ten");
				break;

			case 1:
				printf("eleven");
				break;

			case 2:
				printf("twelve");
				break;

			case 3:
				printf("thirteen");
				break;

			case 4:
				printf("fourteen");
				break;

			case 5:
				printf("fifteen");
				break;

			case 6:
				printf("sixteen");
				break;

			case 7:
				printf("seventeen");
				break;

			case 8:
				printf("eighteen");
				break;

			case 9:
				printf("nineteen");
				break;
			}
			break;

		default: //case default:
			switch (firstNum) { //print out first number based on user input 2-9

				case 2:
					printf("twenty");
					break;

				case 3:
					printf("thirty");
					break;

				case 4:
					printf("forty");
					break;

				case 5:
					printf("fifty");
					break;

				case 6:
					printf("sixty");
					break;

				case 7:
					printf("seventy");
					break;

				case 8:
					printf("eighty");
					break;

				case 9:
					printf("ninety");
					break;	
			}

			if (secondNum != 0) {
				printf("-"); //print out - if the second num doesn't equal 0
			}
			 

			switch (secondNum) { //print out second number based on user input 0-9

				case 0:
					break;

				case 1:
					printf("one");
					break;

				case 2:
					printf("two");
					break;

				case 3:
					printf("three");
					break;

				case 4:
					printf("four");
					break;

				case 5:
					printf("five");
					break;

				case 6:
					printf("six");
					break;

				case 7:
					printf("seven");
					break;

				case 8:
					printf("eight");
					break;

				case 9:
					printf("nine");
					break;
			}
			
		}
	
	return 0; //End



}