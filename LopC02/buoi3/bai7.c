#include<stdio.h>
int main()
{
    int n,dv,c;
    for(n=10;n<100;n++)
    {
        dv=n%10;
        c=n/10;
        if(n==2*(c+dv))
        {
            printf("%d",n);
        }
    }
}
