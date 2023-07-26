#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>

/*
 * an application-specific pthread main function
 * must have this function prototype: int func_name (void *args)
 *
 * any given implementation knows what type is really passed in 
 *	args: pointer to an int value
 */


void *my_thr_main(void *args)
{
	int num;
	char *r_str;

	if ((r_str = (char *) malloc (sizeof (char) * 20)) == NULL) {
			perror("malloc() error");
			exit (2);
	}

	strcpy(r_str, "This is a test");
	
	// first recast args to an int *, then dereference to get int value
	num = *((int *) args);	// num gets 6
				
	printf("value of num is: %d\n", num);
	
	pthread_exit(r_str);
	

}

int main()
{
	int x;
	int t_ret;
	pthread_t tid;
	void *ret;

	x = 6;
	// pass the address of int varible (x) to pthread_create's void *
	// param (we recast &x as a (void *) to match the type of
	// thread_create's param
	
	t_ret = pthread_create(&tid, NULL,
			my_thr_main, // a thread main function
			(void *)(&x)); // &x will be passed to my_thr_main
	
	if (t_ret != 0) {
		perror("pthread_create() error");
		exit(1);
	}

	if(pthread_join(tid, &ret) != 0) {
		perror("pthread_create() error");
		exit(3);
	}

	printf("thread exited with '%s'\n",(char *) ret);

	free(ret);
	ret = NULL;

	
	return 0;
}

