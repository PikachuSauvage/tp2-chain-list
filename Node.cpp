#include "Node.h"
#include <malloc.h>
#include <cstddef>
#include <iostream>

Node::Node(){
  next = nullptr;
  obj = new Vector();
  }

Node::Node(const Node& model){
  if (model.next != nullptr){
    next = new Node(const *(model.next));
    }
  else{
    next = nullptr;
    }
  obj = model.obj;
  }

Node::Node(const Vector& vec){
  next = nullptr;
  obj = new Vector(vec);
  }

Vector* Node::get_obj(){
  return obj;
}

Node* Node::get_next(){
  return next;
}

void Node::set_obj(Vector* model){
  delete obj;
  obj=model;
}

void Node::set_next(Node* node){
  delete next;
  next=node;
}
