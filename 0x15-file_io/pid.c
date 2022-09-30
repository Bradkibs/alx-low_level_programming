#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	pid_t my_pid;
	my_pid = getpid();
	printf("%u\n", my_pid);
	pid_t my_ppid;
	my_ppid = getppid();
	printf("%u\n", my_ppid);
	return (0);
}
