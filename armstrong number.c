#include<stdio.h>
int main()
{
int num,sum=0,digit;
printf("enter the number:");
scanf("%d",&num);
while(num){
digit=num%10;
sum+=(digit*digit*digit);
num/=10;
}
if(sum==153){
printf("it is an armstrong");}
else{
printf("it is not an armstrong");
}

}
