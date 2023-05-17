#include <stdio.h>
int main()
{
	double a[11],b,max=0,equ=0;
	for(int i=1;i<=10;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(int i=1;i<=10;i++)
	{
		if(max<a[i]) max=a[i];
		equ+=a[i];
	}
	printf("%lf %lf",equ/10,max);
} 
