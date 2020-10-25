#include<stdio.h>
#include<math.h>

int main()
{
    int n,k=0,s=0;
    printf("S(k)=1+2+3+4+.....+k\n");
    printf("nhap n =");
    scanf("%d",&n);
    for(int i = 0 ; s < n; s = s+k){
        if (s>n){
            break;
        }
    }
    printf("%d la so lon nhat de S<n",k) ;
}
