/* 6.Write a C program to read the value 
of integer m and display the value of n is 
1 when m is larger than 0, 0 when m is 0 
and -1 when m is less than 0. 
	Test Data: -5
	Expected Output:
		The value of n = -1 */
		
#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter number :");
	scanf("%d",&m);
	if(m>0)
	{
		printf("The value of n = -1");
	}
	else if(m==0)
	{
		printf("The value of n = 0");
	}
	else if(m<0)
	{
		printf("The value of n = -1");
	}
}
