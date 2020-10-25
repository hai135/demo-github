#include<stdio.h>
int main()
{
    int n,i=0,j=0;
    do
    {
        printf("n=");
        scanf("%d",&n);
        if(n>0)
        {
            i+=1;
        }
        else if(n<0)
        {
            j+=1;
        }
    }
    while(n!=0);
    printf("Co %d so duong\nCo %d so am",i,j);


}
