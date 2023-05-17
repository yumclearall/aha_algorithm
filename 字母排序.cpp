#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main  (void)
{
	system("color f2");
	printf("×ÖÄ¸ÅÅÐò£º\n");
	char a[101],t;
	gets(a);
	int len,i,j;
	len=strlen(a);
	for(i=0;i<=len-2;i++)
	{
		for(j=i+1;j<=len-1;j++)
				if (a[j]>=a[i])
				{
					t=a[i];a[i]=a[j];a[j]=t;
				}
			
	}
	puts(a);
	printf("\n");
	system("pause");
	return 0;
}
