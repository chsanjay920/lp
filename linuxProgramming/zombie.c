#include <stdio.h>
#include<fcntl.h>
#include <sys/wait.h>
int main(void)
{
	pid_t child_pid = fork();
	if(fork > 0)
	{
	wait(0);
	sleep(10);
	printf("Parent Process");
	}
	else{
	
	printf("child process");
	
	}
	return 0;
}
