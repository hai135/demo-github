#include<stdio.h>
   int main ()
{
    float a,b,c;
    printf("nhap 3 so a,b,c so bat ki:");
    scanf("%f%f%f",&a,&b,&c);
    if (a<b+c&&b<a+c&&c<a+b)
    {
        printf("la tam giac");
    }
    else
    {
        printf("khong la tam giac");
    }
}
