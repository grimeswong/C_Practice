//
// main thread read line, and child print the line
// Using one mutex


#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *print(void *m);

struct data {
  pthread_mutex_t lock1;
};


int main ()
{
  int rt;
  pthread_t tid;
  pthread_attr_t attr;

  struct data d;
  struct data *dPtr = &d;

  // Initialize main thread mutex
  rt = pthread_mutex_init(&(d.lock1), NULL);



  // Lock main thread
  rt = pthread_mutex_lock(&(d.lock1));      // Use lock1: lock the main thread

  // Create the child thread
  rt = pthread_create(&tid, NULL, print, dPtr);

  printf("pthread create code: %d\n", rt);
  printf("Parent: I'm the first\n");
  // sleep(3);
  pthread_mutex_unlock(&(d.lock1));       // Unlock lock1: release lock to child thread
  sleep(3);
  pthread_mutex_lock(&(d.lock1));       // Try to get lock1: wait for child thread to release the lock
  printf("Main: User has pressed enter\n");
  pthread_mutex_unlock(&(d.lock1));       // Unlock lock1: release lock to child thread

  //
  // printf("Main: child thread has exited, system exiting...\n");
  //

  pthread_join(tid, NULL);
  pthread_exit(NULL);   // the last thing main thread should do
  return 0;
}

void *print(void *m)
{
    int rt;
    struct data *dataPtr = m;
    rt = pthread_mutex_lock(&dataPtr->lock1);     // Test lock1: try to get the lock1; blocked
    printf("Child: I'm the second\n");
    rt = pthread_mutex_unlock(&dataPtr->lock1);   // Unlock lock2: release lock to main thread


    rt = pthread_mutex_lock(&dataPtr->lock1);     // Test lock1: try to get the lock1; blocked
    printf("Child: Received main signal that user has pressed enter\n");
    printf("Child: Child thread exiting...\n");
    rt = pthread_mutex_unlock(&dataPtr->lock1);   // Unlock lock2: release lock to main thread

    sleep(3);

    return NULL;
}
