#include <stdio.h>
/*int main()
{
    int a,b,tong,hieu,tich;
    float thuong;
    printf("Nhap 2 so nguyen a,b:\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("tong=%d\nhieu=%d\ntich=%d\n",a+b,a-b,a*b);
    if(b==0)
    {
        printf("thuong khong co gia tri");
        return 0;
    }
    else thuong=(float)a/b;
    printf("thuong =%f",thuong);
}*/
#include <stdio.h>
#include <stdlib.h>
void NhapMaTran(int **a, int dong, int cot)
{
    int i, j;
    for (i = 0; i < dong; i++)
        for (j = 0; j < cot; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}
void XuatMaTran(int **a,int **b, int dong, int cot)
{
    int i, j;
    for (i = 0; i < dong; i++)
    {
        for (j = 0; j < cot; j++)
            printf("%5d", a[i][j]+b[i][j]);
        printf("\n");
    }
}
int main()
{
    int **a = NULL,**b=NULL, dong, cot;
    int i;
    printf("Nhap vao so dong = ");
    scanf("%d", &dong);
    printf("Nhap vao so cot = ");
    scanf("%d", &cot);
    // Cấp phát mảng các con trỏ cấp 1
    a = (int **)malloc(dong * sizeof(int *));
    for (i = 0; i < dong; i++)
    {
        // Cấp phát cho từng con trỏ cấp 1
        a[i] = (int *)malloc(cot * sizeof(int));
    }
    b = (int **)malloc(dong * sizeof(int *));
    for (i = 0; i < dong; i++)
    {
        // Cấp phát cho từng con trỏ cấp 1
        b[i] = (int *)malloc(cot * sizeof(int));
    }
    NhapMaTran(a, dong, cot);
    NhapMaTran(b, dong, cot);
    XuatMaTran(a,b, dong, cot);

    // giải phóng từng hàng
    for (i = 0; i < dong; i++)
    {
        free(a[i]);
    }
    // giai phong con trỏ quản lý các dòng
    free(a);
    for (i = 0; i < dong; i++)
    {
        free(b[i]);
    }
    // giai phong con trỏ quản lý các dòng
    free(b);
    return 0;
}
