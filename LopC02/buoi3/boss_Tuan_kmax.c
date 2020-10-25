#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int index = 0;

    printf("S(k)=1+2+3+4+.....+k\n");
    printf("nhap n =");
    scanf("%d",&n);

    do
    {
        ++index;
        sum += index;
    } while (sum < n);

    printf("%d", index-1);
}
