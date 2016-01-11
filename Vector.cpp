#include <cmath>
#include "Vector.h"

Vector::Vector(){
  x_ = 0;
  y_ = 0;
  updateNorme();
}
Vector::Vector(const Vector& model){
  x_ = model.x_;
  y_ = model.y_;
  updateNorme();
}
Vector::Vector(float x, float y){
  x_ = x;
  y_ = y;
  updateNorme();
}

void Vector::add(float x, float y){
  x_ += x;
  y_ += y;
  updateNorme();
}

void Vector::updateNorme(){
  norme_=sqrt(pow(x_,2.0)+pow(y_,2.0));
}

float Vector::scalarProduct(const Vector& b){
  return x_*b.x_+y_*b.y_;
}

Vector::~Vector(){}
