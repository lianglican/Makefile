#include <stdio.h>
#include "comm.h"
#include "static.h"

int static_test(void)
{
	printf("this is static lib function!!!!version=%d \n", VER); 
	commfun();
	return 0;
}