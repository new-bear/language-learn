#include <cstddef>
#include <iostream>
#include <list>
#include <tuple>
#include <vector>

int main() {
  // 定义 tuple
  std::tuple<std::size_t, std::size_t, std::size_t> threeD{1, 2, 3};
  std::tuple<std::string, std::vector<double>, int, std::list<int>> someVal(
      "someVal", {1.0, 2.0, 3.0}, 42, {1, 2, 3, 4, 5});

  auto item = std::make_tuple("1", 2, 3.0);

  // 获取 tuple 元素
  std::cout << std::get<0>(item) << std::endl;
  std::cout << std::get<1>(item) << std::endl;
  std::cout << std::get<2>(item) << std::endl;
}