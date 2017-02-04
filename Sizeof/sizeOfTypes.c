#include <stdio.h>
#include <string.h>

int main(void) {

  printf("char is %lu bytes\n", sizeof(char));  // %lu show size of the bytes
  printf("float is %lu bytes\n", sizeof(float));  //6 floating points
  printf("double is %lu bytes\n", sizeof(double));  //15 floating points
  printf("long double is %lu bytes\n", sizeof(long double));  //19 floating points
  printf("long long is %lu bytes\n", sizeof(long long));

  printf("int is $ %lu bytes\n", sizeof(int));
  printf("unsigned int is $ %lu bytes\n", sizeof(unsigned int));


}
