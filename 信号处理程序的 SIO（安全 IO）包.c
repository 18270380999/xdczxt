#include "csapp.h"

ssize_t sio_putl(long v);
ssize_t sio_puts(char s[]);


void sio_error(char s[]);

ssize_t sio_puts(char s[]) 
{
    return write(STDOUT_FILENO, s, sio_strlen(s));
}

ssize_t sio_putl(long v) 
{
    char s[128];

    sio_ltoa(v, s, 10); 
    return sio_puts(s);
}

void sio_error(char s[]) 
{
    sio_puts(s);
    _exit(1);
}