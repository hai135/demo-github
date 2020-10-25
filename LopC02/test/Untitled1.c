#include<stdio.h>
int main()
{
    int a[100],i,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    do
    {
        printf("nhap k:");
            scanf("%d",&k);
    }
    while(k>=n||k<0);
    for(i=0;i<n;i++)
    {
            a[k]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }

}
