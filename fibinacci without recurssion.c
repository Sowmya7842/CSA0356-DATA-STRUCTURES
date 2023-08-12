#include<stdio.h>
int main(){
int fib( int n);
int n;
int fibonacci;
printf("enter value of n");
scanf("%d",&n);
fibonacci=fib(n);
printf(" fibonnaci of number %d",fibonacci);
return 0;
}
int fib(int n)
{
	if(n==0)
	return 0;
else if(n==1)
return 1;
else
	return fib(n-1)+fib(n-2);	
}
