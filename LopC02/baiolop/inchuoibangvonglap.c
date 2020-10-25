#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("n:");
    scanf("%d",&n);
    fflush(stdin);
    char str[n];
    for(int i=0;i<n;i++)
    {
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    puts(str);
}
