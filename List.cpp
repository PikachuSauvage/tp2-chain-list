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

/*
List::insert(Node node){
  Node*=
  head_*=Node.next;

//
*/
