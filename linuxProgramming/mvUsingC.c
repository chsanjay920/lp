#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#define MAX_SIZE 1000
int main(int argc,char *argv[])
{
	open(argv[1],O_RDONLY);
	creat(argv[2],S_IWUSR);
	rename(argv[1],argv[2]);
	unlink(argv[1]);
}
