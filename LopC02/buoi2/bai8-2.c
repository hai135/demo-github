#include<stdio.h>
int main()
{
    int a;
    printf("Nhap vao so nguyen bat ki:");
    scanf("%d",&a);
    if(a%100!=0)
    {
        printf("The ki %d",(a/100)+1);
    }
    else
    {
        printf("The ki %d",(a/100));
    }

}
