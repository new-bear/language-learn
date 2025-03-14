#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void biggies(std::vector<std::string> &words,
             std::vector<std::string>::size_type sz) {
  // 按长度排序
  std::stable_sort(words.begin(), words.end(),
                   [](const std::string &a, const std::string &b) {
                     return a.size() < b.size();
                   });

  // 找到第一个长度大于sz的元素
  auto wc = std::find_if(words.begin(), words.end(),
                         [sz](const std::string &s) { return s.size() >= sz; });

  // 统计个数
  auto count = words.end() - wc;
  std::cout << count << " " << std::endl;

  // 输出
  std::for_each(wc, words.end(),
                [](const std::string &s) { std::cout << s << " "; });
  std::cout << std::endl;
}

void fcn1() {
  int32_t i = 42;
  auto f = [i]() { return i; };
  i = 0;

  std::cout << f() << std::endl;
}

void fcn2() {
  int32_t i = 42;
  auto f = [&i]() { return i; };
  i = 0;

  std::cout << f() << std::endl;
}

int main() {
  std::vector<std::string> words = {"the",  "quick", "red",  "fox", "jumps",
                                    "over", "the",   "slow", "red", "turtle"};

  biggies(words, 4);

  fcn1();
  fcn2();
}