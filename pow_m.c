#include <stddef.h>
#include <stdio.h>
#include "print_type_parameters.h"
#include "fast_exp.h"

void pow_m(char** argv)
{
	char* param = "double, int";
	double a;
	int b;
	if(sscanf(argv[2], "%lf", &a) != 1 || sscanf(argv[3], "%d", &b) != 1)
	{
		print_type_parameters(argv[1], param);
		return;
	}
	printf("%lf\n", fast_exp(a, b));
}
