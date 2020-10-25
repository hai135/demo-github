#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int n,a[100][100],k=1,d=0,cot,hang,i,j;

    printf("Nhap cap cua ma tran :");
    scanf("%d",&n);
    cot=n-1;
    hang=n-1;
    while(k<=n*n)
    {
        for( i=d; i<=cot; i++)
        {
            a[d][i]=k++;
        }
        for( i=d+1; i<=hang; i++)
        {
            a[i][cot]=k++;
        }
        for(i=cot-1; i>=d; i--)
        {
            a[hang][i]=k++;
        }
        for(i=hang-1; i>d; i--)
        {
            a[i][d]=k++;
        }
        hang--;
        cot--;
        d++;
    }
    for(i=0; i<n; i++)
        {
            for( j=0; j<n; j++)
            {
                printf("%3d",a[i][j]);
            }
            printf("\n");
        }

}
