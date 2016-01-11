#define "Vector.h"
#define "Node.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>

//Constructeur

List::List(){
  head_=nullptr;
  nbr_elts_=0;
}

List::List(const List& liste){
  head_=liste.start;
  nbr_elts_=0;
}

List::List(Node){
  head_*=Node;
  nbr_elts_=1;
}

/*
List::insert(Node node){
  Node*=
  head_*=Node.next;

//
*/
