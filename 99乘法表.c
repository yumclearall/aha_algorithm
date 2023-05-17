#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{	system("color 15");
	printf("99³Ë·¨±í\n");
	Sleep(1000);
	system("cls");
	system("color f5");
	int a=1,b,c;
	
	while(a<=9)
	
	{
		b=1;
		while(b<=a)
		{	c=a*b;
			printf("%d * %d = %d  ",a,b,c);
			b+=1;
		}
		printf("\n");
		a+=1;
	}
	
	system("pause");
	return 0;
} 
