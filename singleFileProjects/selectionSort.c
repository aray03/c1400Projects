#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
1 Serch array to find largest element, but at end of earray
2 call itself recursivly to find last pos in array

Time: 32:03.23 (Probably one of the first to finish, this one was a doosie)

*/

void selection_sort(int list[], int size);
int printArray(int list[]);

int main(void) {

	int list[100];
	int size;

	printf("This program sorts a series of integers using Selection Sort\n");
	printf("Enter the number of integers you want: ");
	scanf("%d", &size);

	//Creates the actual list using the provided size
	for (int i = 0; i < size; i++) {
		printf("Enter Integer #%d: ", i+1);
		scanf("%d", &list[i]);
	}
	
	//Prints the list as not sorted
	printf("\nNot Sorted: ");
	printArray(list, size);

	selection_sort(list, size);

	//Prints the list as sorted
	printf("\nSorted: ");
	printArray(list, size);

	return 0;
}

//Sorts an array using a recursive selection sort method
void selection_sort(int list[], int size) {b     
	if (size <= 1) {
		return list;
	}
	else {
		int largest = 0;
		for (int i = 0; i < size; i++) {
			if (list[i] > list[largest]) {
				largest = i;
			}
		}
		//Swaps the place values
		int temp = list[largest];
		list[largest] = list[size - 1];
		list[size - 1] = temp;

		return selection_sort(list, size - 1);

	}

}
//Prints out the array
int printArray(int list[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", list[i]);
	}
}