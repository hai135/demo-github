#include<stdio.h>
int main ()
{
    int x,y;
    printf("Nhap toa do x,y:");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    {
        printf("goc phan tu thu nhat");
        return 0;
    }
    if(x<0&&y>0)
    {
        printf("goc phan tu thu hai");
        return 0;
    }
    if(x<0&&y<0)
    {
        printf("goc phan tu thu ba");
        return 0;
    }
    if(x>0&&y<0)
    {
        printf("goc phan tu thu tu");
        return 0;
    }
    if(x==0&&y!=0)
    {
        printf("tren truc tung");
        return 0;
    }
    if(x!=0&&y==0)
    {
        printf("tren truc hoanh");
        return 0;
    }
    else
    {
        printf("goc toa do");
    }
}
