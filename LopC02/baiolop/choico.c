#include<stdio.h>
int main()
{
    printf("Nhap vao toa do xe:");
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    printf("xe trang toa do %d %d \nxe tden toa do %d %d ",x1,y1,x2,y2);
    if (x1>8||x2>8||y1>8||y2>8||x1<0||x2<0||y1<0||y2<0)
    {
        printf("vo li");
    }
    else
    {
    if(x1==x2||y1==y2)
    {
        printf("\nxe trang an xe den");
    }
    else
    {
        printf("\nxe trang khong an xe den");
    }
    }
}
