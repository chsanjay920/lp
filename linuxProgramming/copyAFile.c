#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#define MAX_SIZE 1000
int main()
{
	int f1,f2,r1,w1;
	char buffer[1000];
	char sourcename[100],destname[100];
	printf("enter source file");
	scanf("%s",sourcename);
	printf("enter new file name");
	scanf("%s",destname);
	f1 = open(sourcename,O_RDONLY);
	r1 = read(f1,buffer,1000);
	f2 = open(destname,O_CREAT|O_RDWR,0600);
	w1 = write(f2,buffer,r1);
	return 0;
}
