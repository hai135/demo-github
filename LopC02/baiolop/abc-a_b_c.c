#include<stdio.h>
int main()
{
    char hihi[50];
    gets(hihi);
    int i=0;
    while(hihi[i]!='\0')
    {
        i++;
    }
    for(int j=0;j<i-1;j++)
    {
        printf("%c_",hihi[j]);
    }
    printf("%c",hihi[i-1]);
}
