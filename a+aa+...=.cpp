#include <stdio.h>
#include <math.h>
int main()
{
    printf("please input a and n\n");
    int a,b;long c=0;
    scanf("%d %d",&a,&b);
    int f[100];
    for(int i=1;i<=b;i++)
    {
        int d=i,h=0;
    	while(d--) {c+=a*pow(10,d);h+=a*pow(10,d);}
       //for(int j=0;j<i;j++){c+=a*pow(10,j);h+=a*pow(10,j);}
        f[i]=h;//printf("%d",h);
    }
    for(int i=1;i<=b;i++)
    	{
    		printf("%d",f[i]);
    		if(i==b) printf("=%ld",c);
    		else printf("+");
   	 }
 // printf("a=%d,n=%d\na+aa+...=%ld\n",a,b,c);
    return 0;
}
