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
    long n=0,s=0;
    char arr[18];
    gets(arr);

    while(n>=10)
    {
        n=NenSo(n);
    }
    printf("%ld",n);
}
