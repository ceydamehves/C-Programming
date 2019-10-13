#include<stdio.h>
//This code asks to user --enter 2 numbers and choose the operation--.
int main(){
	int num1,num2,choice;
	printf("Enter two number:");
	scanf("%d%d",&num1,&num2);
	
	printf("Make a choice\n[1]+\n[2]-\n[3]*\n[4]/\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("You've choose addition :%d",num1+num2);
		break;
		case 2:
			printf("You've choose subtraction :%d",num1-num2);
		break;
		case 3:
			printf("You've choose multiplication :%d",num1*num2);
		break;
		case 4:
			printf("You've choose division :%d",num1/num2);
		break;
		default:printf("You've made a mistake!! Try Again");
	}
	
	
	
}