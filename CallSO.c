#include <stdio.h>
#include <linux/kernel.h>
#include <sys/sysinfo.h>
#include <sys/utsname.h>

int main () {
    struct utsname unameData;
    uname(&unameData);

    printf("Operating System: %s\nRelease: %s\nVersion: %s\n", unameData.sysname,unameData.release,unameData.version);
    return 0;
}