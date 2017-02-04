

#include <stdio.h>

char name[30];
char *pointer;
// funciton declaration
void printMeet(char *pointer);

int main() {
  printf("What is your name? ");
  scanf("%s", name);
  printf("%s\n", name);
  printf("size of pointer: %lu\n", sizeof(pointer));
  pointer = &name[0]; //assign pointer pointer to the name array first element

  printMeet(pointer);

}

void printMeet(char  *pointer) {
  for (int i=0; i < sizeof(pointer); i++) {
    printf("%c", *pointer);
  }
  printf("\n");
}
