#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void nhap(int arr[],int *n){
	int i=0;
    do
    {
        printf("Nhap n > 0 : ");
        scanf("%d", n);
    }while(*n<=0);
    srand((int) time(0));
    while(i < *n)
    {
    	//srand((int) time(0));
        int x=rand();
        int j,flag=1;
		for( j=0 ; j<*n ; j++)
    	{
        	if(arr[j] == x)
        	{
            	flag= 0;
        	}
    	}
        if(flag==1)
        {
            arr[i++]=x;
        }
    }
}
void xuat(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
int main(){
	int arr[100],n;
	nhap(arr,&n);
	xuat(arr,n);
}
