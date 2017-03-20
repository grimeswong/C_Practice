



#include <stdio.h>
#include <string.h>

int main () {

  printf("This program shows the character and string's array and pointer\n");

  /*** Characters ***/
  char characters[] = "ABCDE";
  char *charPtr = characters;
  for(int i=0; i < strlen(characters); i++) {
      printf("%c\n", *(charPtr+i));
  }
  //  Result:    A
              // B
              // C
              // D
              // E

  char *strPtr = "FGHIJ";
  for(int i=0; i < strlen(strPtr); i++) {
      printf("%c\n", *(strPtr+i));
  }

  //  Result:    F
              // G
              // H
              // I
              // J

  /*** String ***/  //array size is fixed once if declared,
  char *strArr[] = {"He", "She", "It"};   //Declare string Array
  printf("%s\n", strArr[0]);
  printf("%s\n", strArr[1]);
  printf("%s\n", strArr[2]);
  

  return 0;
}
