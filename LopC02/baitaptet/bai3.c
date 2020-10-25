#include<stdio.h>
#include<math.h>
void giaiPhuongTrinhBac2(float a,float b,float c)
{
    if(a==0)
        {
            if(b==0)
            {
                if(c==0)
                {
                    printf("Phuong trinh co vo so nghiem");
                }
                else
                {
                    printf("Phuong trinh vo nghiem");
                }
            }
            else
            {
                printf("Phuong trinh co nghiem x=%f",(-c)/b);
            }
        }
        else
        {
            float d=b*b-(4*a*c);
            if(d<0)
            {
                printf("Phuong trinh vo nghiem");
            }
            else
            {
                if(d==0)
                {
                    printf("Phuong trinh co nghiem kep x=%f",-b/(2*a));
                }
                else
                {
                    printf("Phuong trinh co 2 nghiem phan biet \nX1=%f \nX2=%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
                }
            }
        }
}
int main()
{
    float a,b,c;
    printf("Nhap he so a,b,c cua phuong trinh ax^2+bx+c=0\na=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    giaiPhuongTrinhBac2(a,b,c);
}
