//
//  main.cpp
//  fork_me
//
//  Created by Bill on 17/6/24.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <unistd.h>
#include <stdio.h>
int main() {
    pid_t fpid;//fpid表示fork函数返回的值
    /*printf("fork!");
    //printf("fork!\n");
    fpid = fork();
    if (fpid < 0)
        printf("error in fork!");
    else if (fpid == 0)
        printf("I am the child process, my process id is %d\n", getpid());
    else
        printf("I am the parent process, my process id is %d\n", getpid());
    */
    /*int i;
    for(i=0;i<2;i++){
        pid_t fpid=fork();
        if(fpid==0)
            printf("%d child  %4d %4d %4d\n",i,getppid(),getpid(),fpid);
        else
            printf("%d parent %4d %4d %4d\n",i,getppid(),getpid(),fpid);
    }
     */
    /*fork();
    fork() && fork() || fork();
    fork();*/
    fork()||fork();
    printf("+\n");
    return 0;
}
