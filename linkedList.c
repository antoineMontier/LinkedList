#include "LikedList.h"
void createList(List *l){
  l->head = NULL;
  l.queue = NULL;
  size = 0;
}

void insertHead(List *l, int x){
  Cell * c = malloc(sizeof(Cell));
  c->val = x;
  if(l->size == 0){ //manage the exception of an empty List
    l.queue = c;
    l.head = c;
    l.size = 1;
  }else{
    c->next = l-> head;
    l->head = c;
    size++;
  }
}
