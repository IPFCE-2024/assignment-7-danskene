#include "stack.h"
#include <stdlib.h>




void initialize(stack *s) {
  s->head = NULL;
}

void push(int x, stack *s) {
node *n = (node*) malloc(sizeof(node));
n->data = x;
n->next = s->head;
s->head = n;

}

int pop(stack *s) {
node *n = (node*) malloc(sizeof(node));
n = s->head;
s->head = s->head->next;
int verdi = n->data;
  return verdi;
}

bool empty(stack *s) {
  if(s->head == NULL){
    return true;
  }
  return false;
}

bool full(stack *s) {
  // HAHAHAHAHA
  return false;
}
