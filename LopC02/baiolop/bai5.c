#include<stdio.h>
   int main ()
{
    float a;
    printf("nhap 1 so bat ki:");
    scanf("%f",&a);
    if(a>=0)
        {
        printf("gia tri tuyet doi la:%f",a);
        }
    else
        {
            printf("gia tri tuyet doi la:%f",-a);
        }
}
