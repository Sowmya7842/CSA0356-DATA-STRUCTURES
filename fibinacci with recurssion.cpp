#include<stdio.h>
int main(){
	int t1=0,t2=1;
	int nextterm=t1+t2;
	int i,n;
	printf("enter n");
	scanf("%d",&n);
	printf("fibonacci series of n is %d",n);
	if(n>0 || n<0){
	for(i=3;i<=n;i++){
		printf("%d,",nextterm);
		t1=t2;
		t2=nextterm;
		nextterm=t1+t2;}
	else if(n<0)
		printf("%d is negative",n);
		else 
		printf("charcters are not allowed");
		
	}
}
