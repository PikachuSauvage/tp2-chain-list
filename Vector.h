#ifndef VECTOR_H
#define VECTOR_H
class Vector{
 protected:
  float x_;
  float y_;
  float norme_;
  void updateNorme();
 public:
  void add(float x, float y);
  Vector();
  Vector(const Vector& model);
  Vector(float x, float y);
  float scalarProduct(const Vector& b);
  ~Vector();
};
#endif
