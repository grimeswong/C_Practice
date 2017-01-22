

#include <stdio.h>

// char message[30;]  //set limit to the array
char message[];       //still work

void printHello();

int main() {
  printf("What your name ? ");
  scanf("%s", message);           // Must specify the type of input and which variable should be stored
  printHello(message);
  return 0;
}

void printHello(char message[]) { // brackets[] should put after variable name
  printf("Hello, %s\n", message);
}
