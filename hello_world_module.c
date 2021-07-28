#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static init __init hello_world_init(void)
{

	printk(KERN_INFO,"Welcome to  rainmen!!\n");
	return 0;
}

static void __exit hello_world_exit(void)
{
	printk(KERN_INFO,"kernel module removed fine...\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

MODUE_LICENSE("GPL");
MODULE_AUTHOR("rainmen");
MODULE_DESCRIPTION("A simple  first  devicedriver ");
MODULE_VERSION("2:1.0");

