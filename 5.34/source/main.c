#include<stdio.h>
#include<stdlib.h>
int base, ex,n;
int main(void)
{
	printf("Enter the base and exponent:\n"); scanf_s("%d%d", &base, &ex);
	if (ex < 1) return 0;
	else
	{

		n = 1;
		
		for (int i = 0; i < ex; i++)
		{
			n = n*base;
		}
		printf("%d\n", n);
		system("pause");
		return  0;
	}
		
	
}