#include<stdio.h>
   int main ()
{
    float a,b;
    printf ("nhap 2 so a,b bat ki:");
    scanf ("%f%f",&a,&b);
    if (a>b)
    {
      printf ("a lon hon b");
    }
    else if (a==b)
    {
      printf ("a bang b");
    }
    else
    {
      printf ("a nho hon b");
    }
}

