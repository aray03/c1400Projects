#include "stack.h"


/*
Function Title: main

Summary:Does the calculations from what the user inputs.

Inputs: none
Outputs: none

Compile instructions: use makefile


Pseudocode
Begin
	create a while loop that runs forever
		print to enter the rpn expression
		clear the stack
		make a for loop i to the stack size
			get user input
			if it is a number
				put it into the array
			if else it is a \n
				print out the answer
				stops current for loop
			if adding opperands
			if subtracking opperands
			if multiplying opperands
			if dividing opperands
			if not a usable char
				print error
				terminate program
		print a new line
End
*/


int main(void) { //Begin

	while(1){ //create a while loop that runs forever

		make_empty(); //clear the stack

		printf("Enter an RPN expression: ");

		for (int i = 0; i < STACK_SIZE; i++) { //make a for loop i to the stack size

			char ch;
			scanf(" %c", &ch); //get user input


			//printf("%d\n", ch)
			if (48 <= ch && ch <= 57) { //if it is a number
				push(ch-48); //put it into the array
			}
			else if (ch == 61) { //if else it is a \n
				printf("%d", pop()); //print out the answer
				i = STACK_SIZE+5; //stops current for loop
			}
			//if adding opperands
			else if (ch == 43) {
				push(pop() + pop());
			}
			//if subtracting opperands;
			else if (ch == 45) {
				int temp = pop();
				push(pop() - temp);
			}
			//if multipling opperands
			else if (ch == 42) {
				push(pop() * pop());
			}
			//if dividing opperands
			else if (ch == 47) {
				int temp = pop();
				push(pop() / temp);
			}
			//if not a usable char
			else {
				printf("Error: Only integers 1-9 accepted"); //print error
				exit(1); //terminate program
			}

		
		}
		printf("\n"); //print a new line
	}


	return 0; //End
}