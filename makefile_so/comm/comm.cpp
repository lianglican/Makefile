#include <stdio.h>
#include <comm.h>

int commfun(void)
{
	printf("this is comm function which in dynamic lib!!! V=%d \n", DY_VVV);
	return 0;
}
