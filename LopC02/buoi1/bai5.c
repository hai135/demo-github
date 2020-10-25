#include<stdio.h>
#include<math.h>
    int main ()
{
    printf("Nhap vao ban kinh hinh cau:");
    float r,s,v;
    scanf("%f",&r);
    s=4*3.14*r*r;
    v=(4.0/3)*3.14*r*r*r;
    printf("dien tich hinh cau = %f\nthe tich hinh cau=%f",s,v);
}
