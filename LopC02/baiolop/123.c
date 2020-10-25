#include<stdio.h>
#include<math.h>

int a[100] = {.....}
void NhapMang(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
int SNT(int n)
{
    /*
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
            for(int j=1; j<=a[i]; j++)
            {

                if(a[i]%j==0)
                {
                    dem++;
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
        }
        else
        {
            flag=0;
        }

        if(flag==1)
            printf("%d",a[i]);
    }
    */
    if(n < 2) return 0;
    else if(n==2){
        return n;
    }
    else{
        for(int j = 2;j<=sqrt(n);j++){
            if(n % j ==0){
                return 0;
            }
            return n;
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
    for(int i = 0;i<n;i++){
        if(SNT(a[i])<100 && SNT(a[i]) != 0){
            printf("%d ",a[i]);
        }
    }
}
