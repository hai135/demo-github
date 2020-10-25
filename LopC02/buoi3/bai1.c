#include<stdio.h>
int main ()
{
    int n,i;
    printf("Nhap n:");
    scanf("%d",&n);
    i=0;
    while(n--)
    {
        printf("%c",'*');
    }
    printf("\nNhap n:");
    scanf("%d",&n);
    while(n--)
    {
        printf("%c",i==0? '+':'-');
        i=!i;
    }
}
