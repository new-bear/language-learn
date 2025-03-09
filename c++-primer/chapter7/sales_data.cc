#include <string>

class Sales_data {
public:
  // 显式定义默认构造函数
  Sales_data() = default;

  Sales_data(std::string s, unsigned int c, double p)
      : bookNo(s), unitsSold(c), revenue(c * p) {}

  // 委托构造函数
  Sales_data() : Sales_data("", 0, 0) {}
  Sales_data(std::string s) : Sales_data(s, 0, 0) {}

  // explicit 阻止隐式转换
  // 由于隐式转换只能用于1个参数的构造函数，所以explicit
  // 也只能用于1个参数的构造函数
  explicit Sales_data(std::istream &is) : Sales_data() {}

private:
  std::string bookNo;
  unsigned int unitsSold;
  double revenue;
};