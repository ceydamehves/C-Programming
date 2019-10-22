#include<stdio.h>

//This code shows summation loop.
int main(){
	int number;
    
	printf("Enter the number:");
	scanf("%d",&number);
	
	int x = 0;
	int sum = 0;
	printf("Values:");
	while (x <= number){
		printf("\n%d\n",x);
		x++;
		sum += x;
	} 
	printf("Sum:%d",sum);
}