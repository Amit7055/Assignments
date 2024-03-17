/*
28.	Write a program in C to display the first n terms of Fibonacci series. Fibonacci series 0 1 2 3 5 8 13 .....
	Test Data :
		Input number of terms to display : 10
	Expected Output :
 		Here is the Fibonacci series upto to 10 terms :
		0 1 1 2 3 5 8 13 21 34
*/

#include <stdio.h>
main() 
{
    int i,n, first = 0, second = 1, next;

    printf("Input number of terms to display: ");
    scanf("%d", &n);

    printf("Here is the Fibonacci series up to %d terms:\n", n);
    printf("%d %d ",first,second);
    for (i = 3; i <= n; i++) 
	{
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
}

