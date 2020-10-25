#include<stdio.h>
int main()
{
    int a[]={1,2};
    float s;
    for(int i=0;i<2;i++)
    {

            s+=a[i];
    }
    printf("%.1f",s/=2);
}
