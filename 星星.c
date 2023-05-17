#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int a,b,c,d;
	for(c=0;c<=4;c++)
	{
	for(a=4;a>=c;a--)
		printf(" ");
	for(b=1;b<=2*c+1;b+=1)
		printf("*") ;
	printf("\n");
	}
	for(c=4;c>=1;c--)
	{
	for(a=5;a>=c;a--)
		printf(" ");
	for(b=1;b<=2*c-1;b+=1)
		printf("*") ;
	printf("\n");
	}
	system("pause");
	return 0;
} 
