#include<stdio.h>

//This code shows the reverse of the entered number.
int main(){
	int number,reverse;
    
	printf("Enter the number:");
	scanf("%d",&number);
	
	while(number != 0 ){
		reverse = reverse*10; //it will be zero at first time.
		reverse = reverse + number%10; 
		number = number/10;
	}
	
	printf("\nReverse of the number is: %d",reverse);
	
	
}