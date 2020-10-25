#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Nhap r,c:");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
