#include <stdio.h>
int main()
{
	int n=0,sum=0; 
	for (int i=1 ; i<=100 ; i++){
		n+=i;
		sum+=n;
	}
	printf("%d",sum);
	return 0;
}

 
