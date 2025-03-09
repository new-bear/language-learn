/*
和其他常量对象或者引用一样，成员ci 和ri 都必须被初始化
*/
class ConstRef {
public:
  ConstRef(int ii);

private:
  int i;
  const int ci;
  int &ri;
};

// ConstRef::ConstRef(int ii) {
//   i = ii; // 正确
//   ci = i; // 错误
//   ri = i; // 错误
// }

ConstRef::ConstRef(int ii) : i(ii), ci(i), ri(i) {}
