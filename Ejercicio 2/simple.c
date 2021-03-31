#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

int simple(void) {
    printk(KERN_INFO "Loading Module")
}