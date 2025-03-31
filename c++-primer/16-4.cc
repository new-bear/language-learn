// 可变参数模板
#include <iostream>

template <typename T, typename... Args> void func(T t, Args... args) {
  std::cout << t << std::endl;

  std::cout << sizeof...(args) << std::endl;
}

int main() {
  func(1, 2.0);
  func("4", false, 3.0);
}