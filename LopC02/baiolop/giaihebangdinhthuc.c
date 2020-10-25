#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,D,Dx,Dy;
    float x,y;
    printf("Nhap a,b,c,d,e,f:");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    D=(a*e)-(b*d);
    Dx=(c*e)-(b*f);
    Dy=(a*f)-(c*d);
    if(D!=0)
    {
        printf("x=%f\ny=%f",Dx/D,Dy/D);
    }
    else if (D==0&&Dx!=Dy&&Dx!=0)
    {
        printf("Phuong trinh vo nghiem");
    }
    else
    {
        printf("Phuong trinh vo so nghiem");
    }

}
