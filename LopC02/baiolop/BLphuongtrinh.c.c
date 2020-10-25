#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    int y;
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    y=(d>0) ? 1 : (d==0) ? 2 : 3;
    printf("y=%d\n",y);
    switch(y)
    {
    case 1:
        printf("Phuong trinh co 2 nghiem phan biet \nX1=%f \nX2=%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
        break;
    case 2:
        printf("Phuong trinh co nghiem kep x=%f",-b/(2*a));
        break;
    case 3:
        printf("Phuong trinh vo nghiem");
    }


}

