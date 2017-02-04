
// Pointer usage

#include <stdio.h>

int main(int argc, char **argv)
{
	// declare int ival and int pointer iptr.  Assign address of ival to iptr.
	int ival = 1;
	int *iptr = &ival;

	// dereference iptr to get value pointed to, ival, which is 1
	int get = *iptr;
	printf("*iptr = %d (by dereference)\n", get); // Get the value of ival
  printf("*iptr = %d (by \"*iptr\")\n", *iptr); // Get the value of ival
  printf("&ival = %x\n", &ival); // Get the address of ival


	// dereference iptr to set value pointed to, changes ival to 2
	*iptr = 2;
	int set = *iptr;
	printf("*iptr = %d\n", set);
	printf("ival = %d\n", ival);
}
// Result
// *iptr = 1 (by dereference)
// *iptr = 1 (by "*iptr")
// &ival = 5d773b5c   //address of ival;
// *iptr = 2
// ival = 2
