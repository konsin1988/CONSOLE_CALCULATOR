#include <stddef.h>
#include <stdio.h>
#include "print_type_parameters.h"

void dvs(char** argv)
{
	char* param = "int";
	int a; 
	if(sscanf(argv[2], "%d", &a) != 1)
	{
		print_type_parameters(argv[1], param);
		return;
	}
	for (int i = 2; i<= (a+1)/2; ++i) 
	{
		if(a % i == 0)
			printf("%d ", i);
	}
	printf("\n");
}
