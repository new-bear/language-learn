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

// lamada 值捕获
void fcn1() {
  int32_t i = 42;
  auto f1 = [i]() { return i; };

  // 隐式值捕获
  auto f2 = [=]() { return i; };
  i = 0;

  std::cout << f1() << std::endl;
  std::cout << f2() << std::endl;
}

// lamada 引用捕获
void fcn2() {
  int32_t i = 42;
  auto f1 = [&i]() { return i; };

  // 隐式引用捕获
  auto f2 = [&]() { return i; };
  i = 0;

  std::cout << f1() << std::endl;
  std::cout << f2() << std::endl;
}

// lamada 值捕获+修改值
void fcn3() {
  int32_t i = 42;
  // auto f1 = [i]()  { i++; }; // 编译报错
  auto f2 = [i]() mutable { i++; };

  f2();
  std::cout << i << std::endl; // 输出42
}

bool check_size(const std::string s, std::string::size_type sz) {
  return s.size() >= sz;
}

// 参数绑定，值传递
void biggies2(std::vector<std::string> words, std::string::size_type sz) {
  // 找到第一个长度大于sz的元素
  auto wc = std::find_if(words.begin(), words.end(),
                         std::bind(check_size, std::placeholders::_1, sz));

  // 统计个数
  auto count = words.end() - wc;
  std::cout << count << " " << std::endl;
}

std::ostream &print(std::ostream &os, const std::string &s, char c) {
  return os << s << c;
}

// 参数绑定，引用传递
void print_words(std::vector<std::string> words) {
  std::for_each(
      words.cbegin(), words.cend(),
      std::bind(print, std::ref(std::cout), std::placeholders::_1, '*'));
}

int main() {
  std::vector<std::string> words = {"the",  "quick", "red",  "fox", "jumps",
                                    "over", "the",   "slow", "red", "turtle"};

  biggies(words, 4);
  std::cout << std::endl;

  fcn1();
  std::cout << std::endl;
  fcn2();
  std::cout << std::endl;
  fcn3();
  std::cout << std::endl;

  biggies2(words, 4);
  std::cout << std::endl;

  print_words(words);
}