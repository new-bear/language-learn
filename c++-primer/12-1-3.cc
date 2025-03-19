#include <iostream>
#include <memory>

void TestFunc(std::shared_ptr<int> p) { return; }
// p离开作用域后被释放，其指向空间被回收

int main() {
  int *x = new int(1);
  TestFunc(std::shared_ptr<int>(x)); // 正确
  int j = *x; // 错误，x指向空间已被回收；编译通过，运行通过
  std::cout << j << std::endl;

  // 推荐做法，使用 make_shared 而不是 new，避免 new 的对象被使用在其它地方
  TestFunc(std::make_shared<int>(1)); 

  return 0;
}