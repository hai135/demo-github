#include<stdio.h>
   int main ()
{
    int h1,m1,s1,h2,m2,s2,x,y;
    printf ("Nhap gio phut giay cua moc thoi gian:");
    scanf ("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
    printf ("gio 1 la:%dh%dm%ds",h1,m1,s1);
    printf ("\ngio 2 la:%dh%dm%ds",h2,m2,s2);
    x=h1 *3600+m1 *60+s1;
    y=h2 *3600+m2 *60+s2;
    printf ("\nthoi gian chenh lech la:%d",x-y);

}
