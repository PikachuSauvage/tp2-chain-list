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
    int get_nbr_elts();
    void insert(Node* node, int position);
    void pushback(Node* node);
    void popback();
};
#endif
