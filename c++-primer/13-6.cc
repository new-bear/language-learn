#include <utility>
int main() {
  int i = 42;
  int &r = i; // 正确，左值引用可以绑定左值
  // int &r2 = i * 42;       // 错误，左值引用不能绑定右值
  const int &r3 = i * 42; // 正确，const 左值引用能绑定右值

  int &&rr = i * 42;  // 正确，右值引用能绑定右值
  int &&rr2 = i * 42; // 正确，右值引用能绑定右值
  // int &&rr2 = i;            // 错误，右值引用不能绑定左值
  int &&rr3 = std::move(i); // 正确，std::move 返回右值
  // int &&rr4 = rr3;          // 错误，rr3 已经右值
}