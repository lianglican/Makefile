#include <stdio.h>
#include "comm.h"
#include "dynamic.h"

#ifdef __cplusplus
extern "C" {
#endif

int dynamic_test(void)
{
	printf("this is dynamic lib function!!!!version=%d \n", DY_VER); 
	commfun();
	return 0;
}

#ifdef __cplusplus
}
#endif
