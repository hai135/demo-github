#include<stdio.h>
#include<math.h>
    int main ()
{
    printf("Nhap vao 3 so a,b,c:");
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
        {
            printf("tam giac vuong");
        }
        if(a==b&&b==c)
        {
            printf("tam giac deu");
        }
        if(a==b||b==c||a==c)
        {
            printf("tam giac can");
        }
        else
        {
            printf("tam giac nhon");
        }
    }
    else
    {
        printf("khong la tam giac");
    }
}
