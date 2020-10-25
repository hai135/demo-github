#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    a=1000;
    while(a<9999)
    {
        a++;
        if(sqrt(a)*sqrt(a)==a)
        {
            printf("%d\n",a);
        }
    }
}
