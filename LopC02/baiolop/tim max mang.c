#include<stdio.h>
void NhapMang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
int TimViTriMax(int a[],int n)
{
    int c;
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            c=i;
        }
    }
    return c;
}
void XuatMang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=%d\n ",i,a[i]);
    }

}
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    int a[n];
    NhapMang(a,n);
    printf("vi tri phan tu max =%d\n",TimViTriMax(a,n));

    XuatMang(a,n);
}
