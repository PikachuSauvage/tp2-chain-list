#include "Node.h"
#include <malloc.h>


Node::Node(const Vector& model){
  obj = new Vector(model);
  next=NULL;
}

//Getters
Vector* Node::get_obj(){
  return obj;
}

Node* Node::get_next(){
  return next;
}

//Setters
void Node::set_obj(Vector* model){
  delete obj;
  obj=model;
}

void Node::set_next(Node* node){
  delete next;
  next=node;
}

//Autres constructeurs
Node::Node(){
  next = nullptr;
  obj = new Vector();
  }

Node::Node(const Node& model){
  if (model.next != nullptr){
    next = new Node(*(model.next));
    }
  else{
    next = nullptr;
    }
  obj = new Vector(*model.obj);
  }

Node::Node(Node* ptra,Vector* ptrb){
  next=ptra;
  obj=ptrb;
}

//Destructeur
Node::~Node(){
  delete next;
  delete obj;
  }
