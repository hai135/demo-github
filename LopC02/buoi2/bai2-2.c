#include<stdio.h>
int main ()
{
    float a,s,b;
    printf("Nhap vao so KM da di:");
    scanf("%f",&a);
    if(a<=0.8)
    {
        printf("So tien phai tra:10000 dong");
    }
    if(0.8<a&&a<=30.8)
    {
        s=(10000+((a-0.8)*9000))/1000;
        b=(int)s;
        if(s-b>0.5)
        {
            printf("So tien phai tra:%f",(b+1)*1000);
        }
        else
        {
            printf("So tien phai tra:%f",b*1000);
        }

    }
    if(30.8<a)
    {
        s=(10000+270000+((a-30)*8000))/1000;
        b=(int)s;
        if(s-b>0.5)
        {
            printf("So tien phai tra:%f",(b+1)*1000);
        }
        else
        {
            printf("So tien phai tra:%f",b*1000);
        }

    }
}
