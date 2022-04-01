#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

#include "queue.h"

struct node *create_node(T e)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));

	p->item = e;
	p->next = NULL;

	return p;
}

struct queue *init_queue(struct queue *q)
{
	q->front_node = NULL;
	q->rear_node = NULL;

	return q;
}

struct queue *enter(struct queue *q, T e)
{
	struct node *p = create_node(e);

	if (q->rear_node == NULL) {
		q->rear_node = p;
		q->front_node = p;
	}
	else {
		q->rear_node->next = p;
		q->rear_node = p;
	}

	return q;
}

T leave(struct queue *q)
{
	T v;
	struct node *p;

	assert(q->front_node != NULL);

	v = q->front_node->item;

	p = q->front_node->next;

	free(q->front_node);

	q->front_node = p;
	if (p == NULL) q->rear_node = NULL;

	return v;
}

