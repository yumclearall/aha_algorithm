#include <stdio.h>
int IsPerfect(int a)
{
    int sum=0;
    for(int i=1;i<=a-1;i++) 
    if(a%i==0) sum+=i;
    return sum;
}
int main()
{
    printf("Input m:\n");
    int a;
    scanf("%d",&a);
    if(IsPerfect(a)==a) printf("%d is a perfect number\n",a);
    else printf("%d is not a perfect number\n",a);
    return 0;
}
