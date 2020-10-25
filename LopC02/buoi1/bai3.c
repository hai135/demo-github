#include<stdio.h>
#include<math.h>
    int main ()
{
    printf("Nhap a,b,c lan luot la 3 canh cua tam giac:");
    float a,b,c,p,s;
    scanf("%f%f%f",&a,&b,&c);
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("dien tich tam giac = %f",s);
}
