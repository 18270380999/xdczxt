#define RIO_BUFSIZE 8192
typedef struct {
    int rio_fd;                
    int rio_cnt;               
    char *rio_bufptr;         
    char rio_buf[RIO_BUFSIZE]; 
} rio_t;
void main(rio_t *rp, int fd)
{
    rp->rio_fd = fd;
    rp->rio_cnt = 0;
    rp->rio_bufptr = rp->rio_buf;
}