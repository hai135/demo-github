#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Nhap vao m,n:");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%5==0)
            {
                printf("(%d,%d)\n",i,j);
            }
        }
    }
}
