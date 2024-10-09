//3. Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>

int str_len(char str[]);

int main()
{
	char str[100];
	int len,i;
	
	printf("Enter a string = ");
    gets (str);
    
    len = str_len(str);
    
    printf("Character of string in reverse order:= \n");
    for (i=len-1 ; i>=0; i--)
    {
    	printf("Character at position %d: %c\n",i ,str[i]);
	}
	return 0;
}

int str_len(char str[]){
	int len=0;
	while(str[len]!='\0'){
		len++;
	}
	return len;
}
