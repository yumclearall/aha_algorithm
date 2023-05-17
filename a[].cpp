#include <stdio.h>
int main()
{
    int a[20]={2,4,6,8,10,12,14,16};
    int n=11;
    for(int i=0;i<8;i++)
    {
        if(n<a[i]) 
        {
            int h=i;
            for(int b=h;b<8;b++) a[h+1]=a[h];
            a[i]=n;
            break;
        }
    }
    for(int i=0;i<9;i++) printf("%d ",a[i]);
    return 0;
}
