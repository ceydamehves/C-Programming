#include <stdio.h>
//This code calculates sum and average.
int main(){
	int num1,num2,num3,sum,average,product,max,min;
	
	
	printf("Enter 3 number:");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	
		
	sum = num1 + num2 + num3 ;
	average = (num1 + num2 + num3)/3;
	product = (num1 * num2 * num3);
		
	
	printf("Sum is:%d\n",sum);
	printf("Average is:%d\n",average);
	printf("Product is:%d\n",product);
	
	max = num3 ;
	if (num2 > max )
		max = num2;
	if (num1 > max )
		max = num1;
		
	printf("largest:%d\n",max);
	
	min = num3 ;
	if (num2 < min )
		min = num2;
	if (num1 < min )
		min = num1;
		
	printf("smallest:%d\n",min);
}