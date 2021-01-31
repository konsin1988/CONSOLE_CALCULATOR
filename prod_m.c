#include <stddef.h>
#include <stdio.h>
#include "print_type_parameters.h"

void prod_m(char** argv)
{
	double prod=1.0, a;
	char* param = "double";
	size_t i = 2;
	while(argv[i])
	{
		if(sscanf(argv[i], "%lf", &a) != 1)
		{
			print_type_parameters(argv[1], param);
			return;
		}
		prod *= a;
		++i;
	}
	printf("%.2lf\n", prod);
}
