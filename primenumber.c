#include <stdio.h>
//this code shows prime number
int main(){	
	int number;
    int counter=0;
	int x;
	
	printf("Enter the number:");
	scanf("%d",&number);

	for(x=2; x<number;x++)
	{
        if(number%x==0){
            counter++;
        }
        else if(counter==0){
            printf("\nNumber is prime");
        }
        else
        {
            printf("\nNumber is not prime");
        }
    }
}