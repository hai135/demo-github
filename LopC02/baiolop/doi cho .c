#include<stdio.h>
int a,b;
void DoiCho()
{
    a=a+b;
    b=a-b;
    a=a-b;

}
int main()
{

    printf("Nhap 2 so a,b:");
    scanf("%d%d",&a,&b);
    DoiCho();
    printf("%3d %3d",a,b);
}
