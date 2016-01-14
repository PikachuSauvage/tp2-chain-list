#ifndef NODE_H
#define NODE_H
#include "Vector.h"

class Node{
  friend class List;
 protected:
  Vector* obj;
  Node* next;
  Node(const Node& model);
  Node(const Vector& model);
  Node();
 public:
  Node(Node* ptra,Vector* ptrb);
  Vector* get_obj();
  Node* get_next();
  void set_obj(Vector* model);
  void set_next(Node* node);
  ~Node();
};
#endif
