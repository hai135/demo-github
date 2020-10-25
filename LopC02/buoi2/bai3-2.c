#include<stdio.h>
    int main ()
{
    int d,m,y;
    printf("Nhap vao ngay thang nam:");
    scanf("%d%d%d",&d,&m,&y);
    if(y%4==0&&y%100!=0||y%400==0)
    {
       if(m==3)
       {
           if(1<d&&d<=31)
           {
               d=d-1;
               printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
           }
           else
           {
               if(d==1)
               {
                   d=29;
                   m=2;
                   printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
               }
               else
               {
                   printf("vo ly");
               }
           }
       }
       else
       {
           if(m==5||m==7||m==12||m==10||m==8)
           {
               if(1<d&&d<=31)
               {
                   d=d-1;
                   printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
               }
               else
               {
                   if(d==1)
                   {
                       d=30;
                       m=m-1;
                       printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                   }
                   else
                   {
                       printf("vo ly");
                   }
               }
           }
           else
           {
               if(m==4||m==6||m==9||m==11)
               {
                   if(1<d&&d<=30)
                   {
                       d=d-1;
                       printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                   }
                   else
                   {
                       if(d==1)
                       {
                           d=31;
                           m=m-1;
                           printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                       }
                       else
                       {
                           printf("vo ly");
                       }
                   }
               }
               else
               {
                   if(m==1)
                   {
                       if(1<d&&d<=31)
                       {
                           d=d-1;
                           printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                       }
                       else
                       {
                           if(d==1)
                           {
                               d=31;
                               m=12;
                               y=y-1;
                               printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                           }
                           else
                           {
                               printf("vo ly");
                           }
                       }
                   }
                   else
                   {
                       if(m==2)
                       {
                           if(1<d&&d<=29)
                           {
                               d=d-1;
                               printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                           }
                           else
                           {
                               if(d==1)
                               {
                                   d=31;
                                   m=1;
                                   printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
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
    else
    {
    if(m==3)
       {
           if(1<d&&d<=31)
           {
               d=d-1;
               printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
           }
           else
           {
               if(d==1)
               {
                   d=28;
                   m=2;
                   printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
               }
               else
               {
                   printf("vo ly");
               }
           }
       }
       else
       {
           if(m==5||m==7||m==12||m==10||m==8)
           {
               if(1<d&&d<=31)
               {
                   d=d-1;
                   printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
               }
               else
               {
                   if(d==1)
                   {
                       d=30;
                       m=m-1;
                       printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                   }
                   else
                   {
                       printf("vo ly");
                   }
               }
           }
           else
           {
               if(m==4||m==6||m==9||m==11)
               {
                   if(1<d&&d<=30)
                   {
                       d=d-1;
                       printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                   }
                   else
                   {
                       if(d==1)
                       {
                           d=31;
                           m=m-1;
                           printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                       }
                       else
                       {
                           printf("vo ly");
                       }
                   }
               }
               else
               {
                   if(m==1)
                   {
                       if(1<d&&d<=31)
                       {
                           d=d-1;
                           printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                       }
                       else
                       {
                           if(d==1)
                           {
                               d=31;
                               m=12;
                               y=y-1;
                               printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                           }
                           else
                           {
                               printf("vo ly");
                           }
                       }
                   }
                   else
                   {
                       if(m==2)
                       {
                           if(1<d&&d<=28)
                           {
                               d=d-1;
                               printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
                           }
                           else
                           {
                               if(d==1)
                               {
                                   d=31;
                                   m=1;
                                   printf("Truoc do la ngay %d thang %d nam %d",d,m,y);
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
}

