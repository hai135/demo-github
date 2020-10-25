#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
    int chon;
    float x,a,b,c,p,s;
    while(1)
    {
        system("cls");
        printf("1,Tinh dien tich tam giac\n");
        printf("2,Tinh dien tich hinh chu nhat\n");
        printf("3,Tinh dien tich hinh tron\n");
        printf("4,Ket thuc\n");
        printf("moi chon:");
        scanf("%d",&chon);
        switch(chon)
        {
        case 1:
            printf("Ban muon tinh dien tich tam giac\n");
            printf("Nhap a,b,c lan luot la 3 canh cua tam giac:");
            scanf("%f%f%f",&a,&b,&c);
            p=(a+b+c)/2;
            s=sqrt(p*(p-a)*(p-b)*(p-c));
            printf("dien tich tam giac = %f",s);
            break;
        case 2:
            printf("Ban muon tinh dien tich hinh chu nhat\n");
            printf("Nhap do dai 2 canh hinh chu nhat:");
            scanf("%f%f",&a,&b);
            printf("Dien tich hinh chu nhat=%f",a*b);
            break;
        case 3:
            printf("Ban muon tinh dien tich hinh tron\n");
            printf("Nhap do dai ban kinh hinh tron:");
            scanf("%f",&a);
            printf("Dien tich hinh tron=%f",3.14*a*a);
            break;
        case 4:
            printf("Chuong trinh ket thuc");
            return 0;
        default:
            printf("moi ban chon lai");
        }
        getch();
    }
}
