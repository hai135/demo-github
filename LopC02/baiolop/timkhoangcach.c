#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    printf("khoang cach hai diem =%f",sqrt((x1-x2)*(x1-x2)+((y1-y2)*(y1-y2))));
}
