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
    List(Vector* head);
    ~List();
    int get_nbr_elts();
    void insert(Vector* node, int position);
    void pushback(Vector* node);
    void popback();
};
#endif
