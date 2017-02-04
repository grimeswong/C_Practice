/* Source code to demonstrate, handling of pointers in C program */
#include <stdio.h>
int main(){

   int* pc; // pointer variable
   int c;   // variable

   c = 22;
   printf("Address of c: %u\n", &c);  // 26686784
   printf("Value of c: %d\n\n", c);   // 22
   pc = &c;                          // assign pointer 'pc' to address 'c'

   printf("Address of pointer pc: %u\n", pc);     // 26686784
   printf("Content of pointer pc: %d\n\n", *pc);  // 22
   c = 11;

   printf("Address of pointer pc: %u\n", pc);     // 26686784
   printf("Content of pointer pc: %d\n\n", *pc);  // 11
   *pc = 2;

   printf("Address of c: %u\n", &c);              // 26686784
   printf("Value of c: %d\n\n", c);               // 2

   return 0;
}

// Output
//
// Address of c: 2686784
// Value of c: 22
//
// Address of pointer pc: 2686784
// Content of pointer pc: 22
//
// Address of pointer pc: 2686784
// Content of pointer pc: 11
//
// Address of c: 2686784
// Value of c: 2


// Common mistakes when working with pointers
// Suppose, you want pointer pc to point to the address of c. Then,
//
// int c, *pc;
//
// // Wrong! pc is address whereas, c is not an address.
// pc = c;
//
// // Wrong! *pc is the value pointed by address whereas, %amp;c is an address.
// *pc = &c;
//
// // Correct! pc is an address and, %amp;pc is also an address.
// pc = &c;
//
// // Correct! *pc is the value pointed by address and, c is also a value.
// *pc = c;
// In both cases, pointer pc is not pointing to the address of c.
