#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Neeraj Pal <neerajpal09@gmail.com>");
MODULE_DESCRIPTION("Working Sample  Character Driver");

static int __init hello_init(void) {

	printk(KERN_ALERT "HELLO LOADED \n");
	return 0;
	}

static void __exit hello_exit(void) {

	printk(KERN_ALERT "HELLO UNLOADED\n");
	}

module_init(hello_init);
module_exit(hello_exit);
