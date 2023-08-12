#include<stdio.h>
int main()
{
	int n,r,d;
	printf("enter n");
	scanf("%d",&n);
	while(n){
		d=n%10;
		printf("%d",d);
		n/=10;
	}
}
