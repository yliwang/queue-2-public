#pragma once

#include "defs.h"

struct node
{
	T item;
	struct node *next;
};

struct queue
{
	struct node *front_node;
	struct node *rear_node;
};

struct node *create_node(T e);
struct queue *init_queue(struct queue *q);
struct queue *enter(struct queue *q, T e);
T leave(struct queue *q);





