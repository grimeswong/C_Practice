
// When an array is created, int myarray[4] = {1,2,3,0};, what actually happens
// is the compiler allocates memory for the entire array
// and then assigns a pointer to the array variable,
// in this case myarray, holding the address of the first element in the array.

#include <stdio.h>

int main(int argc, char **argv)
{
	int myarray[4] = {1,2,3,0};

	// you can do this, myarray is a valid int pointer pointing to the first element of myarray
	int *ptr = myarray;
	printf("*ptr=%d\n", *ptr);

  printf("*ptr[0]=%d\n", *(ptr)); // Get the first element of the array
  printf("*ptr[1]=%d\n", *(ptr+1)); // Get the second element of the array
  printf("*ptr[2]=%d\n", *(ptr+2)); // Get the third element of the array
  printf("*ptr[3]=%d\n", *(ptr+3)); // Get the fourth element of the array
  printf("*ptr[4]=%d\n", *(ptr+4)); // Get the out of bound element of the array

	// you cannot do this, array variables cannot be reassigned
	// myarray = ptr
	// myarray = myarray2
	// myarray = &myarray2[0]
}

  // Result
  // *ptr=1
  // *ptr[0]=1
  // *ptr[1]=2
  // *ptr[2]=3
  // *ptr[3]=0
  // *ptr[4]=1508649856   /* the out of bound of the address (Wrong)
