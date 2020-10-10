#include <linux/kernel.h>
#include <linux/utsname.h>

asmlinkage long CallSO(void)
{
    printk("Operating System: %s\nRelease: %s\nVersion: %s\n", utsname()->sysname, utsname()->release, utsname()->version );
    return 0;
}
