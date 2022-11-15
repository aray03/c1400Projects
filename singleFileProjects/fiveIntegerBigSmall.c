#include <stdio.h>

/*
By:		Aidan Andersen
Date:	9/23/2022
Function Title: Main

Summary: Asks the user for 5 numbers and spits out the biggest and smallest numbers

Inputs: none
Outputs: none

Compile instructions: gcc Source.c -o Source.exe

Pseudocode
Begin

	print to tell user to input numbers
	get 5 numbers from user
	set biggest to one
	set smallest to one
	if the current biggest number is bigger than to two
		set the biggest number to two
	if the current biggest number is bigger than to three
		set the biggest number to three
	if the current biggest number is bigger than to four
		set the biggest number to four
	if the current biggest number is bigger than to five
		set the biggest number to five
	if the current smallest number is smaller than to two
		set the smallest number to two
	if the current smallest number is smaller than to three
		set the smallest number to three
	if the current smallest number is smaller than to four
		set the smallest number to four
	if the current smallest number is smaller than to five
		set the smallest number to five
	print out the largest integer
	print out the smallest integer
End


*/


int main(void) {
	//Begin

	int one, two, three, four, five, biggest, smallest;

	printf("Enter five integers in any order: "); //print to tell user to input numbers
	
	scanf("%d%d%d%d%d", &one, &two, &three, &four, &five); //get 5 numbers from user

	biggest = one; //set biggest to one
	smallest = one; //set smallest to one

	if (biggest < two) { //if the current biggest number is bigger than to two
		biggest = two; //set the biggest number to two
	}
	if (biggest < three) { //if the current biggest number is bigger than to three
		biggest = three; //set the biggest number to three
	}
	if (biggest < four) { //if the current biggest number is bigger than to four
		biggest = four; //set the biggest number to four
	}
	if (biggest < five) { //if the current biggest number is bigger than to five
		biggest = five; //set the biggest number to five
	}
	//Smallest
	if (smallest > two) { //if the current smallest number is smaller than to two
		smallest = two; //set the smallest number to two
	}
	if (smallest > three) { //if the current smallest number is smaller than to three
		smallest = three; //set the smallest number to three
	}
	if (smallest > four) { //if the current smallest number is smaller than to four
		smallest = four; //set the smallest number to four
	}
	if (smallest > five) { //if the current smallest number is smaller than to five
		smallest = five; //set the smallest number to five
	}

	printf("Largest Integer: %d", biggest); //print out the largest integer
	printf("\nSmallest Integer: %d", smallest); //print out the smallest integer

	return 0; //End

}