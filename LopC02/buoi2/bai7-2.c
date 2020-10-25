#include<stdio.h>
int main ()
{
    int a;
    printf("Nhap vao 1 so nguyen: ");
    scanf("%d",&a);
    if(a>0)
    {
        if(a%2==0)
        {
            printf("so duong chan");
        }
        else
        {
            printf("so duong le");
        }
    }
    if(a<0)
    {
        if(a%2==0)
        {
            printf("so am chan");
        }
        else
        {
            printf("so am le");
        }
    }
    if(a==0)
    {
        printf("so 0");
    }
}
