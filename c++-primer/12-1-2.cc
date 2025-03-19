#include <string>

std::string *factory() { return new std::string("test"); }

int main() {
  std::string *test = factory();
  delete test;    // 不 delete 会造成内存泄露
  test = nullptr; // 避免野指针
}