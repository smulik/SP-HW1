#include "MathIsFun.h"

/*
 * Calculates the largest integer less or equal than the square root of x.
 * funSqrt(10) = 3
 * funSqrt(16) = 4
 * @param x - An integer for which the function applies
 * @return the value of |_sqrt(x)_|, if x is negative then the function
 * returns -1.
 */
int funSqrt(int x); // ==> Declaration is always in the beginning of the file.

int funPow(int x, int n, int d) {
	if(x < 0)
		x = (x % d) + d;
	if(n==0)
		return 1;
	int p = funPow(x, n / 2, d);
	if(n%2==0)
		return (p * p) % d;
	else
		return (x * p * p) %d;
}

int funSqrt(int x) {
	int low = 0, high = x;
	int mid = (low + high) / 2;
	while(mid!= low && mid != high)
	{
		if(mid * mid < x)
			low = mid;
		else if(mid * mid == x)
			return mid;
		else
			high = mid;
		mid = (low + high) / 2;
	}
	return mid;
}

bool funPrimeCheck(int x) {
	if(x <= 1)
		return false;
	if(x == 2)
		return true;
	if(x %2 == 0)
		return false;

	int s = funSqrt(x);
	int i = 0;
	for(i = 3; i <= s; i+=2)
		if(x % i == 0)
			return false;
	return true;
}

bool funPalindromeCheck(int x) {
	if(x < 0)
		return false;
	if(x < 10)
		return true;
	int rx = 0;
	int y = x;
	while(y != 0)
	{
		rx *= 10;
		rx += y % 10;
		y /= 10;
	}
	return x == rx;
}
