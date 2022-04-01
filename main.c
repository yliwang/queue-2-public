#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

#include "queue.h"

void main()
{
	char *str = "hello world";

	struct queue q;
	int i, v;
	int len;

	len = strlen(str);

	init_queue(&q);

	for (i = 0; i < len; i++) {
		enter(&q, str[i]);
	}

	for (i = 0; i < len; i++) {
		v = leave(&q);
		printf("%c, ", v);
	}

}