#include<stdio.h>
   int main ()
{
    float a;
    printf("nhap 1 so bat ki:");
    scanf("%f",&a);
    if (a==sqrt(a)*sqrt(a))
    {
        printf("a la so chinh phuong");
    }
    else
    {
        printf("khong phai so chinh phuong");
    }
}
