#include<stdio.h>
int main()
{
    int count =0;
    for(int i=65;i<91;i++)
    {
        printf("%c",i);
        count++;
        if(count==10)
        {
            printf("\n");
            count=0;
        }
    }

}
