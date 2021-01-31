#include <stddef.h>
#include <stdio.h>
#include "print_type_parameters.h"
#include "my_sqrt.h"

void sqrt_m(char** argv)
{
	char* param = "int";
	int a; 
	if(sscanf(argv[2], "%d", &a) != 1)
	{
		print_type_parameters(argv[1], param);
		return;
	}
	printf("%lf\n", my_sqrt(a, 0, 0));
}
