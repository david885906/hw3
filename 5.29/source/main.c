#include<stdio.h>
#include<stdlib.h>
int a, b,i;
int main(void)
{
	printf("¿é¤J2­Ó¼Æ:\n"); scanf_s("%d%d",&a,&b);
	for (i = 1; i < a*b; i++)
	{
		if (i%a==0&&i%b==0) break;
	}
	printf("%d,lcm(%d,%d)",i,a,b);
	system("pause");
	return 0;
}