// What are Pointers?
// A pointer is a variable whose value is the address of another variable,
// i.e., direct address of the memory location. Like any variable or constant,
// you must declare a pointer before using it to store any variable address.
// The general form of a pointer variable declaration is −
//
// type *var-name;

#include <stdio.h>

int main() {

  int var = 20; //actual variable declaration
  int *ip;      //pointer variable declaration

  ip = &var;  //store address of var in variable declaration

      printf("Address of var variable: %x\n", &var  );  //%x Unsigned hexadecimal value, lower case a-f, no leading 0 or x

  /* address stored in pointer variable */
  printf("Address stored in ip variable :%x\n", &var);

  /* access the value using pointer */
  printf("Value of *ip variable :%d\n", *ip);

  return 0;
}
// Result:
// Address of var variable: 57becb78
// Address stored in ip variable :57becb78
// Value of *ip variable :20
