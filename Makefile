obj=fast_exp.o help_print.o print_requires_more.o print_type_parameters.o sum_m.o sub_m.o prod_m.o int_div.o mod_m.o div_m.o dvs.o pow_m.o sqrt_m.o root_all.o my_sqrt.o sqrt_all.o 
cr: main.c $(obj)
	gcc $^ -o $@ -lm

clean:
	rm *.o


