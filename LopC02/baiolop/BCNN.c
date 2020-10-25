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
            printf("BCNN=%d",a*i);
            return 0;
        }

    }
}
