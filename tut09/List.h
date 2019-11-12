// Interface for a list Abstract Data Type (ADT)
// Author: UNSW CSE
// Date: July 2019

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0

struct node {
    int data;
    struct node *next;
};

typedef struct node *Node;

struct node *copy(struct node *head);

int identical(struct node *head1, struct node *head2);

int ordered(struct node *head);

//============================================================================//
//=========== Functions to allow us to interact with the list ADT ============//

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat);

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(char **argv, int size);

// prints out the list given the head of a list
void print_list(struct node *head);

// frees all the elements in a linked list
void free_list(struct node *head);

// return the number of items in the linked list
int num_items(struct node *head);
