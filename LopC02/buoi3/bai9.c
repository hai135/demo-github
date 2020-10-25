#include<stdio.h>
int main()
{
    int n,b,tmp=1;
    for(n=10000;n<100000;n++)
    {

        b=n;
        while(n!=0)
        {
            int a = n%10;
            if(a%2!=0){
                tmp = 0;
                break;
            }
            n/=10;
        }
        if(tmp==1){
            printf("%d\n",b);
        }
    }
}
