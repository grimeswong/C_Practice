

#include <stdio.h>

int main() {

    int n, i;
    float num[100], sum = 0.0, average;

    printf("Enter a number of elements: ");
    scanf("%d", &n); //get the address of int 'n'

    while (n > 100 || n <=0 ) {     // looping if the user input a number out of range
      printf("Error! number should in range of (1 to 100).\n");
      printf("Enter the number again: ");
      scanf("%d", &n);
    }

    for(i = 0; i < n; ++i) {  //self increment before process
      printf("%d. Enter number: ", i+1);
      scanf("%f", &num[i]);
      sum += num[i];
    }

    average = sum / n;
    printf("Average = %.2f \n", average);

    return 0;
}
