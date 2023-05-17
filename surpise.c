#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int a=3,ab,cd;
	ab=rand()%10;cd=rand()%10;
	system("color %ab%cd",ab,cd);	
	printf("surpise");
	Sleep(1000);
	system("cls") ;
	while (a>=1)
	{
		system("color %ab%cd",ab,cd);
		printf("%d",a);
		Sleep(1000);
		system("cls");
		a-=1;
	}
	system("color %ab%cd",ab,cd);
	printf("you are a silly pig");
	system("pause");
	return 0;
}
