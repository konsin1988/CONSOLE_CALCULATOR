#include <stdio.h>

void help_print(char* arg)
{
	printf("Syntax: \n\t  %s sm a argv* : summing a and one or more arguments"
			"\n\t\tsb a b : substraction a minus b"
			"\n\t\tpr a argv* : production a and one or more arguments"
			"\n\t\tin a b : integer division a by b"
			"\n\t\tmd a b : a modulo b"
			"\n\t\tdv a b : division a by b"
			"\n\t\tdvs a : all divisors a"
			"\n\t\tpw a b : a to power b"
			"\n\t\tsq a : square root of a"
			"\n\t\trl a b : root of a degree b\n", arg);

}
