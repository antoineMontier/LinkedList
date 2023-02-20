#include<stdio.h>
#include<stdlib.h>


typedef struct Cell {//missunderstanding of the difference between "." and "->"
  int val;
  struct Cell * next;
}Cell;

typedef struct{
  Cell * head;
  Cell * queue;
  int size;
}List;

void linkCell(Cell *prev, Cell *next);//TO TRY ;; creat a link (copy the adress of next cell in the "next" field of prev cell)

void setCell(Cell *c, int val);//OK, to check

int getCell(Cell *c);//implemented, to check

int nextExists(Cell *c);//implemented to check

void displayCell(Cell*c);//implemented, to try

void createList(List * l);//implemented, to verify

void removeList(List *l);//implemented, to verify

void insertHead(List *l, int x);//implemented, to verify

void insertQueue(List*l, int x);//implemented, to try

int isEmpty(List *l);//implementes, to try

int listSize(List *l);//implemented, to try

void displayList(List*l);//OK, to try
