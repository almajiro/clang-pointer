#include <stdio.h>
#include <stdlib.h>

int global_variable;
static int file_static_variable;

void func1(void)
{
	int func1_variable;
	static int func1_static_variable;

	printf("&func1_variable..%p\n", &func1_variable);
	printf("&func1_static_variable..%p\n", &func1_static_variable);
}

void func2(void)
{
	int func2_variable;
	printf("&func2_variable..%p\n", &func2_variable);
}

int main(void)
{
	int *p;

	// display the pointer to function
	printf("&func1..%p\n", func1);
	printf("&func2..%p\n", func2);

	// display the string literal address
	printf("string literal..%p\n", "abc");

	// display the global variable address
	printf("&global_variable..%p\n", &global_variable);

	// display the global variable (in file) address
	printf("&file_static_variable..%p\n", &file_static_variable);

	// display the local variables
	func1();
	func2();

	// display the address allocated by malloc
	p = malloc(sizeof(int));
	printf("malloc address..%p\n", p);


	return 0;
}
