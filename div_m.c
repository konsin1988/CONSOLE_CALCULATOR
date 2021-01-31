#include <stddef.h>
#include <stdio.h>
#include "print_type_parameters.h"

void div_m(char** argv)
{
	char* param = "double";
	double a, b;
	if(sscanf(argv[2], "%lf", &a) != 1 || sscanf(argv[3], "%lf", &b) != 1)
	{
		print_type_parameters(argv[1], param);
		return;
	}
	printf("%.6lf\n", a / b);
}
