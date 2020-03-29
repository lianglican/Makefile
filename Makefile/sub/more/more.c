#include "more.h"
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int more(void)
{
	printf("this is more function,Version=%d \n", MORE_VERSION);
	return 0;
}

#ifdef __cplusplus
}
#endif
