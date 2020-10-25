#include<stdio.h>
int main ()
{
    int n,j;
    printf("Nhap n in ra bang cuu chuong cua n:");
    scanf("%d",&n);
    for(j=1;j<11;j++)
    {
        printf("%d*%d=%d\n",n,j,n*j);
    }
}
