//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (num1 == num2) 
	{
        printf("The integers are equal.\n");
    } 
	else 
	{
        printf("The integers are not equal.\n");
    }

    return 0;
}

