#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Nhap a,b:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if((a*i)%b==0)
        {
            printf("BCNN=%d\n",a*i);
            printf("UCLN=%d",(a*b)/(a*i));
            return 0;
        }

    }
}
