#include "stack.h"

int contents[STACK_SIZE];


int top = 0;

/*
Function Title: make_empty

Summary:

Inputs: none
Outputs: none

Compile instructions: use makefile

Pseudocode
Begin
	set top to 0
End
*/
void make_empty(void) {//Begin
	top = 0; //set top to 0
}//End

/*
Function Title: is_empty

Summary: checks to see if the stack is empty

Inputs: none
Outputs: bool if stack is empty

Compile instructions: use makefile

Pseudocode
Begin
	returns if stack is empty
End
*/
bool is_empty(void) {//Begin
	return top == 0; //returns if stack is empty
}//End

/*
Function Title: is_full

Summary: checks to see if stack is full

Inputs: none
Outputs: returns an int to see if stack is full

Compile instructions: use makefile

Pseudocode
Begin
	returns if the stack is full
End
*/
int is_full(void) {//Begin
	return top == STACK_SIZE; //returns if the stack is full
}//End

/*
Function Title: push

Summary: puts contents on top of the stack

Inputs: integer
Outputs: none

Compile instructions: use makefile

Pseudocode
Begin
	if the stack is full
		call stack_overflow
	else
		put the new item onn the top of the stack
End
*/
void push(int i) {//Begin
	if (is_full()) { //if the stack is full
		stack_overflow(); //call stack_overflow
	}
	else{ //else
		contents[top++] = i; //put the new item onn the top of the stack
	}
}//End

/*
Function Title: pop

Summary: pops out the top of the stack

Inputs: none
Outputs: int

Compile instructions: use makefile

Pseudocode
Begin
	if the stack is empty
		call stack_underflow
	else
		return the top's contents
End
*/
int pop(void) { //Begin
	
	
		if (is_empty()) { //if the stack is empty
		stack_underflow(); //call stack_underflow
		
	}
	else { //else
		return contents[--top]; //return the top's contents
	}
}//End

/*
Function Title: stack_overflow

Summary: prints out that the function has been overflowed and terminates

Inputs: none
Outputs: none

Compile instructions: use makefile

Pseudocode
Begin
	print the expression is too complex
	terminate the program
End
*/
void stack_overflow() {//Begin
	printf("Expression is too complex"); //print the expression is too complex
	exit(0); //terminate the program
}//End

/*
Function Title: stack_underflow

Summary: prints out that there arent enough opperands and terminates

Inputs: none
Outputs: none

Compile instructions: use makefile

Pseudocode
Begin
	print that there isnt enough opperands
	terminate the program
End
*/
void stack_underflow() { //Begin
	printf("Not enough operands in expression"); //print that there isnt enough opperands
	exit(0);//terminate the program
}//End
