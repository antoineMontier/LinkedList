#include<stdio.h>
#include<stdlib.h>

typedef struct Cell {
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

void setCell(Cell *c, int val);

int getCell(Cell *c);

int nextExists(Cell *c);

void displayCell(Cell*c);

void createList(List * l);//implemented, to verify

void removeList(List *l);

void insertHead(List *l, int x);//implemented, to verify

int isEmpty(List *l);

int listSize(List *l);

void displayLis(List*l);
