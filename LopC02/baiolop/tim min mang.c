#include<stdio.h>
#define Max 100
void TimMinMang(int a[],int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("min=%d",min);
}
int main()
{
    int a[Max],n;
    printf("Nhap n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    TimMinMang(a,n);

}

