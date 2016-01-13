#include "Vector.h"
#include "Node.h"
#include "List.h"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
int main(){
  cout<<"Hello World"<<endl;
  Vector v1=Vector();
  Vector v2=Vector(3,4);
  Vector v3=Vector(v2);
  Node n1=Node(v1);
  Node n2=Node(v2);
  List L1=List(&n1);
  L1.pushback(&n2);
  
  printf("%d",L1.get_nbr_elts());

  return 0;
  
}
