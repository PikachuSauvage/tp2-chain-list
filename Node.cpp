#include "Node.h"
#include <malloc.h>

/*Node::Node(){
  next=NULL;
  obj=NULL;
  }*/

/*Node::Node(const Node& model){
  //assert?
  next=NULL;//?
  obj=model.obj;
  }*/

Node::Node(const Vector& model){
  Vector* newadr = new Vector;
  Vector newobj = Vector(model);
  next=NULL;
  obj=newadr;
}

Vector* Node::get_obj(){
  return obj;
}

Node* Node::get_next(){
  return next;
}

void Node::set_obj(Vector* model){
  obj=model;
}

void Node::set_next(Node* node){
  next=node;
}
