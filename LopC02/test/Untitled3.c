#include<stdio.h>
int main()
{
    int a[100],i,n,max;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        max=(max<a[i])? a[i] : max;
    }
    printf("max=%d\n",max);
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            printf("vi tri %d\n",i);
        }
    }




}

