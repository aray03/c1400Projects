#include <stdio.h>
#include <ctype.h>


/*
Function Title: main

Summary:Array 

Inputs: none
Outputs: none

Compile instructions: gcc Source.c -o Source.exe


Pseudocode
Begin

	print enter a word or phrase
	for i to 200:
		get a char from user input
		set the letter to be lowercase
		if the character is a letter:
			put it in the array
			size = size + 1
		else if the currentNum equals 10
			set i to 201
		

	Traverse the array using their various addresses
	travese array frontward and backward to check if it is the same
		if they are not the same set isPalindrome to 0

	if its a palindrome
		print The word/phrase is a palindrome
	if its not a palindrome
		print the word/phrase is not a palindrome
End
*/



int main(void) {
	
	int theArray[200];
	int* p = theArray;

	int size = 0;

	printf("Enter a word/phrase:"); //Get user input of phrase
	
	for (int i = 0; i < 200; i++) { //for i to 200:
		int currentNum = getchar();  //get a char from user input
	
		currentNum = tolower(currentNum); //set the letter to be lowercase
		if (currentNum >= 97 && currentNum <= 122 ) {//if the character is a letter:
			*(p + size) = currentNum; //put it in the array
			size = size + 1; //size = size + 1
		}
		else if (currentNum == 10) { //else if the currentNum equals 10
			i = 201; //set i to 201
		}	
	}

	
	int isPalindrome = 1;
	
	//Traverse the array using their various addresses
	for (int i = 0; i < size; i++) {

		//travese array frontward and backward to check if it is the same
		int forward = *(p + i);
		int backward = *(p + size - 1 - i);



		if (forward != backward) {
			//if they are not the same set isPalindrome to 0
			isPalindrome = 0;
		}

	}

	if (isPalindrome) { //if its a palindrome
		//print The word/phrase is a palindrome
		printf("The word/phrase is a palindrome.");
	}
	else { //if its not a palindrome
		//print the word/phrase is not a palindrome
		printf("The word/phrase is not a palindrome.");
	}
	
}




