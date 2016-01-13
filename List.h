#ifndef LIST_H
#define LIST_H
#include "Node.h"

class List{
  protected:
    Node* head_;
    int nbr_elts_;
  public:
    List();
    List(const List& liste);
    List(Node* head);

};
#endif
