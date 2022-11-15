#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
By:		Aidan Andersen
Date:	10/17/2022
Function Title: Main

Summary: Creates a 10/10 grid and moves around it using the alphabet

Inputs: none
Outputs: none

Compile instructions: gcc Source.c -o Source.exe

Pseudocode
Begin
	loop i that runs 10 times
		loop j that runs 10 times
			adds '.' to the grid
	places 'A' in grid
	while abc wordcount < 250
	randomly picks a direction
	checks if the direction is usable
		plots direction
		add 1 to abc count
	prints finished grid
	End


*/


int main(void) {

	//Creating grid

	char grid[10][10];
	char abcList[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z'
	};
	
	
	for (int i = 0; i < 10; i++) { //loop i that runs 10 times
		for (int j = 0; j < 10; j++){ //loop j that runs 10 times
			grid[i][j] = '.'; //adds '.' to the grid
		}
	}

	int abcCount = 1;
	int posX = 0;
	int posY = 0;
	int direction = -1;

	//Directions 1: UP, 2: RIGHT, 3: DOWN, 4: LEFT
	int UP = 1;
	int RIGHT = 2;
	int DOWN = 3;
	int LEFT = 4;

	int upCheck = 0, downCheck = 0, rightCheck = 0, leftCheck = 0;

	grid[0][0] = 'A'; //places 'A' in grid

	srand((unsigned) time(NULL));

	int loop = 0;

	// 1: UP, 2: RIGHT, 3: DOWN, 4: LEFT
	while (abcCount < 250) { //while abc wordcount < 250
		
		direction = (rand() % 4)+1; //randomly picks a direction

	//	printf("%d", direction);

		if (direction == UP) { //checks if the direction is usable
			if (posY - 1 > -1) {
				if (grid[posY - 1][posX] == '.') {
					posY = posY - 1;
					grid[posY][posX] = abcList[abcCount]; //plots direction
					abcCount += 1; //add 1 to abc count
					upCheck = downCheck = rightCheck = leftCheck = 0;
				}
				else {
					upCheck = 1;
				}
			}
			else {
				upCheck = 1;
			}
		}
		else if (direction == RIGHT) { //checks if the direction is usable
			if (posX + 1 < 10) {
				if (grid[posY][posX + 1] == '.') {
					posX = posX + 1;
					grid[posY][posX] = abcList[abcCount]; //plots direction
					abcCount += 1; //add 1 to abc count
					upCheck = downCheck = rightCheck = leftCheck = 0;
				}
				else {
					rightCheck = 1;
				}
			}
			else {
				rightCheck = 1;
			}
		}
		else if (direction == DOWN) { //checks if the direction is usable
			if (posY + 1 < 10) {
				if (grid[posY + 1][posX] == '.') {
					posY = posY + 1;
					grid[posY][posX] = abcList[abcCount]; //plots direction
					abcCount += 1; //add 1 to abc count
					upCheck = downCheck = rightCheck = leftCheck = 0;
				}
				else {
					downCheck = 1;
				}
			}
			else {
				downCheck = 1;
			}
		}
		else if (direction == LEFT) { //checks if the direction is usable
			if (posX - 1 > -1) {
				if (grid[posY][posX - 1] == '.') {
					posX = posX - 1;
					grid[posY][posX] = abcList[abcCount]; //plots direction
					abcCount += 1; //add 1 to abc count
					upCheck = downCheck = rightCheck = leftCheck = 0;
				}
				else {
					leftCheck = 1;
				}
			}
			else {
				leftCheck = 1;
			}
		}
		
		if (abcCount > 25) {
			abcCount = 0;

			//	printf("YEET");
		}

		if (upCheck + downCheck + rightCheck + leftCheck == 4) {
			abcCount = 500;
		}

		
		
	//	printf("%d\n", abcCount);
		
	}


	printf("\n"); //prints finished grid
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf(" %c", grid[i][j]); 
		}
		printf("\n");
	}
	
	return 0;
}