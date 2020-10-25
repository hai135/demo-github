#include<stdio.h>
int main()
{
    int a,b;
    printf("Nhap 2 so a,b:");
    scanf("%d%d",&a,&b);
    for(a;a%2==1&&a<=b;a+=2)
    {
        printf("%d ",a);
    }
    if (a%2==0)
    {
        for(a=a+1;a<=b;a+=2)
        {
            printf("%d ",a);
        }
    }
}
