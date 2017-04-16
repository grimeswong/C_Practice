//
//
// print out counter to see the main thread and the child thread

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *printCounter(void *m);

int main()
{
  pthread_t t1;

  pthread_create(&t1, NULL, printCounter, NULL);

  // if pthread_join happen here (child print first, and parent wait for child, then print)
  pthread_join(t1, NULL);
  // result as below:
  // Child Counter: 1
  // Child Counter: 2
  // Child Counter: 3
  // Child Counter: 4
  // Child Counter: 5
  // Parent Counter: 1
  // Parent Counter: 2
  // Parent Counter: 3
  // Parent Counter: 4
  // Parent Counter: 5

  /*** counter print ***/
  for(int i=1; i<=5; i++) {
    printf("Parent Counter: %i\n",i);
    sleep(1);
  }
  /*** end counter print ***/

  // if pthread_join happen here (both parent and child thread print)
  // pthread_join(t1, NULL);
  // result as below:
  // Parent Counter: 1
  // Child Counter: 1
  // Parent Counter: 2
  // Child Counter: 2
  // Parent Counter: 3
  // Child Counter: 3
  // Child Counter: 4
  // Parent Counter: 4
  // Parent Counter: 5
  // Child Counter: 5

}

void *printCounter(void *m)
{
    for(int i=1; i<=5; i++) {
      printf("Child Counter: %i\n",i);
      sleep(1);
    }
    return NULL;
}
