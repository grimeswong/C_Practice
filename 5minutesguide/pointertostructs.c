
// Like an array, a pointer to a struct holds the memory address of the first element in the struct.
// Here is some example code for declaring and using a struct pointer.

#include <stdio.h>

int main(int argc, char **argv)
{
	struct person {
	  int age;
	  char *name;
	};
	struct person first; //like the created an object (put struct for the type)
	struct person *ptr;  // declare a pointer  (put struct for the type)

	first.age = 21;  //assign value to the person age
	first.name = "full name";  //assign value to the person name
	ptr = &first;  //use pointer to point to the person object address

	printf("age = %d, name = %s\n", first.age, ptr->name);
  The -> operator is used to access a value from a struct pointer.
}

// Result
// age=21, name=full name
