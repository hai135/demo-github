#include<stdio.h>
int main ()
{
    int a,b;
    printf("Nhap 2 so a,b lan luot la:");
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        printf("a chia het cho b va co thuong la:%d",a/b);
    }
    else{
        printf("a khong chia het cho b");
    }
}
