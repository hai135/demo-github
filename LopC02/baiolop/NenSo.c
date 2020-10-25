#include<stdio.h>
long NenSo(long n)
{
    long s=0;
    while(n!=0)
    {
        s=s+(n%10);
        n=n/10;
    }
    return s;
}
int main()
{
    long n,s=0;
    scanf("%ld",&n);
    while(n>=10)
    {
        n=NenSo(n);
    }
    printf("%ld",n);
}
