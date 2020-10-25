#include<stdio.h>
#include<string.h>
int main()
{
    char hihi[100];
    int a=0,i=0;
    gets(hihi);
    while(1)
    {
        if(hihi[i++]=='\0')
        {
            break;
        }
        a++;
    }
    printf("%d",a);
}
