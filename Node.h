#ifndef NODE_H
#define NODE_H
#include "Vector.h"

class Node{
 protected:
  Vector* obj;
  Node* next;
 public:
  Node(const Node& model);
  Node(const Vector& model);
  Node();
  Node(Node* ptra,void* ptrb);
  Vector* get_obj();
  Node* get_next();
  void set_obj(Vector* model);
  void set_next(Node* node);
};
#endif
