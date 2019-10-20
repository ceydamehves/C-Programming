#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//In this code, There is rand method.
int main(){

    int num;

    printf("Please choose a number between 1-10:");
    scanf("%d",&num);

    srand(time(NULL));
    int randomnumber=1+rand()%10;//between 1-10

    if (randomnumber==num){
        printf("You won!");
    }
    else{
        printf("Try Again.");
    }


    
}