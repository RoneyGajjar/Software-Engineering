//19.1. Patterns:

/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
	
#include <stdio.h>
int main()
{
	int i,j,num;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	for(i=1 ; i<=num ; i++)
	{
		for(j=1 ; j<=i; j++)
		{
			if(j%2 == 0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
	return 0;
}
