#include <stdio.h>
int f(int n)
{
    int sum=0,c=0,d=n;
    for(int i=2;i<n;i++)
    if(n%i==0) {sum=1;break;}
    while(d) {c++;d=d/10;}
    if(c==2) if(n%10!=n/10) sum=1;
    if(c==3) if(n%10!=n/100) sum=1;
    return sum;
}
int main()
{
    printf("Following are palindrome primes not greater than 1000:\n");
    for(int i=10;i<1000;i++) if(f(i)!=1) printf("%d\t",i);  
    return 0;
}
