#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main() {
   int fd = open("lala.txt", O_WRONLY|O_CREAT, 0777);
   if (fd==-1) { perror("open"); } // errno, #include <errno.h>
   fprintf(stderr, "File is opened, fd=%d\n", fd);

   int ret = write(fd, "Lol\n", 4);
   fprintf(stderr, "Write is finished, %d bytes written\n", ret);
   return 0;
}

