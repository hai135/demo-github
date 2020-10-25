#include<stdio.h>
#include<math.h>
  int main ()
{
    float a,b,c;
    printf ("Nhap 3 so a,b,c tu ban phim:");
    scanf ("%f%f%f",&a,&b,&c);
    printf ("Nghiem cua phuong trinh la:%.2f",(c-b)/a);
}
