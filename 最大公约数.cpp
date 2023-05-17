#include <stdio.h>
int Gcd(int a,int b)
{
    int d;
    if(a<0 || b<0) return -1;
    else
    {
        
        if(a<b)
        {
           int c=a;a=b;b=c;
        }
        while(a)
        {
           d=a;a=b;b=d/b;
        }
        return d;
    }
}
int main()
{
    int a,b;
    printf("Input a,b:\n");
    scanf("%d,%d",&a,&b);
    if(Gcd(a,b)<0)
    {
        printf("Input error!\n");
    }
    else printf("Gcd=%d\n",Gcd(a,b));
    return 0;
}
