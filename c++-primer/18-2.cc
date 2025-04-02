// 命名空间

#include <iostream>
class class1 {};

namespace name1 {
namespace name2 {
class class2 {};

} // namespace name2

inline namespace inline_name2 {
class class3 {};
} // namespace inline_name2

namespace {
class class4 {};
} // namespace

name2::class2 c21;
class3 c31; // 内联命名空间
class4 c41; // 匿名命名空间
} // namespace name1

int main() {
  ::class1 c11; // 全局命名空间
  class1 c12;

  name1::name2::class2 c21; // 嵌套命名空间

  using namespace name1::name2; // using 声明
  class2 c22;
}