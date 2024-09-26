#include "a4.h"

node *openWindow (node *head, int window) {
    // Create new node
    node *new_node = (node *)malloc(sizeof(node));
    new_node->window = window;

    // Insert node into end of list
    if (head == NULL) new_node->next = NULL;
    else new_node->next = head;
    return (new_node);
}

node *switchWindow (node *start, int window) {
    node *head = start;
    node *curr = start;
    node *prev = start;

    // Already at head
    if (head->window == window) return(head); 

    // Go to the window that needs to be moved up
    while (curr != NULL) {
        if (curr->window == window) {
            prev->next = curr->next;
            curr->next = head;
            return(curr);
        }
        else {
            prev = curr;
            curr = curr->next;
        }
    }
    
}

node *closeWindow (node *start, int window) {
    
    node *head = start;
    node *curr = start;
    node *prev = start;

    while (curr != NULL) {
        if (head->window == window) {
            head = curr->next;
            free(curr);
            break;
        }
        if (curr->window == window) {
            prev->next = curr->next;
            free(curr);
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    return(head);

}