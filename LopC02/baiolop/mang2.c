#include<stdio.h>
int main()
{
    int a[10]={1,6,8,3,9,4,3,5,3,12},le=0,chan=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            chan+=a[i];
        }
        else
        {
            le+=a[i];
        }
    }
    printf("tong chan = %d\ntong le = %d",chan,le);
}
