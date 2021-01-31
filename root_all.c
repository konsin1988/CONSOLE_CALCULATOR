#include <stddef.h>
#include <stdio.h>
#include "print_type_parameters.h"
#include "sqrt_all.h"

void root_all(char** argv)
{
	char* param = "int";
	int a, b; 
	if(sscanf(argv[2], "%d", &a) != 1 || sscanf(argv[3], "%d", &b) != 1)
	{
		print_type_parameters(argv[1], param);
		return;
	}
	printf("%lf\n", sqrt_all(a, b, 0, 0));
}
