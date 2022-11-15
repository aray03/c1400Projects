#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEBUG 0
/*
Function Title: main

Summary:Array

Inputs: Integer for word count
Outputs: none

Compile instructions: gcc Source.c -o Source.exe


Pseudocode
Begin
	uses arguments to create the worldcount
	create a loop ran based on the amount of words given
		print enter word
		gets user input of a word
		if it is the first loop:
			set the smallest and biggest to the first word
		if the new word is the biggest word
			set it to the biggest
		if the new word is the smallest word
			set it to the smallest
	print the smallest word
	print the largest word

End
*/

int main(int argc, char *argv[]) { //Begin
	//uses arguments to create the worldcount
	int wordCount = atoi(argv[argc - 1]);

	char biggest[100]; //create a loop ran based on the amount of words given
	char smallest[100];

	
	//create a loop ran based on the amount of words given
	for (int i = 0; i < wordCount; i++) {
		printf("Enter word: "); //print enter word
		char theWord[100] = ""; 
		scanf("%s", theWord); //gets user input of a word
		
		//if it is the first loop:
		if (i == 0) {
			//set the smallest and biggest to the first word
			strcpy(smallest, theWord);
			strcpy(biggest, theWord);
		}
		//if the new word is the biggest word
		if (strcmp(theWord, biggest) > 0) {
			//set it to the biggest
			strcpy(biggest, theWord);
		}
		//if the new word is the smallest word
		if (strcmp(theWord, smallest) < 0) {
			//set it to the smallest
			strcpy(smallest, theWord);
		}
	}
	//print the smallest word
	printf("Smallest word: %s\n", smallest);
	//print the largest word
	printf("Largest word: %s\n", biggest);
	
	return 0; //End
}