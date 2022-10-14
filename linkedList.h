#include<stdio.h>
#include<stdlib.h>

typedef struct Cell {//missunderstanding of the difference between "." and "->"
  int val;
  struct Cell * next;
}Cell;

typedef struct{
  Cellule * head;
  Cellule * queue;
  int size;
}List;

void createCell(Cell *c);

void setNext(Cell *prev, Cell *next);

void setCell(Cell *c, int val);//OK, to check

int getCell(Cell *c);//implemented, to check

int nextExists(Cell *c);//implemented to check

void displayCell(Cell*c);//implemented, to try

void createList(List * l);//implemented, to verify

void removeList(List *l);//implemented, to verify

void insertHead(List *l, int x);//implemented, to verify

void insertQueue(List*l, int x);

int isEmpty(List *l);

int listSize(List *l);//implemented, to try

void displayLis(List*l);
