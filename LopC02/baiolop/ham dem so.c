#include<stdio.h>
int TimUCLN(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a,b;
    printf("Nhap 2 so a,b:");
    scanf("%d%d",&a,&b);
    printf("ucln=%d",TimUCLN( a, b));
}
