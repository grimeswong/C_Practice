// A storage class defines the scope (visibility) and life-time of variables and/or functions within a C Program.
// They precede the type that they modify. We have four different storage classes in a C program −

// auto - The auto storage class is the default storage class for all local variables.
// register - The register storage class is used to define local variables that should be stored in a register instead of RA
// static - The static storage class instructs the compiler to keep a local variable in existence during the life-time
//          of the program instead of creating and destroying it each time it comes into and goes out of scope
// extern - The extern storage class is used to give a reference of a global variable that is visible to ALL the program files

// The extern storage class is used to give a reference of a global variable that is visible to ALL the program files.
// When you use 'extern', the variable cannot be initialized however, it points the variable name at a storage location
// that has been previously defined.
//
// When you have multiple files and you define a global variable or function, which will also be used in other files,
// then extern will be used in another file to provide the reference of defined variable or function. Just for understanding,
// extern is used to declare a global variable or function in another file.

#include <stdio.h>

int count;
extern void write_extern();

int main() {
  count = 5;
  write_extern();

}
