#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,n,digit,count=0;
	scanf("%d",&x);
	n=x;
	while(x!=0)
	{
		x=x/10;
		count++;
	}
	if(n%2==1)
	{
		n=n%(int)pow(10,count-1);
		for(i=count-1;i>=0;i-=2)
		{
			digit=n/(int)pow(10,i-1)%10;
			printf("%d ",digit);
		}
	}	
	else
	{
		for(i=count-1;i>=0;i-=2)
		{
			digit=n/(int)pow(10,i)%10;
			printf("%d ",digit);
		}
		}
	return 0;
	}
