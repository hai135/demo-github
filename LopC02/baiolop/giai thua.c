#include<stdio.h>
int gt(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a*=i;
    }
    return a;
}
int sum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=gt(i)/i;
    }
    printf("%d",s);
    return s;
}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    sum(n);

}

