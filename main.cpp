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
  List* L1=new List(v2);
  (*L1).insert(v3,1);
  (*L1).insert(v3,1);
  
  printf("%d\n",(*L1).get_nbr_elts());

  return 0;
  
}
