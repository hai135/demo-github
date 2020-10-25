#include<stdio.h>
#include<math.h>
    int main ()
{
    printf("Nhap 2 so thuc a,b");
    float a,b,tong,hieu,tich,thuong;
    printf("\na=");
    scanf("%f",&a);
    printf("\nb=");
    scanf("%f",&b);
    tong=a+b;
    hieu=a-b;
    tich=a*b;
    thuong=a/b;
    printf("\ntong=%f\nhieu=%f\ntich=%f\nthuong=%f",tong,hieu,tich,thuong);
}
