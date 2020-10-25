#include<stdio.h>
#include<math.h>
int main ()
{
    printf("Nhap 2 so a,b la canh ben tam giac vuong");
    int a,b;
    float c;
    printf("\na=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    c=sqrt (a*a+b*b);
    printf("canh huyen cua tam giac vuong dai=%f",c);

}
