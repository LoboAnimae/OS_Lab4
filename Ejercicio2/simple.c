#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

int simple_init(void)
{
  printk(KERN_INFO "Loading Module\nI don't what I wanna say here");
  return 0;
}
void simple_exit(void)
{
  printk(KERN_INFO "Removing module\nStill don't know what to say here");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Este módulo es un ejemplo para el LAB4");
MODULE_AUTHOR("Andrés Quan-Littow");
