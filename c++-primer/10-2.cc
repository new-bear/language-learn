#include <iostream>
#include <numeric>
#include <stack>
int main() {
  std::vector<int> intVec{1, 2, 3, 4, 5};

  auto result = std::find(intVec.cbegin(), intVec.cend(), 3);
  std::cout << (result == intVec.cend()) << std::endl;

  int sum = std::accumulate(intVec.cbegin(), intVec.cend(), 0);
  std::cout << sum << std::endl;

  std::fill(intVec.begin(), intVec.begin() + intVec.size() / 2, 0);
  for (auto in : intVec) {
    std::cout << in << std::endl;
  }
  std::cout << std::endl;

  std::vector<int> intVec2;
  std::fill_n(std::back_inserter(intVec2), 3, 0); // 使用插入迭代器
  for (auto in : intVec2) {
    std::cout << in << std::endl;
  }
}