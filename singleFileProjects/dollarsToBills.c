#include <stdio.h>

void pay_amount(int dollars, int* twenties, int* tens, int* fives, 
	int* twos, int* ones);

/*
Function Title: main

Summary: Breaks up a set amount of dollars into bills

Inputs: none
Outputs: none

Compile instructions: gcc Source.c -o Source.exe

Pseudocode
Begin
	print Enter amount to be broken into bills
	get user input of an integer
	call pay_amount()

	print out The following numbers of the specified bills are required
	print out the bills and their amounts
End
*/

int main(void) {
	//print Enter amount to be broken into bills
	printf("Enter an amount to be broken into bills: $"); 

	int dollars = 0, twenties = 0, tens = 0, fives = 0, twos = 0, ones = 0;
	
	
	scanf("%d", &dollars);//get user input of an integer
	
	//call pay_amount()
	pay_amount(dollars, &twenties, &tens, &fives, &twos, &ones);

	//print out The following numbers of the specified bills are required
	printf("The following numbers of the specified bills are required:\n");
	printf("$20: %d\n", twenties); //print out the bills and their amounts
	printf("$10: %d\n", tens);
	printf("$5: %d\n", fives);
	printf("$2: %d\n", twos);
	printf("$1: %d\n", ones);

}

/*
Function Title: pay_amount

Summary: Breaks up a set amount of dollars into bills

Inputs: int, int*, int*, int*, int, int*
Outputs: none

Compile instructions: gcc Source.c -o Source.exe

Pseudocode
Begin
	set the item in twenties to dollars/20
	set dollars to dollars mod 20
	set the item in tens to dollars/10
	set dollars to dollars mod 10
	set the item in fives to dollars/5
	set dollars to dollars mod 5
	set the item in twos to dollars/2
	set the item in ones to dollars mod 2
End
*/

void pay_amount(int dollars, int* twenties, int* tens, int* fives, 
	int* twos, int* ones) {
	

	*twenties = dollars / 20; //set the item in twenties to dollars/20
	dollars = dollars % 20; //set dollars to dollars mod 20

	*tens = dollars / 10; //set the item in tens to dollars/10
	dollars = dollars % 10; //set dollars to dollars mod 10

	*fives = dollars / 5; //set the item in fives to dollars/5
	dollars = dollars % 5; //set dollars to dollars mod 5

	*twos = dollars / 2; //set the item in twos to dollars/2
	*ones = dollars % 2; //set the item in ones to dollars mod 2


}