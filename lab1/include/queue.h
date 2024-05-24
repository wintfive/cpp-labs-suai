#ifndef QUEUE
#define QUEUE
#include "element.h"

class Queue {
private:
  Element* head;
  Element* tail;

public:
  Queue();
  ~Queue();
  /* TODO:  конструктор копирования, конструктор присваивания */
  void Push(int data);
  void Print();
};

#endif /* QUEUE */