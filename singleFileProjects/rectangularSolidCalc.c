/*
Program: volume.c

Summary: compute the volue of a rectangular solid

Psudocode:

Begin
	ask for height
	get height
	ask for width
	get width
	ask for length
	get length
	volume = height * length * width
	print volume
End	
	*/

#include <stdio.h>

int(main(void)) {

	int height, width, length, volume;

	printf("Enter Height: ");
	scanf_s("%d", &height);

	printf("\nEnter Width: ");
	scanf_s("%d", &width);

	printf("\nEnter Length: ");
	scanf_s("%d", &length);

	volume = height * width * length;

	printf("\n\nVolume: %d", volume);

	return 0;
	
}
