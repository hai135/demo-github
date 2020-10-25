#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char HoTen[50],SoThich[50],QueQuan[50];
    int Tuoi,NamSinh;
    gets(HoTen);
    scanf("%d%d",&Tuoi,&NamSinh);
    fflush(stdin);
    gets(SoThich);
    gets(QueQuan);
    puts(HoTen);
    printf("Tuoi:%d\nNamSinh:%d\n",Tuoi,NamSinh);
    puts(SoThich);
    puts(QueQuan);

}
