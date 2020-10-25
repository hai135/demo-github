#include<stdio.h>
int main()
{
    int m,n;
    for (m=0;m<=10;m++)
    {
        for(n=0;n<=5;n++)
            if(m+(n*2)==10)
        {
            printf("%d to 1000 - %d to 2000\n",m,n);
        }
    }
}
