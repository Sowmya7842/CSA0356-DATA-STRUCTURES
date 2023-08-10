#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter value of n:");
	scanf("%d",&n);
	if(n<0||n>0){
		if(n<0){
			printf("%d is negative",n);
		}
		for(i=1;i<=n;i++)	
		{
		
		fact=fact*i;
}
	printf("%d",fact);
} 
else{
printf("charcters are not allowed\n");
printf("enter valid input");
return 0;
}
}
