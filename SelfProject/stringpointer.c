// File Name: stringpointer.c
// Program Purpose:  
//


#include <stdio.h>

int main() {

  char abcString[26] = {'A', 'B', 'C'}; // Assign the char array to store String
  // char abcString[] = {'A', 'B', 'C'};  //Also work
  char altString[26] = "DEF";
  char *strPointer = &abcString[0];        // Assign a char pointer to point to the address of char array
  char *altPointer = &altString;

  printf("The strings are : %s \n", &abcString);
  // The string are : ABC
  printf("The pointers are : %s \n", strPointer);
  // The pointer are : ABC

  printf("The strings are : %s \n", &altString);
  // The string are : DEF
  printf("The pointers are : %s \n", altPointer);
  // The pointer are : DEF


  return 0;
}
