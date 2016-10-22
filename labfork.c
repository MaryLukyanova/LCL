#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid, ppid;
	pid = getpid();
	int status; 
	printf ("parent PID: %d\n", pid);
	if(fork())
	{
		pid = getpid();
		printf ("parent PID 2: %d\n", pid);
		wait(&status);
	}
	else  
	{
		pid = getpid();
		ppid = getppid();
		printf ("child PID: %d\n", pid);
		printf ("PPID: %d\n", ppid);
		wait(&status);
		return 0;
	}
}	
