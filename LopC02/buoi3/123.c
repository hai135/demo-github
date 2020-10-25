#include<stdio.h>
#include<stdlib.h>
int main(){
    int **a;
    int n,dem=0;
    do{
        printf("Nhap n: ");
        scanf("%d",&n);
    }while(n<=0);
    //cấp phát động các dòng
    a=(int**)malloc(n*sizeof(int*));
    //cấp phát động các cột cho mỗi dòng
    for(int i=0;i<n;i++){
        a[i]=(int*)malloc(n*sizeof(int));
    }
    //nhập mảng
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //đếm số số dương 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>0)dem++;
        }
    }
    printf("Co %d so duong trong mang",dem);
}
