#include<stdio.h>
//Develop a Program to count the total number of digits in a number.

main()
{
	int i=1,n;
	printf("Enter a num  :");
	scanf("%d",&n);
	
	while(n>9)
	{
		n=n/10;
		i++;
	}
	printf("Your num %d digit num ",i);
}

