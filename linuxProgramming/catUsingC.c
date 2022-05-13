#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#define MAX_SIZE 1000
int main()
{
	int fd1,n;
	char buff[1000],fname[20];
	printf("enter file name");
	scanf("%s",fname);
	fd1 = open(fname,O_RDONLY);
	if(fd1 == -1)
	printf("the file does not exist");
	else{
	printf("the content of file");
	n = read(fd1,buff,1000);
	write(1,buff,n);
	}
}
