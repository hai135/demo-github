#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float a,b,c,p,s;
    printf("Nhap so tuong ung:");
    scanf("%d",&x);
    if(x==1)
    {
        printf("Nhap a,b,c lan luot la 3 canh cua tam giac:");
        scanf("%f%f%f",&a,&b,&c);
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("dien tich tam giac = %f",s);
    }
    if(x==2)
    {
        printf("Nhap do dai canh hinh vuong:");
        scanf("%f",&a);
        printf("Dien tich hinh vuong=%f",a*a);
    }
    if(x==3)
    {
        printf("Nhap do dai 2 canh hinh chu nhat:");
        scanf("%f%f",&a,&b);
        printf("Dien tich hinh chu nhat=%f",a*b);
    }
    if(x==4)
    {
        return 0;
    }
}
