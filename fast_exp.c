#include <stdio.h>
#include <inttypes.h>

double fast_exp(double num, int exp)
{
	if(num == 0) return 0;
	if(num == 1) return 1;
	if(exp == 0) return 1;
	else if (exp%2 == 0) 
	{
		return fast_exp(num*num, exp/2);
	}
	else
	{
		return num * fast_exp(num, exp - 1);
	}
}
