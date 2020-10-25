#include<stdio.h>
int main ()
{
    int d;
    printf("Nhap so nguyen d:");
    scanf("%d",&d);
    if(d==2){
        printf("Thu Hai");
    }
    if(d==3){
        printf("Thu Ba");
    }
    if(d==4){
        printf("Thu Tu");
    }
    if(d==5){
        printf("Thu Nam");
    }
    if(d==6){
        printf("Thu Sau");
    }
    if(d==7){
        printf("Thu Bay");
    }
    if(d==8){
        printf("Chu Nhat");
    }
    if(d!=2&&d!=3&&d!=4&&d!=5&&d!=6&&d!=7&&d!=8){
        printf("Ngay khong hop le");
    }

}
