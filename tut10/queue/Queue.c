
#include <stdio.h>
#include <stdlib.h>

#include "Queue.h"

struct queue {
    Node head;
};

struct node {
    Item data;
    Node next;
}

Queue newQueue() {
    Queue new = malloc(sizeof(struct queue));
    new->head = NULL;
    return new;
}

static Node newNode(Item data) {
    Node new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

void add(Node n, Queue q) {
    if (q->head == NULL) {
        q->head = n;
        return;
    }
    
    Node curr = q->head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    curr->next = n;
}
