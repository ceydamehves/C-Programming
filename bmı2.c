#include <stdio.h>
//This code calculates bmi with if statements, values taken from user.
int main(){
	float weight, height, bmi;
    printf("Enter weight in kg :");
    scanf("%f",&weight);
    printf("Enter height in meter :");
    scanf("%f",&height);
    
    bmi= weight/(height*height);
    printf("BMI for a person of %.2f kg and %.2f -m is %.2f \n",weight,height,bmi);
    
    if (bmi < 18.5){
    	printf("Underweight");
	}
	if (bmi > 18.5 && bmi < 22.9){
		printf("Normal");
	}
	if (bmi > 23 && bmi < 24.9){
		printf("Overweight-At Risk");
	}
	if (bmi > 25 && bmi < 29.9){
		printf("Overweight-Moderately Obese");
	}
	if (bmi >= 30){
		printf("Overweight-Severely Obese");
	}
    
	
}