#include<stdio.h>
int main()
{
    char a,b;
    scanf("%c",&a);
    if(a>64&&a<91)
    {
        b=a+32;
        printf("%c",b);
    }

}
