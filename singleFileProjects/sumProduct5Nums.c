#include <stdio.h>

/*
	Summery: Ask for 5 numbers and print out the sum and products of those numbers
	Name: Aidan Andersen
	Date: 10/11/2022
	Time: 11:14.89
*/

int main(void){

	int e[5];


	for (int i = 1; i <= 5; i++) {
	
		printf("Enter integer %d: ", i);
		scanf_s("%d", &e[i-1]);
	}

	int sum = e[0];
	long int product = e[0];

	for (int i = 1; i < 5; i++) {
		sum += e[i];
		product *= e[i];
	}

	printf("Sum = %d\n", sum);

	printf("Product = %d\n", product);

}

