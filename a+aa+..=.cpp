#include <stdio.h>
#include <math.h>
int main()
{
    printf("please input a and n\n");
    int a,b,c=0;
    scanf("%d,%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        int d=i;
        while(d--) c+=a*pow(10,d);
    }
    printf("a=%d,n=%d\na+aa+...=%ld\n",a,b,c);
    return 0;
}
