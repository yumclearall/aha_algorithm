#include <stdio.h>
int main()
{
    printf("Input  n(n<20):\n");
    int n;scanf("%d",&n);
    int a[100][100];
    for(int i=0;i<100;i++)
    {
        a[i][0]=1;a[i][i]=1;
        int b=i;
        for(int j=1;j<=i-1;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(int i=0;i<=6;i++)
    {
        for(int j=0;j<=i;j++) 
        {
            printf("%4d",a[i][j]);
            n-=1;if(n==0) break;
        }
        if(n==0) break;
        printf("\n");
    }
    return 0;
}
