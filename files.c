#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
	char buffer1, buffer2;

   	int f1 = open("file1.txt", O_RDWR);
	int f2 = open("file2.txt", O_RDWR);
   	if (!f1) 
	{ 
		perror("fopen file1"); 
		return 1;
	}
	if (!f2) 
	{ 
		perror("fopen file2"); 
		return 1;
	}

	while(read(f1, &buffer1, 1)!=0)
	{
		read(f2, &buffer2, 1);
		lseek(f1, -1, SEEK_CUR);
		lseek(f2, -1, SEEK_CUR);
		write(f1, &buffer2, 1);
		write(f2, &buffer1, 1);
	}
	close(f1);
	close(f2);
   	return 0;
}


