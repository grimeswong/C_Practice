#include <stdio.h>

int main(void) {
    // char name[100];
    // gets(name);
    char name[100]; //must initialize the size of array before use
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("hello, %s\n", name);
}
