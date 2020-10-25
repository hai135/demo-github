#include<stdio.h>
int main()
{
    int arr[100],n,k,so[100],tmp;
    printf("Nhap n:");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("Nhap k:");
    scanf("%d",&k);
    for(int a=1; a<=k; a++)
    {
        printf("so[%d]:",a);
        scanf("%d",&so[a]);
        if(so[a]>0)
        {
            n++;
            arr[n-1]=so[a];
        }
        else
        {
            n++;
            for(int i=n-1; i>=1; i--)
            {
                arr[i]=arr[i-1];
            }
            arr[0]=so[a];
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
}
