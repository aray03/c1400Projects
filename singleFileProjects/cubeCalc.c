#include <stdio.h>
/*
Write a program that computes the volume of a cube

The program should:
1. Prompt USer for a side using printf()
2. Get length using scanf
3. Compute the volume of a cube
4.Print the volume of a cube using printf

//Begin
//Ask user for length of side
//Initialize int of sideLen
//Get side from user
//Compute volume
//Print answer

*/

int main(void) {

	printf("Enter length of side: ");//Ask user for length of side

	int sideLen;//Initialize int of sideLen
	scanf("%d", &sideLen);//Get side from user

	sideLen = sideLen * sideLen * sideLen;//Compute volume

	printf("Volume of Cube: %d", sideLen); //print answer

}
