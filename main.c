/*
 * main.c
 *
 *  Created on: Nov 24, 2016
 *      Authors: Asaf, Nimrod
 */
#include <stdio.h>
#include "MathIsFun.h"

int main()
{
	printf("Welcome to Math Is Fun - beta version\n");
	printf("Supported operations are:\n");
	printf("1 - Power Calculation\n");
	printf("2 - Prime Check\n");
	printf("3 - Palindrome Check\n");
	printf("Please enter operation number (1/2/3): \n");
	fflush(NULL);
	int operation = 0;
	scanf("%d", &operation);
	fflush(NULL);
	if(operation == 1)
	{
		printf("Please enter three space separated numbers: \n");
		fflush(NULL);
		int x = 0, n = 0, d = 0;
		scanf("%d %d %d", &x, &n, &d);
		fflush(NULL);
		int result = funPow(x, n, d);
		printf ("res = %d\n", result);
	}
	else if(operation ==2 || operation == 3)
	{
		printf("Please enter an integer: \n");
		fflush(NULL);
		int x = 0;
		scanf("%d", &x);
		fflush(NULL);
		bool result = false;
		if(operation == 2)
			result = funPrimeCheck(x);
		else
			result = funPalindromeCheck(x);
		printf("res = %s\n", result? "true" : "false");
	}
	fflush(NULL);
	return 0;
}
