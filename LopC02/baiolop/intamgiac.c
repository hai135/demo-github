#include<stdio.h>
int main ()
{
    int n,i,j;
    scanf("%d",&n);

    /*
    * * * *
      *   *
        * *
          *
    */
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                if(i==j||i==1||j==n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
    }
    printf("\n");
    /*
        *
        * *
        *   *
        * * * *
    */
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                if(i==j||i==n||j==1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
    }
    printf("\n");
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                if(i==j||i<=j)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
    }
    printf("\n");
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                if(i==j||j<=i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
    }
    printf("\n");

    /*

        * * * *
        * * *
        * *
        *

    */
    for (j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(i==n-j)
            {
                break;
            }
            printf("* ");
        }
        printf("\n");
    }
    for (j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(i<n-j-1)
            {
                printf("  ");
            }
            else
            printf("* ");
        }
        printf("\n");
    }
}
