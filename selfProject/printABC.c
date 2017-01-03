#include <stdio.h>
#include <string.h>



int main() {

  char stringArray[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char temp[sizeof(stringArray)];


  for (int i=0;i<sizeof(stringArray);i++) {
    printf("%c", stringArray[i]);
    temp = temp + stringArray[i];
    // strcat(temp, &stringArray[i]);
    // printf("%s",temp);
  }


  return 0;
}
