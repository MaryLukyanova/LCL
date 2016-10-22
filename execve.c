#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int  main(int argc, char* argv[])
{
    	execve("script.txt", argv, NULL);
	return 0;
}
