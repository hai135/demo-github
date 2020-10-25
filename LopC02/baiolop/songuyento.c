#include<stdio.h>
int main()
{
    int n,i,flag = 0;
    printf("Nhap n:");
    scanf("%d",&n);
    if(n==2)
    {
        flag=0;
    }
    if(n<2)
    {
        flag=1;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           flag = 1;
        }
        else
        {
            flag = 0;
        }
       if(flag == 1){
        printf("%d khong la so nguyen to",n);
        return;
       }
       else{
        printf("%d la so nguyen to",n);
        return;
       }
    }
}
