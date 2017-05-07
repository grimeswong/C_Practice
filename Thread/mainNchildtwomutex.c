//
// main thread read line, and child print the line
// Using two mutexes


#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *print(void *m);

struct data {
  pthread_mutex_t lock1;
  pthread_mutex_t lock2;

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
  rt = pthread_mutex_init(&(d.lock2), NULL);


  // Lock main thread
  rt = pthread_mutex_lock(&(d.lock1));      // Use lock1: lock the main thread

  // Create the child thread
  rt = pthread_create(&tid, NULL, print, dPtr);

  printf("pthread create code: %d\n", rt);
  printf("Parent: I'm the first\n");
  pthread_mutex_unlock(&(d.lock1));       // Unlock lock1: release lock to child thread

  pthread_mutex_lock(&(d.lock2));       //Test lock2: test the child lock: blocked

  pthread_mutex_unlock(&(d.lock2));     // Unlock lock2: return lock 2 to child thread
  pthread_mutex_lock(&(d.lock1));       //Use Lock1: lock the main thread

  sleep(3);
  printf("Main: User has pressed enter");
  pthread_mutex_unlock(&(d.lock1));     // Unlock lock1: release lock to child thread

  pthread_mutex_lock(&(d.lock2));     //Test lock2: test the child lock: blocked
  printf("Main: child thread has exited, system exiting...\n");
  pthread_mutex_unlock(&(d.lock2));

  /*** make sure all the lock is unlock ***/
  rt = pthread_mutex_destroy(&(d.lock1));
  printf("Destroy main_lock code: %d\n", rt);
  rt = pthread_mutex_destroy(&(d.lock2));
  printf("Destroy child_lock code: %d\n", rt);

  pthread_join(tid, NULL);
  pthread_exit(NULL);   // the last thing main thread should do
  return 0;
}

void *print(void *m)
{
    int rt;
    struct data *dataPtr = m;
    rt = pthread_mutex_lock(&dataPtr->lock2);     // Use lock2: lock the child thread:
    rt = pthread_mutex_lock(&dataPtr->lock1);     // Test lock1: try to get the lock1; blocked
    printf("Child: I'm the second\n");
    rt = pthread_mutex_unlock(&dataPtr->lock2);   // Unlock lock2: release lock to main thread

    pthread_mutex_lock(&dataPtr->lock2);
    rt = pthread_mutex_lock(&dataPtr->lock1);     // Test lock1: try to get the lock1; blocked
    printf("Child: Received main signal that user has pressed enter");
    printf("Child: Child thread exiting...");

    sleep(3);

    pthread_mutex_unlock(&dataPtr->lock1);
    pthread_mutex_unlock(&dataPtr->lock2);




    return NULL;
}
