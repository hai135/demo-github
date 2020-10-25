#include<stdio.h>
int main()
{
    int n,dv,c,t;
    for(n=100;n<1000;n++)
    {
        dv=n%10;
        c=(n/10)%10;
        t=n/100;
        if(n==(dv*dv*dv)+(c*c*c)+(t*t*t))
        {
            printf("%d\n",n);
        }
    }
}

