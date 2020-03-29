#include <stdio.h>
#include "test.h"
#include "sub.h"
#include "more.h"
#include "static.h"
#include "dynamic.h"

int main()
{
	printf("this is main function!\n");
	test();
	SubFunction();
	more();
	static_test();
	dynamic_test();
	return 0;
}
