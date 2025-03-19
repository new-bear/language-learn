#include <memory>
#include <string>

int main() {
  std::unique_ptr<std::string> p1(new std::string("123"));
  p1.release(); // 错误，p1 指向内存不会自动释放，发生内存泄露

  std::unique_ptr<std::string> p2(new std::string("123"));
  std::unique_ptr<std::string> p3(p2.release());
  // 正确，p3 管理p2 释放指针，p2 指向nullptr
}