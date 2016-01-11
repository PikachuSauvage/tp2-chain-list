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

//Getters
Vector* Node::get_obj(){
  return obj;
}

Node* Node::get_next(){
  return next;
}

//Setters
void Node::set_obj(Vector* model){
  obj=model;
}

void Node::set_next(Node* node){
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
