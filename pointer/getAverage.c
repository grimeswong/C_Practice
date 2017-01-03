// C programming allows passing a pointer to a function. To do so,
// simply declare the function parameter as a pointer type.
//
// Following is a simple example where we pass an unsigned long pointer to a function
// and change the value inside the function which reflects back in the calling function −


#include <stdio.h>

/* function declaration */
double getAverage(int *arr, int size);

int main () {

   /* an int array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   /* pass pointer to the array as an argument */
   avg = getAverage( balance, 5 ) ;

   /* output the returned value  */
   printf("Average value is: %f\n", avg ); // floating point
   return 0;
}

double getAverage(int *arr, int size) {

   int  i, sum = 0;
   double avg;

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }

   avg = (double)sum / size;
   return avg;
}
