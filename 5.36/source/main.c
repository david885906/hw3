#include<stdio.h>
#include<stdlib.h>

void hanoi(int n, char A, char B, char C);

int main(void)
{
	int n;

	printf("¿é¤J¼h¼Æ:");
	scanf_s("%d", &n);

	hanoi(n, '1', '2', '3');

	system("pause");
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c --> %c\n", A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%c --> %c\n", A, C);
		hanoi(n - 1, B, A, C);
	}
}