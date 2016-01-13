#include "Vector.h"
#include "Node.h"
#include "List.h"
#include <stdio.h>
#include <iostream>
#include <cstddef>

//Constructeur

List::List(){
  head_=nullptr;
  nbr_elts_=0;
}

List::List(const List& liste){
  head_=new Node(*liste.head_);
  nbr_elts_=liste.nbr_elts_;
}

List::List(Node* head){
  head_=head;
  nbr_elts_=1;
}

void List::pushback(Node* node){
	Node* ptr=head_;
	while((*ptr).get_next()!=nullptr){
		ptr=(*ptr).get_next();
	}
	(*ptr).set_next(node);
  nbr_elts_++;
}

void List::popback(){
	Node* ptr=head_;
	while((*ptr).get_next()!=nullptr){
		ptr=(*ptr).get_next();
	}
	delete ptr;
  nbr_elts_--;
}

void List::insert(Node* node, int position){
    if(position==0){
      (*node).set_next(head_);
      head_=node;
    }
    else{
      Node* ptr=head_;
      for(int i=0;i<position-1;i++){
          ptr=(*ptr).get_next();
      }
      (*node).set_next((*ptr).get_next());
      (*ptr).set_next(node);
    }
}

int List::get_nbr_elts(){
    return nbr_elts_;
}

