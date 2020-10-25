#include<stdio.h>
int main ()
{
    int i,j;
    for(i=1;i<10;i++)
    {
        for(j=1;j<11;j++)
        {
            printf("\t");
            printf("%d*%2d=%2d\n",i,j,i*j);
        }
        printf("\n\n");
    }
}
