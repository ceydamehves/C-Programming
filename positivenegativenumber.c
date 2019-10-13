int main(){
//This code shows positive and negative number, values from user.
	int num;
 
    printf("Please enter a number :");
    scanf("%d", &num);

    if (num >= 0)
        printf("%d is a positive number \n", num);
    if (num == 0)
    	printf("½d is zero \n",num);
    if (num <= 0)
        printf("%d is a negative number \n", num);
}