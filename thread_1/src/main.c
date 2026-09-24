#include <zephyr/kernel.h>

#define STACK_SIZE 1024

void my_thread (void)
{
	while(1)
	{
		printk("Inside my_thread!");
		k_msleep(1000);
	}
}

K_THREAD_DEFINE(my_tid, 1024, my_thread, NULL, NULL, NULL, 5, 0, 0);
