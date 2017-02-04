// A pointer can pointer to another pointer variable. You can have a pointer to a pointer,
// and a pointer to a pointer to a pointer and so on down the rabbit hole.
// In practice it is rare to see more than a pointer to a pointer. Usually two levels of indirection are enough.

#include <stdio.h>

int main(int argc, char **argv)
{
	int val = 1;
	int *ptr = 0;
	// declare a variable ptr2ptr which holds the value-at-address of
	// an *int type which in holds the value-at-address of an int type
	int **ptr2ptr = 0;
	ptr = &val;
	ptr2ptr = &ptr;
	printf("&ptr=%p, &val=%p\n", (void *)&ptr, (void *)&val);
	printf("ptr2ptr=%p, *ptr2ptr=%p, **ptr2ptr=%d\n", (void *)ptr2ptr, (void *)*ptr2ptr, **ptr2ptr);
}

//Result
// &ptr=0x7fff5e067b40, &val=0x7fff5e067b4c
// ptr2ptr=0x7fff5e067b40, *ptr2ptr=0x7fff5e067b4c, **ptr2ptr=1
