#include<stdio.h>
void NhapMang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
int SNT(int a[],int n)
{
    int flag;
    for(int i=0; i<n; i++)
    {
        int dem=0;
        if(a[i]<2)
        {
            flag=0;
        }
        else if(a[i]<100)
        {
            for(int j=1; j<=n; j++)
            {
                if(a[i]%i==0)
                {
                    dem++;
                }
            }
            if(dem==2)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }

        }
        else
        {
            flag=0;
        }
        if(flag==1)
        {
            printf("a");
            printf("%d",a[i]);
        }
    }



}

int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    int a[n];
    NhapMang(a,n);
    SNT(a,n);



}
