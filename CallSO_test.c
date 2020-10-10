#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
	long int CallSO_Check = syscall(548);
	printf("%ld\n",CallSO_Check)
	return 0;
}
