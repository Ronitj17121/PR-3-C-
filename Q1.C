#include<stdio.h>
//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using ado-while loop.

main()
{
	char ch='a';
	
	do
	{
		printf("%c  ",ch);
		ch++;	
	}while(ch<='z');
}

