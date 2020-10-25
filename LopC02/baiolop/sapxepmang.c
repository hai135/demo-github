#include<stdio.h>
void NhapMang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void SapXepMang(int n,int a[])
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
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
    printf("Nhap mang:\n");
    NhapMang(a,n);
    printf("Xuat mang:\n");
    XuatMang(a,n);
    printf("Sap xep mang:\n");
    SapXepMang(n, a);

}

