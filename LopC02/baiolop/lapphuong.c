#include<stdio.h>
float LapPhuong(float n)
{
    return n*n*n;
}
int main()
{
    float n;
    printf("Nhap n:");
    scanf("%f",&n);
    printf("%f",LapPhuong(n));
}
