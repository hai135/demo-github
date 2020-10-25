#include<stdio.h>
int main()
{
    int xh,yh,xm,ym;
    printf("Nhap lan luot toa do quan HAU va quan MA tren ban co:");
    scanf("%d%d%d%d",&xh,&yh,&xm,&ym);
    if(1<=xh&&1<=yh&&1<=xm&&1<=ym&&xh<=8&&yh<=8&&xm<=8&&ym<=8)
    {
        if(xh-xm==yh-ym||xh-xm==ym-yh)
        {
            printf("Hau an duoc Ma\nMa khong an duoc Hau");
        }
        else
        {
            if(((xh-xm)*(xh-xm))+((yh-ym)*(yh-ym))==5)
            {
                printf("Hau khong an duoc Ma\nMa an duoc Hau");
            }
        }
    }
    else
    {
        printf("vo li");
    }
}
