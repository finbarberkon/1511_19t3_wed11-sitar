// Create linked lists
// Author: Finbar Berkon
// Date: July 2019

// We include stdio (standard input / output) to use printf and scanf etc
#include <stdio.h>
// We have to include stdlib (standard library) in order to use malloc
#include <stdlib.h>


#define N_ELEMENTS 6

struct overall {
    struct node *start; // Sometimes we call start 'head'
    struct node *end;   // Sometimes we call end 'tail'
};

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);
void insert_at_front(struct overall *l, int data);
void insert_at_end(struct overall *l, int data);
void insert_before_end(struct overall *l, int data);

int main(void) {
    /* Make a new 'struct overall' pointer called 'list' which we will use to 
     * keep track of the start and end of our linked list */
    struct overall *list = malloc(sizeof(struct overall));

    /* Ensure malloc succeeded and exit the program otherwise. Here, we'll print
     * out an error message, then exit our program with an exit status of 1 */
    if (list == NULL) {
        printf("Error: malloc failed\n");
        return 1;
    }

    /* Initialise all of the values inside the struct as soon as we know it was
     * successfully created */
    list->start = NULL;
    list->end = NULL;

    /* These are just some values to insert into our linked list :) */
    int values[N_ELEMENTS] = {12, 45, 54, 32, 83, 73};

    /* Loop through all of the values in our values array, and insert each value
     * into the linked list. */
    int i = 0;
    while (i < N_ELEMENTS) {
        /* Insert the number in values[i] into the front of our linked list 
         * called 'list' */
        insert_before_end(list, values[i]);
        i++;
    }
    
    return 0;
}

/* Create a new node with the specified data value and return a pointer to that
 * new node */
struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

/* Create a node (using new_node function), and then insert that node at the 
 * start of the linked list */
void insert_at_front(struct overall *l, int data) {
    struct node *new = new_node(data);
    new->next = l->start;
    l->start = new;
}

/* Create a node (using new_node function), and then insert that node at the 
* end of the linked list */
void insert_at_end(struct overall *l, int data) {
    struct node *new = new_node(data);
    
    /* When dealing with linked lists, there are some cases where you can't rely
     * on your general solution and have to write special cases.
     * 
     * Very often (including in the lab this week!) you will need to write a
     * special case for when the list is empty, which I've done here */
    if (l->end == NULL) {
        l->start = new;
        l->end = new;
    } else {
        l->end->next = new;
        l->end = new;
    }
}

/* Create a node (using new_node function), and then insert that node just
 * BEFORE the last element */
void insert_before_end(struct overall *l, int data) {
    struct node *new = new_node(data);    
    struct node *curr = l->start;

    /* Here's another special case for when the list is empty */
    if (curr == NULL) {
        l->start = new;
        l->end = new;
        return;
    }

    /* Because we want to insert an element BEFORE the last node in the list, 
     * our general solution won't work when there is only 1 element in the list
     * (meaning our new element has to be the new start of the list), so we can
     * also deal with it specially here. */
    else if (l->start == l->end) {
        l->start = new;
        new->next = l->end;
        return;
    }

    /* Now that we've dealt with the special cases, we can go on and deal with
     * the general case for a list with >2 elements.
     * Note here that I am checking whether curr->NEXT is not the end. This is
     * so that our loop will stop when curr is pointing at the node right before
     * the end node (not at the end node itself) */ 
    while (curr->next != l->end) {
        curr = curr->next;
    }

    /* Now we can insert our new node after the current node.
     * Notice the order I do this in:
     * FIRST: I connect my new node up to the list,
     * THEN: I can change my curr pointer to the list.
     * This ensures we don't end up losing the end of the list!
     *
     * This is the case where curr->next is changed BEFORE new->next. curr->next
     * stops pointing to the remaineder of the list and now points to the new
     * node. This means we have lost our only reference to the remainder of the 
     * list.
     * /---\     /---\     /---\     /---\
     * | 7 | --> | 4 | --> | 2 |     | 9 | --> X
     * \---/     \---/     \---/     \---/ 
     *                       |
     *                       |
     *                       v
     *                     /---\
     *                     | 5 | --> X
     *                     \---/
     * 
     * Instead, we can connect new up to the rest of the list first, so that
     * when we move curr->next we haven't lost our only reference to the rest of
     * the list.
     * /---\     /---\     /---\     /---\
     * | 7 | --> | 4 | --> | 2 | --> | 9 | --> X
     * \---/     \---/     \---/     \---/ 
     *                               ^
     *                              /
     *                            /
     *                         /---\
     *                         | 5 |
     *                         \---/
     * 
     * Now, moving curr->next to new doesn't lose the remainder of the list
     * because new->next now holds a pointer to it as well.
     * /---\     /---\     /---\     /---\
     * | 7 | --> | 4 | --> | 2 |     | 9 | --> X
     * \---/     \---/     \---/     \---/ 
     *                        \      ^
     *                         \    /
     *                          V  /
     *                         /---\
     *                         | 5 |
     *                         \---/
     * */
    new->next = curr->next;
    curr->next = new;
}
