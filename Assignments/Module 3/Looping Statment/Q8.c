//8. Write a program to find out the max from given number (E.g., No: -1562
//   Max number is 6)
#include <stdio.h>
int main()
{
	int num , i , max , rem;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	while(num != 0)
	{
		rem = num %10;
		if(rem>max)
		{
			max = rem;
		}
		num = num/10;
	}
	
	printf("Maximum number is = %d",max);
	return 0;
}
