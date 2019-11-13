// Interface for a list Abstract Data Type (ADT)
// Author: Finbar Berkon
// Date: November 2019

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "List.h"

// given two linked lists, add list2 to the end of list1 so that they form a
// single linked list, and return the head of that list
Node list_append(Node list1, Node list2) {
    if (list1 == NULL) {
        return list2;
    }
    
    Node curr = list1;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    curr->next = list2;
    
    return list1;
}

// given a linked list, create a copy of the list, and return the head of the 
// new list
// Note: the list should duplicate every node in memory not just provide 
// duplicate pointers to the same list
Node copy(Node head) {
    if (head == NULL) {
        return NULL;
    }
    
    Node new_head = malloc(sizeof(struct node));
    new_head->data = head->data;

    Node last_new_node = new_head;
    Node curr = head->next;

    while (curr != NULL) {
        last_new_node->next = malloc(sizeof(struct node));
        last_new_node = last_new_node->next;
        last_new_node->data = curr->data;
        curr = curr->next;
    }
    last_new_node->next = NULL;
    
    return new_head;
}

// given two lists, determine if they are identical, returning TRUE or FALSE 
// accordingly
int identical(Node head1, Node head2) {
    // TODO implement this function and change return value
    return FALSE;
}

// given a linked list, determine whether it is in strictly increasing order, 
// returning TRUE or FALSE accordingly
int ordered(Node head) {
    // TODO implement this function and change return value
    return FALSE;
}

// given two lists in strictly increasing order, return a new linked list (in 
// strictly increasing order) of the elements in both set1 and set2
Node set_intersection(Node set1, Node set2) {
    // TODO implement this function and change return value
    return NULL;
}

// given two linked lists in strictly increasing order, return a new linked list
// (in strictly increasing order) of the elements in either set1 or set2 - no 
// duplicates (only include them once)
Node set_union(Node set1, Node set2) {
    // TODO implement this function and change return value
    return NULL;
}
