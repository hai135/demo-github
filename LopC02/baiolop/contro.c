#include<stdio.h>
int main()
{
    int *p,n=2;
    float a=1.3;
    p=&a;
    p=&n;
    printf("gia tri bien n: %d\n",n);
    printf("dia chi bien n: %d\n",&n);
    printf("gia tri bien p: %d\n",p);
    printf("dia chi bien p: %d\n",&p);
    printf("gia tri bien p: %d\n",*p);
}
