#include <stdio.h>
main()
{
    long int n,i,k,j,sum;
    printf("Enter n=");
    scanf("%ld",&n);
    k=n*n*n;
    for(i=1;i<k/2;i+=2)
    {
        for(j=i,sum=0;sum<k;j+=2)a
            sum+=j;
        if(sum==k)
            printf("%ld*%ld*%ld=%ld=form %ld to %ld\n",n,n,n,sum,i,j-2);
    }
}
//n*(n-1)/2=j
