#include <inttypes.h>
#include <stdio.h>
#include "fast_exp.h"

double sqrt_all(int t, int st, int l, int count)
{
	if(count == 7) return (double)l/fast_exp(10, 7);
	while(fast_exp(l, st) <= t)
	{
		if(fast_exp(l, st) == t)
			return (double)l/fast_exp(10, count);
		++l;
	}
	sqrt_all(t*100, st, (l-1)*10, count+1);
}
