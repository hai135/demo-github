#include<stdio.h>
int SNT(int n)
{
    int dem=0;
    if(n<2)
    {
        printf("khong la SNT");
    }
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(n%i==0)
                {
                    dem++;
                }
            }
            if(dem==2)
            {
                printf("la SNT");
            }
            else
            {
                printf("khong la SNT");
            }

        }


    return n;
}

int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    SNT(n);
}
