#include<stdio.h>
    int main ()
{
    int a,b,c;
    printf("Nhap vao ngay thang nam:");
    scanf("%d%d%d",&a,&b,&c);
    if(c%4==0&&c%100!=0||c%400==0)
    {
       if(b==2)
       {
           if(0<a&&a<29)
           {
               a=a+1;
               printf("ngay %d thang %d nam %d",a,b,c);
           }
           else
           {
               if(a==29)
               {
                   a=1;
                   b=3;
                   printf("ngay %d thang %d nam %d",a,b,c);
               }
               else
               {
                   printf("vo ly");
               }
           }
       }
       else
       {
           if(b==1||b==3||b==5||b==7||b==8||b==10)
           {
               if(0<a&&a<31)
               {
                   a=a+1;
                   printf("ngay %d thang %d nam %d",a,b,c);
               }
               else
               {
                   if(a==31)
                   {
                       a=1;
                       b=b+1;
                       printf("ngay %d thang %d nam %d",a,b,c);
                   }
                   else
                   {
                       printf("vo ly");
                   }
               }
           }
           else
           {
               if(b==4||b==6||b==9||b==11)
               {
                   if(0<a&&a<30)
                   {
                       a=a+1;
                       printf("ngay %d thang %d nam %d",a,b,c);
                   }
                   else
                   {
                       if(a==30)
                       {
                           a=1;
                           b=b+1;
                           printf("ngay %d thang %d nam %d",a,b,c);
                       }
                       else
                       {
                           printf("vo ly");
                       }
                   }
               }
               else
               {
                   if(b==12)
                   {
                       if(0<a&&a<31)
                       {
                           a=a+1;
                           printf("ngay %d thang %d nam %d",a,b,c);
                       }
                       else
                       {
                           if(a==31)
                           {
                               a=1;
                               b=1;
                               c=c+1;
                               printf("ngay %d thang %d nam %d",a,b,c);
                           }
                           else
                           {
                               printf("vo ly");
                           }
                       }
                   }
               }
           }

       }
    }
    else
    {

       if(b==2)
       {
           if(0<a&&a<28)
           {
               a=a+1;
               printf("ngay %d thang %d nam %d",a,b,c);
           }
           else
           {
               if(a==28)
               {
                   a=1;
                   b=3;
                   printf("ngay %d thang %d nam %d",a,b,c);
               }
               else
               {
                   printf("vo ly");
               }
           }
       }
       else
       {
           if(b==1||b==3||b==5||b==7||b==8||b==10)
           {
               if(0<a&&a<31)
               {
                   a=a+1;
                   printf("ngay %d thang %d nam %d",a,b,c);
               }
               else
               {
                   if(a==31)
                   {
                       a=1;
                       b=b+1;
                       printf("ngay %d thang %d nam %d",a,b,c);
                   }
                   else
                   {
                       printf("vo ly");
                   }
               }
           }
           else
           {
               if(b==4||b==6||b==9||b==11)
               {
                   if(0<a&&a<30)
                   {
                       a=a+1;
                       printf("ngay %d thang %d nam %d",a,b,c);
                   }
                   else
                   {
                       if(a==30)
                       {
                           a=1;
                           b=b+1;
                           printf("ngay %d thang %d nam %d",a,b,c);
                       }
                       else
                       {
                           printf("vo ly");
                       }
                   }
               }
               else
               {
                   if(b==12)
                   {
                       if(0<a&&a<31)
                       {
                           a=a+1;
                           printf("ngay %d thang %d nam %d",a,b,c);
                       }
                       else
                       {
                           if(a==31)
                           {
                               a=1;
                               b=1;
                               c=c+1;
                               printf("ngay %d thang %d nam %d",a,b,c);
                           }
                           else
                           {
                               printf("vo ly");
                           }
                       }
                   }
               }
           }

       }
    }
}
