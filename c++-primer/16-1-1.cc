// 函数模板
#include <iostream>

template <typename T> int compare(const T &v1, const T &v2) {
  if (v1 < v2)
    return -1;
  if (v2 < v1)
    return 1;
  return 0;
}

template <typename T> T foo(T *p) {
  T tmp = *p;
  return tmp;
}

// 非类型模板参数 
template <uint32_t N, uint32_t M>
int compareStr(const char (&p)[N], const char (&q)[M]) {
  return std::strcmp(p, q);
}

int main() {
  std::cout << compare(1, 2) << std::endl;
  std::cout << compareStr("123", "456") << std::endl;
}