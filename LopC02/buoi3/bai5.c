#include<stdio.h>
int main()
{
    int n,i,s,y;
    float S;
    printf("Nhap vao so nguyen duong n:");
    scanf("%d",&n);
    s=0;
    y=1;
    S=0;
    for(i=1;i<=n;i++)
    {
        s+=i;
        y*=i;
        S+=1.0/(y);
    }
    printf("Tong tu 1 den n=%d\nn!=%d\nTong S=%f",s,y,S);
}
