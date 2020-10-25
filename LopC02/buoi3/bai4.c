#include<stdio.h>
int main()
{
    int n,i;
    printf("Nhap so nguyen duong n:");
    scanf("%d",&n);
    i=0;
    printf("So nguyen duong %d co:",n);
    for(n;n>0;)
    {
        n=n/10;
        i++;
    }
    printf(" %d chu so ^^",i);
}
