#include<stdio.h>
    int main ()
{
    float a,b;
    printf ("Nhap 2 moc thoi gian trong ngay(gio):");
    scanf ("%f%f",&a,&b);
    printf (" khoang cach giua 2 moc thoi gian la:%f",(a-b)*3600);
}
