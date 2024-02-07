#include "csapp.h"

void sigint_handler(int sig) 
{
    Sio_puts("Caught SIGINT!\n"); 
    _exit(0);                    
}

void handler2(int sig)
{
    int olderrno = errno;

    while (waitpid(-1, NULL, 0) > 0) {
        Sio_puts("Handler reaped child\n");
    }
    if (errno != ECHILD)
        Sio_error("waitpid error");
    Sleep(1);
    errno = olderrno;
}