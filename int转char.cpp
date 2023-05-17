#include <stdio.h>
int main()
{
    printf("\n输入整数：") ;
    int a,b,c=0,e;
    char d[10000];
    scanf("%d",&a);
    e=a;
    while(e) {c++;e=e/10;}
    while(a)
    {
        b=a%10;a=a/10;c--;d[c]=b+48;
    }
    printf("\n输出是：%s",d);
    return 0;
}
