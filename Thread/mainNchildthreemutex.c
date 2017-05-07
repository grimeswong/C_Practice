//
// main thread read line, and child print the line
// Using three mutexes


#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *print(void *m);

struct data {
  pthread_mutex_t mainlock;
  pthread_mutex_t childlock;
  pthread_mutex_t thirdlock;
};


int main ()
{
  int rt;
  pthread_t tid;
  pthread_attr_t attr;

  struct data d;
  struct data *dPtr = &d;

  // Initialize main thread mutex
  rt = pthread_mutex_init(&(d.mainlock), NULL);
  if(rt != 0) {
    perror("Couldn't make pthread init");
  } else {
    printf("Main thread: pthread init successful\n");
  }

  rt = pthread_mutex_init(&(d.childlock), NULL);
  rt = pthread_mutex_init(&(d.thirdlock), NULL);

  // Lock main thread
  rt = pthread_mutex_lock(&(d.mainlock));
  if(rt != 0) {
    perror("Main: Couldn't make lock main thread");
  } else {
    printf("Main thread: pthread lock successful\n");
  }

  rt = pthread_mutex_lock(&(d.childlock));
  rt = pthread_create(&tid, NULL, print, dPtr);


  printf("pthread create code: %d\n", rt);
  printf("Parent: I'm the first\n");
  sleep(3);
  rt = pthread_mutex_unlock(&(d.mainlock));  // main unlock, so child can continue

  rt = pthread_mutex_lock(&(d.thirdlock));

  rt = pthread_mutex_lock(&(d.childlock));   //test the child is still printing
  pthread_mutex_unlock(&(d.childlock));      // unlock the child lock for destroying


  printf("Child is unlock now\n");


  printf("User typed enter\n");
  sleep(3);
  rt = pthread_mutex_unlock(&(d.thirdlock)); // the user has pressed enter, then release thirdlock that child thread can continue

  rt =pthread_mutex_lock(&(d.mainlock));   // test the child thread is ready to exit
  pthread_mutex_unlock(&(d.mainlock));     // unlock the main for destroying

  printf("Child is done, program is done\n");

  /*** make sure all the lock is unlock ***/

  rt = pthread_mutex_destroy(&(d.mainlock));
  printf("Destroy main_lock code: %d\n", rt);
  rt = pthread_mutex_destroy(&(d.childlock));
  printf("Destroy child_lock code: %d\n", rt);
  rt = pthread_mutex_destroy(&(d.thirdlock));
  printf("Destroy third_lock code: %d\n", rt);
  pthread_join(tid, NULL);



  pthread_exit(NULL);
  return 0;
}

void *print(void *m)
{
    int rt;
    struct data *dataPtr = m;
    rt = pthread_mutex_lock(&dataPtr->mainlock);     // try to get the mainlock; blocked

    printf("Child: I'm the second\n");
    sleep(3);
    rt = pthread_mutex_unlock(&dataPtr->childlock);      // child unlock, then main can continue
    rt = pthread_mutex_lock(&dataPtr->thirdlock);        // test the third lock (waiting the user to press enter)
    pthread_mutex_unlock(&dataPtr->thirdlock);          // unlock the third lock for destroying

    printf("Child is exiting now\n");
    sleep(3);
    rt = pthread_mutex_unlock(&dataPtr->mainlock);       // main unlock, then main thread can continue


    return NULL;
}
