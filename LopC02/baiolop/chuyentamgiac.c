#include<stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
    int n,i,j;
    char z;
    int flag = 0;
    printf("nhap n:");
    scanf("%d",&n);
    while (1)
    {
        system("cls");
        if (flag ==0)
        {

            /*
                * * * *
                  * * *
                    * *
                      *
            */
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
        }
        else
        {
             /*
            * * * *
              *   *
                * *
                  *
            */
            for (i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
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
        }

        fflush(stdin);
        z = getch();
        if (z=='z'||z=='Z')
            flag = !flag;
    }



}
