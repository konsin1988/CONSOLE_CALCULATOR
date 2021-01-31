#include <inttypes.h>
#include <stdio.h>
#include "fast_exp.h"

double my_sqrt(int t, int l, int count)
{
	if(count == 7) return (double)l/fast_exp(10, 7);
	while(l * l <= t)
	{
		if(l*l == t)
			return (double)l/fast_exp(10, count);
		++l;
	}
	my_sqrt(t*100, (l-1)*10, count+1);
}
