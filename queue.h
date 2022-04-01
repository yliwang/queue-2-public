#pragma once

#include "defs.h"

#include "list.h"


struct queue
{
	struct singly_linked_list ssl;	
};

struct queue *create_queue();
struct queue *init_queue(struct queue *q);
void uninit_queue(struct queue *q );

struct queue *enter(struct queue *q, T e);
T leave(struct queue *q);





