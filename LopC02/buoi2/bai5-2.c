#include<stdio.h>
int main ()
{
    int a,b;
    printf("Nhap 2 so a,b lan luot la:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
        printf("a=%d\nb=%d",a,b);
    }
    else{
        printf("a=%d\nb=%d",a,b);
    }
}
