#include<stdio.h>
//Develop a Program to find the sum of a number's first and last digits.

main()

{
	int i=1,n,ld;
	printf("Enter a num  : ");
	scanf("%d",&n);
	ld=n%10;
	
	while(n>9)
	{
		n =n/10;
	}
	printf("First digit = %d\n\n",n);
	printf("last digit digit = %d\n\n",ld);
	printf("Your first digit and last digit sum  is %d ",n+ld);
}

