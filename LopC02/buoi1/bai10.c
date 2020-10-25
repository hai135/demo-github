#include<stdio.h>
    int main ()
{
    float s,v,a;
    printf("Nhap van toc v=");
    scanf("%f",&v);
    v=v/3.6;
    printf ("Nhap quang duong s=");
    scanf("%f",&s);
    a=pow(v,2)/(2*s);
    printf("gia toc = %f", a);
}
