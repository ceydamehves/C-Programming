#include<stdio.h>
//This code calculates bmi, values taken from user.
int main() {
   float weight, height, bmi;
   printf("Enter weight in kg and height in meter:");
   scanf("%f%f",&weight,&height);
   bmi= weight/(height*height);
   printf("bmi: %f",bmi);
}

