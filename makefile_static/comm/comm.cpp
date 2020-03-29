#include <stdio.h>
#include <comm.h>

int commfun(void)
{
	printf("this is comm function which in static lib!!! V=%d \n", VVV);
	return 0;
}