#include <stdio.h>
int main()
{
	int i;
	int s;
	
	for (i=1,s=0; i<=5; s+=i++);
	printf("Tong la: %d",s);
	
}
