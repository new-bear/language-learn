#include <iostream>

class complex {
private:
  double real_, image_;

public:
  // 构造函数
  complex() : real_{0}, image_{0} {} // 默认构造函数
  complex(double real) : real_{real}, image_{0} {}
  complex(double real, double image) : real_{real}, image_{image} {}

  // setter and getter
  void real(double in_real) { real_ = in_real; }

  double real() const { return real_; }

  void image(double in_image) { image_ = in_image; }

  double image() const { return image_; }

  // 重载运算符
  complex &operator+=(const complex &z) {
    real_ += z.real_;
    image_ += z.image();

    return *this;
  }

  complex &operator-=(const complex &z) {
    real_ -= z.real();
    image_ -= z.image();

    return *this;
  }

  void print() {
    std::cout << "Real: " << real_ << std::endl;
    std::cout << "Image: " << image_ << std::endl;
  }
};

int main() {
  complex z1;
  std::cout << "## z1" << std::endl;
  z1.print();
  std::cout << "\n";
  z1.real(2);
  z1.image(3);
  z1.print();
  std::cout << "\n";

  std::cout << "## z2" << std::endl;
  complex z2 = {10, 2};
  z2.print();
  std::cout << "\n";

  std::cout << "## z1 += z2" << std::endl;
  z1 += z2;
  z1.print();
  std::cout << "\n";

  return 0;
}