#include <stdio.h>
//this code shows power of number
int main(){
	int number,power,result;
	
	int x =1;
	
	printf("Enter the number:");
	scanf("%d",&number);
	printf("Enter the power:");
	scanf("%d",&power);
	
	result = number;
	while (x < power){
		result = result*number;
		x++;
	}
	printf("%d (st nd rd th)power of %d is %d",power,number,result);
}