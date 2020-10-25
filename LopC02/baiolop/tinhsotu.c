#include<stdio.h>
int main()
{
    char hihi[50];
    gets(hihi);
    int i=0,a=1;
    while(hihi[i]!='\0')
    {
        i++;
    }
    for(int j=0;j<i-1;j++)
    {
        if (hihi[j]==' '&&hihi[j+1]!=' ')
        {
            a++;
        }
    }
    printf("%d",a);
}
