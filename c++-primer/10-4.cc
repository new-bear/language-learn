
// 插入迭代器
#include <iostream>
#include <iterator>
#include <list>

void printList(const std::list<int> &list) {
  for (auto i : list) {
    std::cout << i << " ";
  }

  std::cout << std::endl;
}

void inserterIteratorFunc() {
  std::list<int> list1{1, 2, 3, 4, 5};
  std::list<int> list2{2};
  std::list<int> list3{3};
  std::list<int> list4{4};
  std::list<int> list5{5};

  // 使用 push_back
  // list2 = {2 1 2 3 4 5}
  std::copy(list1.cbegin(), list1.cend(), std::back_inserter(list2));
  // 使用 push_front
  // list3 = {5 4 3 2 1 3}
  std::copy(list1.cbegin(), list1.cend(), std::front_inserter(list3));
  // 使用 insert + begin
  // list4 = {1 2 3 4 5 4}
  std::copy(list1.cbegin(), list1.cend(), std::inserter(list4, list4.begin()));
  // 使用 insert + end
  // list5 = {5 1 2 3 4 5}
  std::copy(list1.cbegin(), list1.cend(), std::inserter(list5, list5.end()));

  printList(list2);
  printList(list3);
  printList(list4);
  printList(list5);
}

void iostreamIteratorFunc() {
  std::cout << "请输入整数，以EOF结束：" << std::endl;

  std::istream_iterator<int> is(std::cin);
  std::istream_iterator<int> eof;

  std::vector<int> vec{};

  // 输入
  while (is != eof) {
    vec.push_back(*is);
    ++is;
  }

  // 输出
  std::cout << "输入的整数为：" << std::endl;
  std::ostream_iterator<int> os(std::cout, " ");
  std::copy(vec.cbegin(), vec.cend(), os);
  std::cout << std::endl;
}

void reserverIteratorFunc() {
  std::list<int> list1{1, 2, 3, 4, 5};

  // 逆序输出
  std::copy(list1.crbegin(), list1.crend(),
            std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  // 逆序查找
  std::string line("01237456789");
  auto index = std::find(line.crbegin(), line.crend(), '7');
  std::cout << std::string(line.crbegin(), index) << std::endl; // 输出 98
}

int main() {
  inserterIteratorFunc();

  iostreamIteratorFunc();

  reserverIteratorFunc();

  return 0;
}