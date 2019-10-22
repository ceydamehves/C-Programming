#include<stdio.h>
#include<string.h>//for strcmp 
//This code shows how strcmp works.
int main(){
    char name[10] = "Ceyda";
    int password[10] = 123;

    char username[10];
    int userpass[10];

    printf("Enter your username:");
    scanf("%s",&username);

    printf("Enter your password:");
    scanf("%d",userpass);

    if(strcmp(name,username) == 0 && (password == userpass)){ //strcmp checks if correct.
        printf("Login Succesfull")

    }
    else
    {
        printf("Check your username or password.");
    }

}