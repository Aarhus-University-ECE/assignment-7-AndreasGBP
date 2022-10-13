#include "stack.h"

void initialize(stack* s){
  //implement initialize here
 s -> head = NULL; //Initialize by setting head to NULL
}

void push(int x, stack* s){
    //implement push here
      node *next_node = (node*)malloc(sizeof(node)); //Creates memory space size of node
      next_node -> next = s -> head; //Links node to start of list
      s -> head = next_node; //head pointer now points to new empty memory space size of node
      s -> head -> data = x; //Pushes value x to head
}

int pop(stack* s)
{
  // implement pop here
  int pop_value;
  node *temp = s -> head; //Temporary pointer used for free space
  pop_value = s -> head -> data;
  s -> head = s -> head -> next; //Makes the pointer head point to the next element in the list
  free(temp); //Free the space that head pointed to before
    
  return pop_value;
}

bool empty(stack* s)
{
  //Implement empty
  if(s -> head == NULL) //Checks if head is equal to NULL if it is true the stack is currently empty
    return true;

  return false;
}

bool full(stack* s) {
    //Implement full
    
    //Making a function that checks if its full does not make sense I think, since the only limit for a linked list
    //like this is the entire memory of the system. This is probably also why there isn't a test to check if this i made properly
  return false;
}