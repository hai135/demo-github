#include<stdio.h>
void kiemTraNamNhuan(int a)
{
    if(a%400==0||a%4==0&&a%100!=0)
        printf("Nam %d la nam nhuan",a);
    else
        printf("Nam %d khong phai la nam nhuan",a);
}
int main()
{
    int year;
    printf("Nhap nam ban can kiem tra:");
    scanf("%d",&year);
    kiemTraNamNhuan(year);
}
