#include<stdio.h>
int tinhGiaiThua(int a)
{
    int s=1;
    for(int i=2;i<=a;i++)
    {
        s*=i;
    }
    return s;
}
int main()
{
    int n;
    printf("Nhap so duong can tinh :");
    scanf("%d",&n);
    printf("%d! co ket qua la:%d",n,tinhGiaiThua(n));
}
