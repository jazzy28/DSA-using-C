//last node will contain null

#include <stdio.h>

struct node{
    int i;
    struct node *link;
};

struct node *head;
struct node *temp;

temp = head; //temp pointer, so that head isn't lost

while(t != NULL){ //or while(t)
printf("%d", temp->i);
temp = temp -> link;
}
