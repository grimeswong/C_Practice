
  // Alert Escape "\a"

  #include <stdio.h>

  int main() {
    int i=0;
    while(1){ // 1 means true

      printf("\a");
      i++;
      printf("i = %d\n", i);
    }

    return 0;
  }
