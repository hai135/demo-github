#include <stdio.h>
#define MAX 100

void NhapMang(int a[], int n)
{
    for(int i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void KTTonTaiK (int a[], int n, int k)
{
    for(int i=0;i<n;i++){
        if(a[i]==k){
            printf("Ton tai %d",a[i]);
            break;
        }
    }
}
int main(){
    int n, k, a[MAX];
    printf("So phan tu cua mang = ");
    scanf("%d",&n);
    NhapMang (a,n);
    printf("Nhap mot so = ");
    scanf("%d",&k);
    KTTonTaiK (a,n,k);
}
