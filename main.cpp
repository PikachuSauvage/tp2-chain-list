#include "Vector.h"
#include "Node.h"
#include "List.h"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
int main(){
  Vector* v1=new Vector();
  Vector* v2=new Vector(3,4);
  Vector* v3=new Vector(*v2);
  Node* n1=new Node(*v1);
  Node* n2=new Node(*v2);
  List* L1=new List(n1);
  (*L1).pushback(n2);
  
  printf("%d",(*L1).get_nbr_elts());

  return 0;
  
}
