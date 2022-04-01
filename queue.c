#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

#include "queue.h"


struct queue *init_queue(struct queue *q)
{
	init_list( &q->sll );
	
	return q;
}

struct queue *create_queue()
{
	struct queue *q;
	
	q = (struct queue *)malloc( sizeof(struct queue) );
	
	return init_queue( q );
}

void uninit_queue( struct queue *q )
{
	free_list( q->sll.head );
}
