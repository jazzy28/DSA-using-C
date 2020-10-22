//linear search in linked list

struct node *linearSearch_LinkedList(struct node *head, int target){
  if(head){
    while(head){
      if(head -> data == target)
        return head;
      head = head -> next;
    }
  }
  return head;
}
