#include <initializer_list>
#include <memory>
#include <vector>
#include <iostream>
#include <stdexcept>

class StrBlob {
public:
  typedef std::vector<std::string>::size_type size_type;

  StrBlob() : data(std::make_shared<std::vector<std::string>>()){};
  explicit StrBlob(std::initializer_list<std::string> il)
      : data(std::make_shared<std::vector<std::string>>(il)){};

  // 添加和删除元素
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }

  void push_back(const std::string &t) { data->push_back(t); }
  void pop_back() {
    check(0);
    return data->pop_back();
  };

  // 元素访问
  std::string &front() {
    check(0);
    return data->front();
  }

  std::string &back() {
    check(0);
    return data->back();
  }

private:
  std::shared_ptr<std::vector<std::string>> data;
  void check(size_type i) const {
    if (i >= data->size())
      throw std::out_of_range("out_of_range");
  };
};

int main() {
  StrBlob b1;
  StrBlob b2({"a", "an", "the"});

  b1 = b2;
  b2.push_back("about");

  std::cout << b1.size() << std::endl;
  std::cout << b2.size() << std::endl;
}