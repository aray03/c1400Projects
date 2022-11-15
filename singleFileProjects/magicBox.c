#include <stdio.h>
/*
By:		Aidan Andersen
Date:	9/13/2022

Program name: Magic Box
Description: This asks the user to enter numbers from 1-16 in any order,
then it displays the numbes in a 4*4 space.
It also displays the sum of the rows and asum of all of the various columns

Function Title: main

Inputs: none
Outputs: none



Pseudocode
Begin
	Ask for numbers
	Get number inputs from user
	Print out row 1
	Print out row 2
	Print out row 3       
	Print out row 4
	Print out row 1 sum
	Print out row 2 sum
	Print out row 3 sum
	print out row 4 sum
	Print out col 1 sum
	Print out col 2 sum
	Print out col 3 sum
	Print out col 4 sum
	Print \ diagonal sum
	Prints / diagonal sum
End

*/

int main(void) {

	int a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4;
	//Ask for numbers
	//Get number inputs from user
	printf("Enter Numbers 1-16: ");
	scanf_s("%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &b1, &b2, &b3, &b4);
	scanf_s("%d%d%d%d%d%d%d%d", &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4);

	printf("-------------------------------------------------");
	printf("\n\n\t%d\t%d\t%d\t%d\n\n", a1, a2, a3, a4);//Print out row 1
	printf("\t%d\t%d\t%d\t%d\n\n", b1, b2, b3, b4);//Print out row 2
	printf("\t%d\t%d\t%d\t%d\n\n", c1, c2, c3, c4);//Print out row 3
	printf("\t%d\t%d\t%d\t%d\n\n", d1, d2, d3, d4);//Print out row 4

	printf("\tRow Sums: %d ", (a1 + a2 + a3 + a4));//Print out row 1 sum
	printf("%d ", (b1 + b2 + b3 + b4));//Print out row 2 sum
	printf("%d ", (c1 + c2 + c3 + c4));//Print out row 3 sum
	printf("%d\n", (d1 + d2 + d3 + d4));//print out row 4 sum

	printf("\tColumn Sums: %d ", (a1 + b1 + c1 + d1));//Print out col 1 sum
	printf("%d ", (a2 + b2 + c2 + d2));//Print out col 2 sum
	printf("%d ", (a3 + b3 + c3 + d3));//Print out col 3 sum
	printf("%d\n", (a4 + b4 + c4 + d4));//Print out col 4 sum

	printf("\tDiagonal \\: %d\n", (a1 + b2 + c3 + d4));//Prints \ diagonal sum
	printf("\tDiagonal /: %d\n", (a4 + b3 + c2 + d1));//Prints / diagonal sum

	printf("\n-------------------------------------------------");

	return 0;
}

