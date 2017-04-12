


#include <string.h>
#include <stdio.h>

// char str1[4] = "ABC";
char str1[10] = "ABC";
char str2[4] = "123";
char *cPtr = &str1[0];
char *stringPtr = &str1[0];

char *catString(char *pointer);
void catStringRef(char *pointer);

int main(void) {
  strcat(str1,str2); //if str1 array has only 4, the str1 doesn't have enough room for storing the concatinated word with str2;
  cPtr = &str2[0];

  printf("%s\n", cPtr);   //print 123
  printf("%c\n", *cPtr);  //print 1

  /*use pointer to change the value */
  stringPtr = "Change letter";
  printf("%c\n", *stringPtr);   //print C
  printf("%s\n", stringPtr);    //print Change letter
  printf("%s\n", str1);         //print ABC123

  stringPtr = &str2[0];
  printf("%c\n", *stringPtr);   //print 1
  printf("%s\n", stringPtr);    //print 123
  printf("%s\n", str2);         //print 123

  // call by value
  printf("%s\n",catString(cPtr)); //print 4829

  // call by reference
  catStringRef(cPtr);
  printf("%s\n",cPtr); //print

  return 0;
}

char *catString(char *pointer) { // call by value
  pointer = "4829";
  return pointer;
}

void catStringRef(char *pointer) {
  *pointer[0] = 'D';
}
