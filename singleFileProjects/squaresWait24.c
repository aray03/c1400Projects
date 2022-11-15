#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	char f;
	f = getchar();

	for (i = 1; i <= n; i++) {
		printf("%10d%10d%\n", i, i * i);

		if (i % 24 == 0){
			printf("Press Enter to continue...");
			f = getchar();
			
		}
	}

	

	return 0;
}