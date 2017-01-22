// A storage class defines the scope (visibility) and life-time of variables and/or functions within a C Program.
// They precede the type that they modify. We have four different storage classes in a C program −

// auto - The auto storage class is the default storage class for all local variables.
// register - The register storage class is used to define local variables that should be stored in a register instead of RA
// static - The static storage class instructs the compiler to keep a local variable in existence during the life-time
//          of the program instead of creating and destroying it each time it comes into and goes out of scope
// extern - The extern storage class is used to give a reference of a global variable that is visible to ALL the program files

#include <stdio.h>

/* function declaration */
void func(void);

static int count = 5; // global variable

main() { // can omit int but warning will be noticed
  while(count--) {
    func();
  }
  return 0;
}

/* function definition */
void func() {
  static int i = 5; //local variable
  i++;

  printf("i is %d and count is %d\n", i, count);
}
