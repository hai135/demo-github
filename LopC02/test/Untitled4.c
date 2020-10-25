#include<stdio.h>
int main()
{
    int a[100],i,n,s=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=i-1; k>=0; k--)
            {
                if(a[k]==a[i])
                {
                    break;
                }
                if(a[i]==a[j]&&i!=j)
                {
                    s+=1;
                }

            }
                break;
        }
        printf("so lan lap cua %d la %d \n",a[i],s);
        s=1;
    }

}
