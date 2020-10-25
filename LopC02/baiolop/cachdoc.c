#include<stdio.h>
int main ()
{
    int a,dv,c,t;
    printf("Nhap vao so co 3 chu so:");
    scanf("%d",&a);
    dv=a%10;
    c=(a%100)/10;
    t=a/100;
    switch(t)
    {
    case 1:
        printf("mot tram");
        break;
    case 2:
        printf("hai tram");
        break;
    case 3:
        printf("ba tram");
        break;
    case 4:
        printf("bon tram");
        break;
    case 5:
        printf("nam tram");
        break;
    case 6:
        printf("sau tram");
        break;
    case 7:
        printf("bay tram");
        break;
    case 8:
        printf("tam tram");
        break;
    case 9:
        printf("chin tram");
        break;
    }
    switch(c)
    {
    case 1:
        printf("\t muoi");
        break;
    case 2:
        printf("\t hai muoi");
        break;
    case 3:
        printf("\t ba muoi");
        break;
    case 4:
        printf("\t bon muoi");
        break;
    case 5:
        printf("\t nam muoi");
        break;
    case 6:
        printf("\t sau muoi");
        break;
    case 7:
        printf("\t bay muoi");
        break;
    case 8:
        printf("\t tam muoi");
        break;
    case 9:
        printf("\t chin muoi");
        break;
    case 0:
        printf("\t linh");
        break;
    }
    switch(dv)
    {
    case 1:
        printf("\t mot");
        break;
    case 2:
        printf("\t hai");
        break;
    case 3:
        printf("\t ba ");
        break;
    case 4:
        printf("\t bon ");
        break;
    case 5:
        printf("\t nam ");
        break;
    case 6:
        printf("\t sau ");
        break;
    case 7:
        printf("\t bay ");
        break;
    case 8:
        printf("\t tam ");
        break;
    case 9:
        printf("\t 130312chin ");
        break;
    case 0:
        break;
    }
}
