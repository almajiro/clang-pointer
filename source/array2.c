#include <stdio.h>

int main(void)
{
	int array[5];
	int *p;
	int i;

	// set values using array.
	for(i=0; i<5; i++)
		array[i] = i;

	// show values using pointer.
	for(p = &array[0]; p != &array[5]; p++)
		printf("%d\n", *p);

	return 0;
}
