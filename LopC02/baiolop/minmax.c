#include<stdio.h>
    int main()
{
    float a,b,c,max,min;
    printf("Nhap 3 so a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    max=a;
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    printf("max=%f",max);
    min=b;
    if(min>a)
    {
        min=a;
    }
    if(min>c)
    {
        min=c;
    }
    printf("min=%f",min);
}
