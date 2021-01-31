#include <stddef.h>
#include <stdio.h>
#include "print_type_parameters.h"

void int_div(char** argv)
{
	char* param = "int";
	int a, b;
	if(sscanf(argv[2], "%d", &a) != 1 || sscanf(argv[3], "%d", &b) != 1)
	{
		print_type_parameters(argv[1], param);
		return;
	}
	printf("%d\n", a / b);
}
