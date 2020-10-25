#include<stdio.h>
int main()
{
    int i=0,n;
    float diem;
    printf("Nhap n:");
    scanf("%d",&n);
    if(n>0)
    {
    while(n--)
    {
        printf("so diem:");
        scanf("%f",&diem);
        if(diem==10)
        {
            i++;
        }
    }
    printf("so luong diem 10 la:%d",i);
    }
}
