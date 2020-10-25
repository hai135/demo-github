#include<stdio.h>
#define max 100
#include<math.h>
int main()
{
    int a[max][max],m,n;
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
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sqrt(a[i][j])*sqrt(a[i][j])==a[i][j]&&a[i][j]!=1)
            {
                printf("%d\n",a[i][j]);
            }
        }
    }
}
