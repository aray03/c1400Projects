#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {

	int total = 0;
	for (int i = 0; i < argc; i++) {
		total = total + atoi(argv[i]);
	}

	printf("Total: %d", total);
}