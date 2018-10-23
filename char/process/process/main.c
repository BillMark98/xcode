//
//  main.c
//  process
//
//  Created by Bill on 17/5/24.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>
void * print_hello_world(void * tid);
int main(int argc, const char * argv[]) {
    // insert code here...
    /*printf("Hello, World!\n");
    pid_t pid;
    pid = fork();
    if(pid<0) {
        fprintf(stderr,"fork failed");
        exit(-1);
    }
    else if(pid == 0) {
        execlp("/bin/ls","ls",NULL);
        printf("childe\n");
    }
    else {
        wait(NULL);
        printf("childe complete");
        printf(" parent\n");
        exit(0);
    }
    */
    pthread_t threads[10];
    int status ,i;
    for(i = 0; i < 10; i++)
    {
        printf("Main here. Creating thread %d\n",i);
        status = pthread_create(&threads[i], NULL, print_hello_world, (void *)i);
        if(status != 0) {
            printf("Oops, pthread_create returned error code %d\n",status);
            exit(-1);
        }
    }
    return 0;
}
void * print_hello_world(void * tid)
{
    printf("Hello World. Greetings from thread %d\n",tid);
    pthread_exit(NULL);
}
