#include <linux/kernel.h>
#include <sys/utsname.h>

asmlinkage long CallSO(void)
{
    printk("Operating System: %s\nRelease: %s\nVersion: %s\n", utsname()->system, utsname()->release, utsname()->version );
    return 0;
}