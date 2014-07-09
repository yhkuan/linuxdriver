#include <linux/init.h>
#include <linux/module.h>
#include "add_sub.h"

extern int add_integer(int, int);
extern int sub_integer(int, int);

static int a = 1;
static int b = 1;
static int AddOrSub = 1;

static int test_init(void)
{
	int result = 0;
	printk(KERN_ALERT "test init\n");
	if(1==AddOrSub){
		result = add_integer(a, b);
	}else{
		result = sub_integer(a, b);
	}

	printk(KERN_ALERT "The %s result is %d\n", AddOrSub == 1? "Add":"Sub", result);
	return 0;
}

static void test_exit(void)
{
	printk(KERN_ALERT "test exit\n");
}

module_init(test_init);
module_exit(test_exit);

module_param(a, int, S_IRUGO);
module_param(b, int, S_IRUGO);
module_param(AddOrSub, int, S_IRUGO);

MODULE_LICENSE("Dual BSD/GPL");
