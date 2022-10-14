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
    l->queue = c;
    l->head = c;
    l->size = 1;
  }else{
    c->next = l-> head;
    l->head = c;
    size++;
  }
}

int listSize(List *l){
  if(*l == NULL){
    return 0;
  }
  return l-> size;
}

void displayCell(Cell*c){
  printf("%d", c->val);
}

void removeList(List*l){
  Cell *p;
  while(p != NULL){//set the pointer as the next cell of the head then delete the head then set the head as the pointed cell then re-set p as the next cell of the head and so on
    *p = l->head->next;
    free(l->head);
    l->head = p;
  }
  free(l->head);//free the last cell
  free(p);//free the pointer used by the while loop
  free(l);//free the data of the list
}

int nextExists(Cell*c){
  if(c->next != NULL){
    return 1;
  }else{
    return 0;
  }
}

int getCell(Cell*c){
  return c->val;
}

void setCell(Cell*c, int x){
  c->val = x;
}

void insertQueue(List*l, int x){
  Cell*c = malloc(sizeof(Cell));
  c->val = val;
  c->next = NULL
  //first, if the list is empty :
  if(l->size == 0){
    l->queue = c;
    l->head = c;
    l->size = 1;
  }else{
    l->queue->next = c;
    l->queue = c;
    l->size++;
  }
}
