// 类模板
#include <initializer_list>
#include <memory>
#include <vector>

// T 默认是 int
template <typename T = int> class Blob {
public:
  typedef T value_type;
  typedef typename std::vector<T>::size_type size_type;

  // 构造函数
  Blob();
  Blob(std::initializer_list<T> il)
      : data(std::make_shared<std::vector<T>>(il)){};

  // Blob 中的元素个数
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }

private:
  std::shared_ptr<std::vector<T>> data;
  void check(size_type i, const std::string &msg) const;
};

int main() {
  Blob<int> ia;
  Blob<int> ia2 = {0, 1, 2, 3, 4, 5};
  Blob<> ia3 = {0, 1, 2}; // T 默认是 int
}