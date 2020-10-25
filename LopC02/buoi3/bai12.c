#include<stdio.h>
int main()
{
    int a,b,i,t;
    printf("Nhap 2 so nguyen a,b:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(t=2;t<i;t++)
        {
            if(i%t==0)
            {
                break;
            }
        }
            if(i==t)
            {
                printf("%d\n",i);
            }



    }
}
