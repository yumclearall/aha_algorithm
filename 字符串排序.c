#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	system("color f5");
	printf("×Ö·û´®ÅÅÐò£»\n");
	char a[101],b[101];
	gets(a);
	gets(b);
	if(strcmp(a,b) <= 0)
		{
		puts(a);
		puts(b);
		}
	else
		{
		puts(b);
		puts(a);
		}
	}
	system("pause");
	return 0;
} 
