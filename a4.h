#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int window;
    struct _node *next;
} node;

node *openWindow(node *head, int window);
node *switchWindow(node *head, int window);
node *closeWindow(node *head, int window);