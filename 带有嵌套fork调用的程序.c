#include <sys/types.h>
#include <unistd.h>

pid_t fork(void);

int main()
{
    int x = 1;
    
    if (Fork() == 0)
        printf("p1: x=%d\n", ++x);
    printf("p2: x=%d\n", --x);
    exit(0);
}