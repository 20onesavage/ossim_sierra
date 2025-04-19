#include "common.h"
#include "syscall.h"
#include "stdio.h"

int __sys_xxxhandler(struct pcb_t * proc, struct sc_regs * regs) {
    printf("The first system call parameter is %d\n", regs->a1);
    return 0;
}