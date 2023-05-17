#include<stdio.h>
#include<stdlib.h>
int main ()
{
	system("color f2");
	char a[41][61];
	int b,c;
	for(b=0;b<=60;b++)
	{
		for(c=0;c<=40;c++)
			printf("#");
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
