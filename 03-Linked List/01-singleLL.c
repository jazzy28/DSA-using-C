//not sequential structure.
//may take longer time
//data and struct node *link : pointing to a same type of structure
//single link: moves forward only
//arrays cannot be created dynamically, but using structures it can be done. add an element and connect it with link

#include <stdio.h>

struct node{
    char data;
    struct node *link;
};

struct node *head;
struct node *p;

p = head -> link -> link; //data inside the second node

printf("%c", head -> link -> link -> link -> link -> data);
