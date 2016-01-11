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
  next=nullptr;
  obj=nullptr;
}
	
Node::Node(const Node& noeud){
  next=noeud.ptrToNext;
  obj=noeud.ptrToObj;
}

Node::Node(Node* ptra,void* ptrb){
  next=ptra;
  obj=ptrb;
}
