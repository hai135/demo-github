#include<stdio.h>
int main ()
{
    int a[10]={3,5,1,5,5,6,3,9,3,1},s=0;
    for(int i=0;i<10;i+=3)
    {
        s=s+a[i];
    }
    printf("tong cua mang = %d",s);
}
