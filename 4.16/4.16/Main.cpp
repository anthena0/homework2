#include<stdio.h>

int i, j;

int main()
{
	printf("(A)");
	printf("\n");
	for (i = 0; i < 10; i++)
	{

		for (j = 0; j <= i; j++)
		{

			printf("*");


		}
		printf("\n");

	}
	
	printf("(B)");
	printf("\n");

	for (i = 10; i > 0; i--)
	{

		for (j = 0; j < i; j++)
		{

			printf("*");


		}
		printf("\n");

	}

	printf("(C)");
	printf("\n");


	int length = 10;
	for (int i = length; i >= 1; i--) {
		for (int j = 1; j <= length - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}

	printf("(D)");
	printf("\n");

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}