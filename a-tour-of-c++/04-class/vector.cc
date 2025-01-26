#include <algorithm>
#include <initializer_list>
#include <iostream>

class Vector {
private:
  double *elem_;
  long size_;

public:
  Vector(long size) : elem_(new double[size]), size_(size) {
    for (long i = 0; i < size; i++) {
      elem_[i] = 0;
    }
  }

  Vector(std::initializer_list<double> lst)
      : elem_(new double[lst.size()]), size_(static_cast<long>(lst.size())) {
    std::copy(lst.begin(), lst.end(), elem_);
  }

  ~Vector() { delete[] elem_; }

  long size() const { return size_; }

  double &operator[](long i) { return elem_[i]; }
};