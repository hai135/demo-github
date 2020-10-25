#include<stdio.h>
int main ()
{
    printf("Nhap vao diem cua hoc sinh:");
    float a;
    scanf("%f",&a);
    if(a<4)
    {
        printf("Diem F");
    }
    if(4<=a&&a<5.5)
    {
        printf("Diem D");
    }
    if(5.5<=a&&a<7)
    {
        printf("Diem C");
    }
    if(7<=a&&a<8.5)
    {
        printf("Diem B");
    }
    if(8.5<=a&&a<10)
    {
        printf("Diem A");
    }
}
