#include<stdio.h>
#define Max 100
void InMangNguoc(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%3d",a[i]);
    }
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
    InMangNguoc(a,n);

}
