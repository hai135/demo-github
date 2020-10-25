#include<stdio.h>
int main()
{
    int n,k,i,s=1,j,d,a=1,b=1;
    printf("Nhap n,k:");
    scanf("%d%d",&n,&k);
    for(i=1,j=1,d=1;i<=n,j<=k,d<=n-k;i++,j++,d++)
    {
        s*=i;
        a*=j;
        b*=d;
        printf("%d %d %d\n",s,a,b);
    }
    printf("%d",s/(a*b));
}
