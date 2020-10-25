#include<stdio.h>
int main()
{
    int i,s,n;
    i=1;
    s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i=i+1;
    }
    printf("%d",s);

}
