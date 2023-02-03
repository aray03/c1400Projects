#include <stdio.h>

/*
By:		Aidan Andersen
Date:	9/19/2022
Function Title: Main

Summary: Asks the user for 12 digits of an EAN then does the math necessary
to get the Check Digit

Inputs: none
Outputs: none

Compile instructions: gcc hello.c -o hello.exe

Pseudocode
Begin
	print to tell user to enter 12 digits
	gets user input for digits
	create variable firstTotal for even digits
	create variable secondTotal for odd digits
	times firstTotal by 3 and add it to secondTotal
	subtract 1 from secondTotal
	divide socondTotal by 10 and get the remainder
	subtract the remainder from 9
	print check digit
End


*/


int main() {
	//Begin
	printf("Enter the first 12 digits of an EAN: "); //print to tell user to enter 12 digits

	int a1, b2, c3, d4, e5, f6, g7, h8, i9, j10, k11, l12;
	int check;

	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a1, &b2, &c3, &d4, &e5, &f6, &g7, &h8, &i9, &j10, &k11, &l12); //gets user input for digits


	int firstTotal = b2 + d4 + f6 + h8 + j10 + l12; //create variable firstTotal for even digits
	int secondTotal = a1 + c3 + e5 + g7 + i9 + k11; // create variable secondTotal for odd digits

	secondTotal = (firstTotal * 3) + secondTotal; //times firstTotal by 3 and add it to secondTotal

	secondTotal = secondTotal - 1; //subtract 1 from secondTotal

	check = secondTotal % 10; //divide socondTotal by 10 and get the remainder
	check = 9 - check;
	printf("Check Digit: %d", check); //print check digit

	return 0; //End


}
