#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "help_print.h"
#include "print_requires_more.h"
#include "operations.h"


int main(int argc, char** argv)
{
	if(argc <= 1) {
		printf("Syntax: \n\t%s --help \n", argv[0]);
		return 0;
	}
	else if(!strcmp(argv[1], "--help")) {
		help_print(argv[0]);
		return 0;
	}
	else if(!strcmp(argv[1], "sm")) {
		if(argc<=3) print_requires_more(argv[1], "two or more ");
		else sum_m(argv);
	}
	else if(!strcmp(argv[1], "sb")) {
		if(argc != 4) print_requires_more(argv[1], "two ");
		else sub_m(argv);
	}
	else if(!strcmp(argv[1], "pr")) {
		if(argc<=3) print_requires_more(argv[1], "two or more ");
		else prod_m(argv);
	}
	else if(!strcmp(argv[1], "in")) {
		if(argc != 4) print_requires_more(argv[1], "two ");
		else int_div(argv);
	}
	else if(!strcmp(argv[1], "md")) {
		if(argc != 4) print_requires_more(argv[1], "two ");
		else mod_m(argv);
	}
	else if(!strcmp(argv[1], "dv")) {
		if(argc != 4) print_requires_more(argv[1], "two ");
		else div_m(argv);
	}
	else if(!strcmp(argv[1], "dvs")) {
		if(argc != 3) print_requires_more(argv[1], "one ");
		else dvs(argv);
	}
	else if(!strcmp(argv[1], "pw")) {
		if(argc != 4) print_requires_more(argv[1], "two ");
		else pow_m(argv);
	}
	else if(!strcmp(argv[1], "sq")) {
		if(argc != 3) print_requires_more(argv[1], "one ");
		else sqrt_m(argv);
	}
	else if(!strcmp(argv[1], "rl")) {
		if(argc != 4) print_requires_more(argv[1], "two ");
		else root_all(argv);
	}
	else printf("Unknown parameter: '%s'."
	"Type %s --help for help.\n", argv[1], argv[0]);
	

	return 0;
}
