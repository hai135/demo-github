#include<stdio.h>
#define max 100
#include<math.h>
int main()
{
    int a[max][max],m,n,k;
    printf("Nhap so dong:");
    scanf("%d",&m);
    printf("Nhap so cot:");
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    k=a[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(k<a[i][j])
            {
                k=a[i][j];
            }
        }
    }
    printf("%d",k);
}
