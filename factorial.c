#include<stdio.h>

//This code shows factoriel with while loop.
int main(){
	int number;
    int x = 1;
    int factoriel = 1;
    
	printf("Enter the number for evaluate:");
	scanf("%d",&number);
	
	while( x <= number){
		factoriel = factoriel * x;
		x++;
	}
	printf("%d factoriel is %d",number,factoriel);
	
}