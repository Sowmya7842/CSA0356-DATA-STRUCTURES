#include<stdio.h>
int main(){
	int a;
	printf("enter value of a:");
	scanf("%d",&a);
	if(a>0||a<0){
		if(a<0){
			printf("%d is negative\n",a);
		}
    if(a%2==0){
    	
    printf("even");}
else
{
	printf("odd\n");}
}
else{
	printf("characters are not allowed\n");
	printf("enter valid input");}
}
