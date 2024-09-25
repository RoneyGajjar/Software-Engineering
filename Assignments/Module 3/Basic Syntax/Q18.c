//18.Calculate person’s Annual salary
#include<stdio.h>
int main() 
{
    float annualSalary,monthlySalary;

    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    annualSalary = monthlySalary * 12;

    printf("Your annual salary is: %.2f\n", annualSalary);

    return 0;
}

