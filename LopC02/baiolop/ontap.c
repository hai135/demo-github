#include<stdio.h>
int NamNhuan(int a)
{
    scanf("%d",&a);
    if(a%4==0&&a%100!=0||a%400==0)
    {
        printf("%d la nam nhuan",a);
        return 0;
    }
    printf("%d khong la nam nhuan",a);
}
int copy(char a[100],char b[100])
{

}
int main()
{
    /*int a[100],n,s=0;
    printf("n=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    printf("tong=%d",s);*/
    int a;
    NamNhuan(a);
}
