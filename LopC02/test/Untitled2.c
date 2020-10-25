// // bài 3 
// #include<stdio.h>
// int main(){
//     int *a;
//     int n,count=0;
//     printf("Nhap n: ");
//     scanf("%d",&n);
//     a=(int*)malloc(n*sizeof(int));
//     while(count<n){
//         scanf("%d",&a[count++]);
//     }
//     for(int i=0;i<n-1;i++){
//         if(a[i]<a[i+1]){
//             printf("Day khong giam dan");
//             return 0;
//         }
//     }
//     printf("Day co giam dan");
//     return 0;
// }
#include<stdio.h>
int main(){
    int m,n;

    do{
        printf("Nhap m(m<=10): ");
        scanf("%d",&m);
    }while(m>10);

    do{
        printf("Nhap n(n<=15): ");
        scanf("%d",&n);
    }while(n>15);
    float a[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%f",&a[i][j]);
        }
    }

    printf("Ma tran vua nhap la: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%.1f ",a[i][j]);
        }
        printf("\n");
    }

    printf("Hien thi cot thu 2 \n");
    for(int i=0;i<m;i++){
        printf("a[%d][1] = %.1f\n",i,a[i][1]);
    }
}