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
	scanf("%d", &height);

	printf("\nEnter Width: ");
	scanf("%d", &width);

	printf("\nEnter Length: ");
	scanf("%d", &length);

	volume = height * width * length;

	printf("\n\nVolume: %d", volume);

	return 0;
	
}
