#include<stdio.h>
   int main ()
{
    printf ("Nhap 3 so nguyen lan luot la ngay thang nam:");
    int dd,mm,yyyy;
    scanf("%d%d%d",&dd,&mm,&yyyy);
    printf("ngay thang nam la %02d/%02d/%d",dd,mm,yyyy);
}
